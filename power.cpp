#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"enter number you need of power:";
    cin>>x;
    cout<<"enter power:";
    cin>>n;
    int ans=1;
    while(n>0){
        ans=ans*x;
        n--;
    }
    cout<<ans;
}