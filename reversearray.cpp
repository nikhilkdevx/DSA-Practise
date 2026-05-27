#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<",";
    }
}



int main(){
    
    int arr[] ={5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);
    int copyArr[n];
    for(int i=n-1, j=0; i>=0; i--,j++){
        
        copyArr[j] = arr[i];
       
    }
    PrintArr(copyArr,n);
    cout<<endl;
    PrintArr(arr,n);
   
    
    
    
    return 0;
}