Print Array intersection
Given two random integer arrays, print their intersection. That is, print all the elements that are present in both the given arrays.
Input arrays can contain duplicate elements.
Note : Order of elements are not important
Input format :
Line 1 : Integer N, Array 1 Size
Line 2 : Array 1 elements (separated by space)
Line 3 : Integer M, Array 2 Size
Line 4 : Array 2 elements (separated by space)
Output format :
Print intersection elements in different lines
Constraints :
0 <= M, N <= 5 * 10^7
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


/********************************************************* SOLUTION *******************************************************************/


// SOLUTION CODE
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

/*
void merge(int arr[],int si,int ei){
    int i = si;
    int mid = (si+ei)/2;
    int j = mid+1;
    int temp[ei-si+1];
    int k = 0;
    while(i<=mid && j<=ei){
        if(arr[i]>arr[j]){
            temp[k] = arr[j];
            j++;
        }
        else{
            temp[k] = arr[i];
            i++;
        }
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=ei){
        temp[k] = arr[j];
        j++;
        k++;
    }
    int l = 0;
    for(int i = si;i<=ei;i++){
        arr[i] = temp[l];
        l++;
    }
}
void merge_sort(int arr[], int si , int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge(arr,si,ei);
}
void mergeSort(int arr[],int size){
    if(size == 0){
        return;
    }
    int si = 0;
    int ei = size -1;
    merge_sort(arr,si,ei);
}
void intersection(int input1[], int input2[], int size1, int size2) {
    mergeSort(input1,size1);
    mergeSort(input2,size2);
   int i =0;
    int j =0;
    while(i<size1 && j<size2){
        if(input1[i] == input2[j]){
            cout<<input1[i]<<endl;
            i++;
            j++;
        }
        else if(input1[i]>input2[j]){
            j++;
        }
        else
            i++;
    }

}

*/
