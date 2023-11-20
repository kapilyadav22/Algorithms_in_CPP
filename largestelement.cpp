#include<iostream>
#include <algorithm>
using namespace std;

int main() {

  int arr[] = {1,1,1,1,1,1,1,1};
  int n = sizeof(arr)/sizeof(int);
   //finding secmax;

   int maxEle = arr[0];
   int secMax = INT_MIN;

   for(int i=0;i<n;i++){

    if(arr[i]>maxEle){
        secMax = maxEle;
        maxEle = arr[i];
    }
    else if(arr[i]<maxEle && arr[i]>secMax){
        secMax = arr[i];
    }
   }
   if(secMax!=INT_MIN){
        cout<<"Second Max element "<<secMax;
   } else {
    cout<<"Second max doesnt exist"<<endl;
   }

}
