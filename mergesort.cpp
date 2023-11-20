#include<iostream>
#include<math.h>
using namespace std;

//N = end - start + 1
void merge(int arr[], int start, int mid, int end){

    int aux[end-start+1];
    int auxIndex = 0;

    int low = start; //first index of first subarray
    int high = mid+1; //first index of second subarray

    while(low<=mid && high <=end){
        if(arr[low]<=arr[high]){
            aux[auxIndex]  = arr[low];
            low++;
        }
        else {
            aux[auxIndex]  = arr[high];
            high++;
        }
        auxIndex++;
    }
    //second subarray exhausted
    while(low<=mid){
        aux[auxIndex] = arr[low];
        low++;
        auxIndex++;
    }

    //first subarray exhausted
    while(high<=end){
        aux[auxIndex] = arr[high];
        high++;
        auxIndex++;
    }
//till now my aux index contains all the elements in sorted order

    //copy all the elements from my aux array to original array
    auxIndex = 0;
    for(int i = start;i<=end;i++){
        arr[i] = aux[auxIndex];
         auxIndex++;
    }
}

void mergesort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int mid = start + (end-start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    merge(arr, start, mid, end);

}

int main() {
  //merge sort
  int arr[5] = {2,1,2,2,7};
  mergesort(arr, 0, 4);

  for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

//Merge sort is outplace 
// Merge sort is stable