class Solution
{
public:
    //Function to find the maximum profit and the number of jobs done.
    bool comparison(Job a, Job b)
    {
        return (a.profit > b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n)
    {
        sort(arr, arr + n, comparison);
        int maxi = arr[0].dead;
        for (int i = 1; i < n; i++)
        {
            maxi = max(arr[i].dead, maxi);
        }
        int slot[maxi + 1];
        for (int i = 0; i < n; i++)
        {
            slot[i] = -1;
        }

        int countJobs = 0, jobProfit = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = arr[i].dead; j > 0; j--)
            {
                if (slot[j] == -1)
                {
                    slot[j] = i;
                    countJobs++;
                    jobProfit += arr[i].profit;
                    break;
                }
            }
        }
        vector<int> res(2);
        res.push_back(countJobs);
        res.push_back(jobProfit);
        return res;
    }
};