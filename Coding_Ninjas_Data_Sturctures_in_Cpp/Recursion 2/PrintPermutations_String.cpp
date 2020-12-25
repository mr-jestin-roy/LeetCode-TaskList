Print Permutations - String
Given a string, find and print all the possible permutations of the input string.
Note : The order of permutations are not important. Just print them in different lines.
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba


/******************************************************** SOLUTION ******************************************************************/


#include <iostream>
#include <string>
using namespace std; 
void printPermutationsHelper(string input, string output){ 
    if(input.length() == 0){
        cout << output << endl; 
        return;
    }
    for(int i = 0; i<= output.length(); i++){
        printPermutationsHelper(input.substr(1), output.substr(0,i) + input[0] + output.substr(i));
    }
}
void printPermutations(string input){ 
    printPermutationsHelper(input, "");
    return;
}
