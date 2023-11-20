#include<iostream>
using namespace std;

void rev(int arr[], int start , int end){
//recursive code
if(start>=end){
    return ;
}

int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
rev(arr,start+1, end-1);

}

int main() {
 //find the reverse of an array
 int arr[] = {1,2,3,4,5,6};
 int n = sizeof(arr)/sizeof(int);

 rev(arr,0, n-1);

 for(int i = 0; i<n;i++){
    cout<<arr[i]<<" ";
 }
}
