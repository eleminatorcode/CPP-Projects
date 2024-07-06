#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
bool isPrime(int a){
    for(int i=2;i<a;i++){
        if (a %i==0){
          return false ;
}
    }
     return true; 
    }

int totalPrime(int b,int c){
    int count=0;
    for(int i=b;i<=c;i++){
      if (isPrime(i)) {
        count++;
      }
    }
    return count;
}

//Write your totalPrime function here

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}