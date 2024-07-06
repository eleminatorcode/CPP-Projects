#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int i=1;
    int p=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<p<<" ";
            p++;
            j=j+1;
        }
        cout<<endl;
       i=i+1;
    }

}