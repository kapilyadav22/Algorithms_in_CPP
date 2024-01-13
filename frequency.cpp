#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int arr[] = {1,1,1,2,2,2,3,3,3,4,4};
    int n = sizeof(arr)/sizeof(int);
    int freqarr[5];

    unordered_map<int,int> umap;

    for(int i=0;i<n;i++){
        umap[arr[i]]++;
    }

    for(auto it: umap){
        freqarr[it.first] = it.second;
    }

    for(int i=1;i<5;i++){
        cout<<freqarr[i]<<" "<<endl;
    }

//TC = O(N ) = O(N)
//SC = O(N)  + O(N)
    
    }
