#include<iostream>
using namespace std;

int main() {
    //pattern
    int n =5;
    int space = 0;
    int starsIndex = n; 
    
    for(int i=0;i<n;i++){
        //print starIndex
        for(int j=1;j<=starsIndex;j++){
            cout<<"*";
        }
        //print space;
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
         //print stars
        for(int j=1;j<=starsIndex;j++){
            if(i==0 && j==starsIndex) break;
            cout<<"*";
        }

        space=(2*i +1);
        starsIndex--;
        cout<<endl;
    }

     starsIndex =1;
     space = (2n-1)-2;

     for(int i=0;i<n;i++){
        //print starIndex
        for(int j=1;j<=starsIndex;j++){
            cout<<"*";
        }
        //print space;
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
         //print stars
        for(int j=1;j<=starsIndex;j++){
            if(i==n-1 && j==starsIndex) break;
            cout<<"*";
        }

        space-=2;
        starsIndex++;
        cout<<endl;
    }

    
}