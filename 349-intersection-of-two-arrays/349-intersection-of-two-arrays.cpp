class Solution {
public:
    //using the two pointer approach | TIME COMPLEXITY : O(N logN)
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());   //sort both the arrays first
        vector<int> result;
        int i = 0, j = 0; //setting the two pointers
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j])
            {
                 result.push_back(nums1[i]);
                //Skipping duplicates in both the arrays
                while(i+1 < nums1.size() && nums1[i+1] == nums1[i])
                    i++;
                while(j+1 < nums2.size() && nums2[j+1] == nums2[j])
                    j++;
                
                i++, j++;
            }
            else if(nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return result;
    }
};