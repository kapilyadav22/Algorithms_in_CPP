#include<iostream>
using namespace std;

bool isSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            return false;
        }
    } 
    return true;   
}

//TC = O(N)
int main(){
    //optimal force
    int arr[] = {1,2,3,4,8, 5,5,6,7};
    int n = sizeof(arr)/sizeof(int);


   bool sorted =  isSort(arr,n);
   if(sorted==1){
    cout<<"Array is sorted"<<endl;
   }
   else cout<<"Array is not sorted"<<endl;
}