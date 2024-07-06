#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=n;
    while(j>=i){
        cout<<n-j+1;
        j--;
    }
    int start=i-1;
    while(start){
        cout<<"*";
        start--;
    }
    int end=i-1;
    while(end){
        cout<<"*";
        end--;
    }
    
    int k=n;
    while(k>=i){
        cout<<k-i+1;
        k--;
    }
    
    cout<<endl;
    i++;
}
return 0;
}