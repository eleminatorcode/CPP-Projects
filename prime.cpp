#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number  to check prime:"<<endl;
    cin>>n;
    int check=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"NOT PRIME";
            check=1;
            break;
        }
    }
    if(check==0){
        cout<<"IS PRIME";
    }
}