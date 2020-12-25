Check Palindrome (recursive)
Check if a given String S is palindrome or not (using recursion). Return true or false.
Input Format :
String S
Output Format :
true or false
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false


/***************************************************** SOLUTION **************************************************************************/


int length(char input[]) { 
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) { 
        len++; 
    }
    return len;
} 
bool checkPalindrome(char input[], int start, int end) {
    if(input[0] == '\0' || input[1] == '\0') {
        return true;
    }
    if(start >= end) {
        return true;
    }
    if(input[start] == input[end]) {
        return checkPalindrome(input, start + 1, end - 1); 
    } 
    else { 
        return false;
    }
}
bool checkPalindrome(char input[]) { 
    int len = length(input);
    return checkPalindrome(input, 0, len - 1);
}
