#include<iostream>
#include<math.h>
using namespace std;

void bubblesort(int arr[], int N){

    //run a loop for passes
    //TC = O(N * N)
    // TC = O(N2)
    
    for(int i=0;i<N-1;i++){
        bool isswap = 0;
        //run a loop till unsorted part of the array
        
        for(int j = 0; j< N-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap them
                isswap = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        if(isswap==0){
            break;
        }
    }
}

//if in first pass, number of swaps = 0, the array is sorted.
//in any pass, if noofswaps = 0, 


int main(){
    //bubble sort
    int arr[5] = {1,2,3,4,5};
    bubblesort(arr,5);

    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}