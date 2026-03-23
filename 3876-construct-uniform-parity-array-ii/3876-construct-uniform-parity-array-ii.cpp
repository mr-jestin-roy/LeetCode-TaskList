#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // // auto countEven = 0;
        // sort(nums1.begin(), nums1.end());

        // if(nums1[0]%2) return false;
        // else return true;


       // One passsolution
        sort(nums1.begin(), nums1.end());
        if(nums1[0]%2 != 0) return true;
        int evenCount = count_if(nums1.begin(), nums1.end(), [](int num){
            return num%2 ==0;
        });
        if(evenCount == nums1.size()) return true;

        // else case when it has an odd number and the minimum num is even
        return false;
    }
};