#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the the number :";
    cin>>n;
    int i,j,check=0;
    for(i=1;i<=n;i++){
        for( j=2;j<i;j++){
            if(i%j==0){
                check++;
                break;
            }
        }
        if(check==0 && i!=1){
            cout<<i<<endl;
        }

            check=0;
        
        
    }
     cout<<endl;
}