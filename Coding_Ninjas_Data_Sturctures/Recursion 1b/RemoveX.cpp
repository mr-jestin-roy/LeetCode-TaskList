Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx

/******************************************************** SOLUTION ******************************************************************/


// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
   // char output[20];
     int len = 0;
     int i, j;
    
    for( i = 0 ; input[i] != '\0' ; i++)
    {
        len++;
    }
   

    for(i=0; i<len; i++)
    {
        
        if(input[i] == 'x')
        {
            for(j=i; j<len; j++)
            {
                input[j] = input[j+1];
            }

            len--;

            
            i--;
        }
    }
    
}
