#include<iostream>

using namespace std;
 
 class heap{
    public:
     int arr[100];
     int size;
     heap(){
        arr[0]=-1;
        int size=0;
     } 
     // insert in heap
     void insert( int val){
        size=size+1;
        int index=size;
        arr[index]=val;
       while(index>1){
        int parent=(index/2);
        if(arr[index]>arr[parent]){
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else{
            return;
        }
       }
     }
     // print of heap
     void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
     //delete in heap
     void deleteinheap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
       int i=1;
       while(i<size){
        int leftindex=2*i;
        int rightindex=2*i+1;
        if(leftindex < size && arr[leftindex]>arr[i] && arr[leftindex]>arr[rightindex]){
            swap (arr[i],arr[leftindex]);
            i=leftindex;
        }
        else if(rightindex < size && arr[rightindex]>arr[i]&& arr[leftindex]<arr[rightindex]){
            swap(arr[i],arr[rightindex]);
            i = rightindex;
        }
        else {
            return ;
        }
       }
     }
 };
 int main(){
    heap h;
    h.insert(100);
    h.insert(80);
    h.insert(70);
    h.insert(110);
    h.insert(77);
    h.print();
    return 0;
 }