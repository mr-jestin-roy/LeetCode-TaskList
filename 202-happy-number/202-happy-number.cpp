class Solution {
public:
    //The idea is similar as hase-set.
    // We check the node value to check whether it is in the loop.
    bool isHappy(int n) {
        unordered_map<int,int> temp;
        while(n != 1){
            if(temp[n] == 0)
                temp[n]++;
            else
                return false; //loop detected 
            
            int sum = 0;
            while(n){
                sum += pow(n%10,2);
                n /= 10;
            }
            
            n = sum; //new n number
            
        }
        return true;
    }
};