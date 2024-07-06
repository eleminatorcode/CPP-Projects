#include<climits>
class StackUsingArray{
     int *data;
     int nextindex;
     int capacity;
    public:
   StackUsingArray(int totalsize){
    data = new int[totalsize];
    nextindex=0;
    capacity=totalsize;

}
int size(){
    return nextindex;
}
bool isEmpty(){
    return nextindex==0;
}
void push(int element){
    if(nextindex==capacity){
    cout<<"Stack is full"<<endl;
    return;
    }
     data[nextindex]=element;
     nextindex++;
}
int  pop(){
    if(nextindex==0){
        cout<<"satck is empty"<<endl;
        return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
}
int top(){
    if(isEmpty()){
        cout<<"Stack is empty";
        return INT_MIN;
    }
    return data[nextindex-1];
  }
};