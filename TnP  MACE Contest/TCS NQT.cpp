#include <bits/stdc++.h>
using namespace std;

//QUESTION 1 : Remove spaces from a given string 

//METHOD 1
char *remove_white_spaces(char *str){
    int i=0,j=0;
    while(str[i]){
        if(str[i] != '')
            str[j++] = str[i];
        i++;
    }
    str[j]='\0';
    return str;
} 

//METHOD 2
// Function to remove all spaces from a given string
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

//METHOD 3
// int main()
// {
//     string s = "g e e k s f o r g e e k s";
 
//     cout << "string with spaces is " << s << endl;
 
//     int l = s.length(); // storing the length of the string
 
//     int c
//         = count(s.begin(), s.end(),
//                 ' '); // counting the number of whitespaces
 
//     remove(s.begin(), s.end(),
//            ' '); // removing all the whitespaces
 
//     s.resize(l - c); // resizing the string to l-c
 
//     cout << "string without spaces is " << s << endl;
 
//     return 0;
// }

int main(){
    string str;
    cin>>str;

    cout<<remove_white_spaces(str);
    return 0;

}



//QUESTION 3: Program to remove brackets from an algebraic string
// Input- Enter the string:(x+y)-z Output- x+y-z

int removeBrackets(char ch){
    if(ch=='(' || ch == ')')
    return 1;
    else
    return 0;
}

int main(){
    string s; cin>>s;
    int j=0,len=s.size();
    char t[len];
    for(int i=0;i<len;i++){
        int temp = removeBrackets(s[i]);
        if(temp ==0){
            t[j] += s[j];
            j++;
        }
    }
    cout<<t<<endl; //final string
}