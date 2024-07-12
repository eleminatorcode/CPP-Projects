#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int a=10;
   ptr=&a;
   int **ptr1=&ptr;
   *ptr+=1;
   cout<<*ptr<<endl;
   cout<<a<<endl;
   cout<<*ptr<<endl;
   cout<<&a<<endl;
   cout<<&ptr1<<endl;
   cout<<&ptr<<endl;
   
    cout<<*ptr<<endl;


   
   
   
    
    
}