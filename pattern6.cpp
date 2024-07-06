#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int n1=(n+1)/2;
    int n2=n-n1;
    for(int i=1;i<=n1;i++){
        for(int k=n1-i;k>=1;k--){
            cout<<' ';
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int p=n2;p>=1;p--){
        for(int q=n2-p+1;q>=1;q--){
            cout<<' ';
        }
        for(int r=1;r<=2*p-1;r++){
            cout<<'*';
        }
        cout<<endl;
    }
}