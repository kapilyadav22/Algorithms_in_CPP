#include<iostream>
using namespace std;

int main() {
    //finding the sum of all the elements in an array

    int arr[] = {1,2,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;

    //TC = O(N)
    for(int i =0;i<n;i++ ){
        //shorthand operators
        sum+=arr[i];
    }

    cout<<"The sum of all the elements in the array is "<<sum<<endl;
  

}
