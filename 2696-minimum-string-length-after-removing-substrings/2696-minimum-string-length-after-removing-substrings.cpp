class Solution {
public:
    // Brute force solution: would be the recursively removing the substring, you can also used the built-in function .find() -> TC: O(n^2)
    // int minLength(string s) {
    //     // Continue processing while "AB" or "CD" substrings exist
    //     while (s.find("AB") != -1 || s.find("CD") != -1) {
    //         if (s.find("AB") != -1) {
    //             // Remove all occurrences of "AB"
    //             s.erase(s.find("AB"), 2);
    //         } else if (s.find("CD") != -1) {
    //             // Remove all occurrences of "CD"
    //             s.erase(s.find("CD"), 2);
    //         }
    //     }

    //     return s.length();
    // }



    // Better approach: Stack solution: TC -> O(n), SC -> O(n)
    int minLength(string s) {
        stack<char> st;
        for(int i=0; s[i] != '\0'; i++){
            // if the stack is not empty and the top of the stack forms a valid pair with the current character
            if(!st.empty() && (st.top() == 'A' || st.top() == 'C') && st.top() == s[i] - 1){
                // pop thee stack if you find a valid pair (A-B or C-D)
                st.pop();
            } else{
                // push the current char onto the stack if no pair is found
                st.push(s[i]);
            }
        }

        // the remainging characters in the stack respresent the minimum length of modified string
        return st.size();
    }

    
};