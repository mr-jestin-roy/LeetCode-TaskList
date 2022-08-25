class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sumOfEnergy = 0, ans =0;
        for(auto i:energy)
            sumOfEnergy += i;
        if(sumOfEnergy >= initialEnergy)
            ans = sumOfEnergy - initialEnergy + 1;
        for(auto i : experience){
            if(i >= initialExperience){
                int temp = i - initialExperience + 1;
                ans += temp;
                initialExperience += temp + i;
            }
            else
                initialExperience += i;
        }
        return ans;
    }
};