#include<iostream>
#include<math.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int arr[], int *lastindex, int value){
    *lastindex = *lastindex+1;
    arr[*lastindex] = value;
    int index = *lastindex;
    while(index>0){
        int Parent = (index-1)/2;
       
        if(arr[Parent]<arr[index]){
            swap(arr[Parent], arr[index]);
            index = Parent;
        }
         
        else {
            return;
        }
    }
}

void deletion(int arr[], int *lastindex){
    int i = 0;
    
    swap(arr[0],arr[*lastindex]);

    *lastindex = *lastindex-1;
   
   while(i<=*lastindex){ 
        int leftChild = (2 * i) + 1;
        int rightChild = (2 * i) + 2;

    //i is the index of parent
        int index = i;
        if(leftChild<=*lastindex && arr[index]<arr[leftChild]){
            //i willupdate the index 
            //index = leftchild
            index=leftChild; 
         }

        if(rightChild<=*lastindex && arr[index]<arr[rightChild]){
            //index  leftchild
            //i will update my index 
            index=rightChild;
         }
         if(i!=index){
            swap(arr[i],arr[index]);
            i=index;
         }
         else {
            return ;
         }
   }
   
}

//heapify method

void maxHeapify(int arr[], int N , int i){
    int Largest = i;
    int Left = 2 * i + 1;
    int Right = 2 * i + 2;

    if(Left<N && arr[Left]>arr[Largest]){
        Largest = Left;
    }
    if(Right<N && arr[Right]>arr[Largest]){
        Largest = Right;
    }
    if(i!=Largest){
        swap(arr[i],arr[Largest]);
        maxHeapify(arr, N, Largest);
    }
}

void heapSort(int arr[], int N){
    //build the heap using maxheapify in TC O(N)
    for(int i = N/2-1;i>=0;i--){
        maxHeapify(arr,N,i);
    }
    //perform deletion operation using heapify
    for(int i = N-1;i>=0;i--){
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}
 //TC = O(N + NlogN)
 //TC = O(1)
int main(){
    //heap sort
    int arr[10]= {10, 20 , 40 , 60 , 80 , 37, 18, 19 , 38, 39};
    heapSort(arr, 10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}