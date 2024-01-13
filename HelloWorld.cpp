#include<iostream>

using namespace std;

int main() {

    int days = 365;
    int currentday = 1;

    // for(currentday=1;currentday<=days;currentday++){
    //     cout<<currentday<<" days of 2023"<<endl;
    // }

    //while loop
    //salary = some salary,
    //untill i spend all the salary, i keep on spending...
    //how many products i can buy, with my salary...
    // 20, 200000, 500, 600, 

    int salary;
    cout<<"Enter your salary"<<endl;

    int spentmoney;

    // int remainingmoney;
    cin>>salary;
    // remainingmoney = salary;
    
    // while(remainingmoney>0){
    //     //it is entry controlled loop
    //     cout<<"Its my money, i will keep on spending, untill it become 0"<<endl;
    //     cin>>spentmoney;

    //     remainingmoney = remainingmoney - spentmoney;
    // }
    // cout<<"YOUr money is gone..."<<endl;



 //do while loop
 // exit controlled loop

 do {
    //it will execute atleast once, even if the condition dissatified.
    cout<<"I have money";
 }
 while(salary>0);

 }

