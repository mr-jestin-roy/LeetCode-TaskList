#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

// Function to count maximum possible operations
int maxOperations(string s) {
    int n = s.length();
    set<string> seen;
    queue<pair<string, int> > q;
    q.push(make_pair(s, 0));
    seen.insert(s);
    
    int maxOps = 0;
    
    while(!q.empty()) {
        string curr = q.front().first;
        int ops = q.front().second;
        q.pop();
        maxOps = max(maxOps, ops);
        
        // Try all possible positions
        for(int i = 0; i < n-1; i++) {
            string next = curr;
            // Try AB -> BA
            if(curr[i] == 'A' && curr[i+1] == 'B') {
                swap(next[i], next[i+1]);
                if(seen.find(next) == seen.end()) {
                    seen.insert(next);
                    q.push(make_pair(next, ops + 1));
                }
            }
            
            next = curr;
            // Try BC -> CB
            if(curr[i] == 'B' && curr[i+1] == 'C') {
                swap(next[i], next[i+1]);
                if(seen.find(next) == seen.end()) {
                    seen.insert(next);
                    q.push(make_pair(next, ops + 1));
                }
            }
        }
    }
    
    return maxOps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << maxOperations(s) << "\n";
    }
    
    return 0;
} 