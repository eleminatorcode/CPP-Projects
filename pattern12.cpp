#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>0){
            cout<<"*";
            j--;

        }
        cout<<endl;
        i++;
    }
    int j=1;
    while(j<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int star=1;
        while(star<=j){
            cout<<"*";
            star++;
        }
        cout<<endl;
        j++;
    }
    
}