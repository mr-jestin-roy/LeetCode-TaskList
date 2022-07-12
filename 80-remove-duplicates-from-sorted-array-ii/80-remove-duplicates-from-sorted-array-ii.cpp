class Solution {
public:
    
     //USING TWO POINTER METHOD O(N) & SPACE O(1)
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
       if(n <= 2) return n;
        int i = 1, j = 1, cnt = 1;
        while(j < n){
            if(nums[j] != nums[j-1]){ //for non duplicates
                cnt = 1;
                nums[i++] = nums[j];
            }
            else{//for duplicates ,check the count < 2
                if(cnt < 2){
                    nums[i++] =nums[j];
                    cnt++;
                }
            }
            j++;
        }
        return i;
    }
};