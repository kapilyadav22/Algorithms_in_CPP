#include<iostream>
using namespace std;

int main() {
    //pattern
    int n =5;
    int spaceIndex = n-1;
    int starsIndex = n; 
    
    for(int i=0;i<n;i++){
        //print starIndex
        for(int j=1;j<=starsIndex;j++){
            cout<<"*";
        }
        //print spaceIndex;
        for(int j=starsIndex+1; j<=spaceIndex;j++){
            cout<<"-";
        }
         //print stars
        for(int j=1;j<=starsIndex;j++){
            if(i==0 && j==starsIndex) break;
            cout<<"*";
        }

        spaceIndex++;
        starsIndex--;
        cout<<endl;
    }

     starsIndex =1;
     spaceIndex = 2*n -2;

     for(int i=0;i<n;i++){
        //print starIndex
        for(int j=1;j<=starsIndex;j++){
            cout<<"*";
        }
        //print spaceIndex;
        for(int j=starsIndex+1; j<=spaceIndex;j++){
            cout<<"-";
        }
         //print stars
        for(int j=1;j<=starsIndex;j++){
            if(i==n-1 && j==starsIndex) break;
            cout<<"*";
        }

        spaceIndex--;
        starsIndex++;
        cout<<endl;
    }

    
}