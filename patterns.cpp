#include<iostream>

using namespace std;

int main() {
    //pattern
    int n =5;
    int space = 0;
    int starsIndex = 2*n-1; 
    
    for(int i=0;i<5;i++){
        //print space
        for(int j=1;j<=space;j++){
            cout<<"-";
        }
        //print stars;
        for(int k=space+1; k<=starsIndex;k++){
            cout<<"*";
        }
         //print space
        for(int j=1;j<=space;j++){
            cout<<"-";
        }
        space++;
        starsIndex--;
        cout<<endl;
    }
}