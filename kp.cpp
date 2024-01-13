#include<iostream>
#include<math.h>
using namespace std;

void seive(int a, int b){
    vector<bool> Primes(b-a+1, 1);
    Primes[0] = 0;
    Primes[1] = 0;

    for(int i=2;i<b;i++){

        if(Primes[i]==1){
            //if it is prime, mark all the multiples of i as non prime
            for(int j = 2*i;j<b;j+=i){
                Primes[j] = 0;
            }
        }
    }

    //print all the primes
    for(int i = 2;i<b;i++){
        if(Primes[i]==1){
            cout<<i<<" ";
        }
    }

}


int main() {
  //seive algorithm
  int a  = 1;
  int b = 25;
  seive(a,b);
}
