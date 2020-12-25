Replace pi (recursive)
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
	
	
/******************************************** SOLUTION **********************************************************************************/
	
int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) { 
        len++;
    }
    return len;
}
void replacePi(char input[], int start) { 
    if(input[start] == '\0' || input[start+1] == '\0') {
        return;
    }
    replacePi(input, start+1);
    if(input[start] == 'p' && input[start+1] == 'i') {
        int len = length(input);
        input[len+2] = '\0';
        for(int i = len-1; i >= start+2; i--) { 
            input[i+2] = input[i];
        } 
        input[start] = '3';
        input[start+1] = '.'; 
        input[start+2] = '1';
        input[start+3] = '4';
    }
}
void replacePi(char input[]) {
    replacePi(input, 0);
}
