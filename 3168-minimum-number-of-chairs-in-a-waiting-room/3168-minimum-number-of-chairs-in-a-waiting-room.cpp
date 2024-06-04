class Solution {
public:
    int minimumChairs(string s) {
     int minChairs = 0;
     int tempCount= 0;

     for(auto i: s){
        if(i == 'E')
            tempCount+=1;
        if(i == 'L')
            tempCount-=1;
        minChairs = max(minChairs, tempCount);
     }  
     return minChairs;
    }
};