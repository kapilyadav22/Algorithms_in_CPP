#include<iostream>
#include<math.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[],int start, int end){

    int pivot = arr[start];
    int i = start;

    for(int j = start+1;j<=end;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i],&arr[start]);
    return i;
}

void quicksort(int arr[], int start, int end){
    if(start>=end){
        return;
    }

    int pivot = Partition(arr, start, end);
    quicksort(arr, start, pivot-1); //leftside
    quicksort(arr,pivot+1, end); //rightside elements
}



int main() {
  //quick sort
  int arr[] = {5,4,3,2,1,91,23,23,34,345,5,343,2};
  int n = sizeof(arr)/sizeof(int);

  quicksort(arr, 0, n-1);
  for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

