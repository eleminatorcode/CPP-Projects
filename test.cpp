// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
   int i=1;
   while(i<=n){
       int space=i-1;
       while(space){
           cout<<" ";
           space--;
       }
       int j=i;
       while(j<=i){
           int star=n-i+1;
           while(star){
               cout<<"*";
               star--;
           }
           j++;
       }
       cout<<endl;
       i++;
   }
   

    return 0;
}