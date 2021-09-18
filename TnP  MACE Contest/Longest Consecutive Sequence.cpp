#include <unordered_set>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
	int mx=0;
    int count =0;
    unordered_set<int> set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        int prevele  = arr[i] -1;
        if(set.find(prevele) == set.end()) {
            int j=arr[i];
            while(set.find(j)!= set.end())
                j++;
            
            mx = max(mx,j-arr[i]);
        }
    }
    return mx;
}