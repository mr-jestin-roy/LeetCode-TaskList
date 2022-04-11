class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int sum = 0;
        for(string i:ops){
            if(i=="D"){
                int x = s.top();
                s.push(2*x);
                sum += 2*x;
            }
            else if(i == "C"){
                int x = s.top();
                sum -= x;
                s.pop();
                
            }
            else if(i == "+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                sum += (x+y);
                s.push(x);
                s.push(x+y);
            }
            else{
                s.push(stoi(i));
                sum += stoi(i);
            }
            
        }
        return sum;
    }
};