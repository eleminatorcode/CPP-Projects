#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid= (start+end)/2;
    for(int i=0;i<end;i++){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return -1;
}
int main(){
    int even[6]={1,5,7,9,10,15};
    int evenIndex=binarysearch(even,6,15);
    cout<<"Index of 15:"<<evenIndex;

}
