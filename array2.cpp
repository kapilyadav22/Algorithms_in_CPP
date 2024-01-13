#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr1[] = {2,3,4,5,5,6, 6};
    int arr2[] = {3,4,5,5,6,6};
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    //map approach for finding intersection of two arrays
    vector<int> ans;
    
    map<int,int> mp;
    for(int i=0; i<n1;i++){
        mp[arr1[i]]++;
    }
   
   //arr2
   for(int i=0;i<n2;i++){
    int currele = arr2[i];
    if(mp.find(currele)!=mp.end()){
        ans.push_back(currele);
        mp[currele]--;
    }
    if(mp[currele]==0){
        mp.erase(currele);
    }
   }


    int anssize = ans.size();
    for(int i =0;i<anssize;i++){
        cout<<ans[i]<<" ";
    }

}

