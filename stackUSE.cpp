#include<iostream>
using namespace std;
#include"stackusingARRAY.cpp"

int main(){
    StackUsingArray s(5);
    s.push(10);
    s.push(20);
    s.push(100);
    s.push(19);
    s.push(78);
    s.push(95);
   cout<< s.size()<<endl;
   cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.top()<<endl;
}


