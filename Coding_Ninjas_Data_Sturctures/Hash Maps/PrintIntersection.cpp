Code : Print Intersection
Given two random integer arrays, print their intersection. That is, print all the elements that are present in both the given arrays.Input arrays can contain duplicate elements.Note : Order of elements are not important
Sample Input 1 :
6
2 6 8 5 4 3
4
2 3 4 7 
Sample Output 1 :
2 
4 
3
Sample Input 2 :
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 
2
1

/*********************************************** SOLUTION ****************************************************************************/


//SOLUTION
void intersection (int *input1,int *input2,int size1,int size2) { 
    map<int,int> mapp;
    for(int i=0;i<size1;i++)
        mapp[input1[i]]++;
    for(int i=0 ; i<size2 ; i++){ 
        if(mapp[input2[i]] > 0) {
            mapp[input2[i]]--; 
            cout<<input2[i] << endl;
        }
    }
}
 
