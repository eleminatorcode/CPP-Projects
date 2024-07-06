
#include<iostream>
#include"binarytree.h"
#include<queue>
using namespace std;
void printTree(Binarytreenode<int> *root){
    if(root==NULL){       //Base Case
        return;
    }
    cout<<root->data<<":" ;//print the data at root node
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

Binarytreenode<int>* inputlevelwise(){
    int rootData;
    cout<<"Enter data:";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    //Dynamic allocation of root node
    Binarytreenode<int>*root=new Binarytreenode<int>(rootData);
    //Using Queue to level wise input;
    queue<Binarytreenode<int>*>pendingnodes;
    pendingnodes.push(root);                            //root node push into queue
    while(pendingnodes.size()!=0){                     // process conitue until queue not equal to 0
        Binarytreenode<int>*front=pendingnodes.front();//front of queue sorted
        pendingnodes.pop();
        cout<<"Enter left child of :"<<front->data<<endl;
        //For left child
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
        Binarytreenode<int>*child=new Binarytreenode<int>(leftchilddata);
        front->left=child;
        pendingnodes.push(child);
        }
        //similarly for right child
        cout<<"Enter right child Of:"<<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
        Binarytreenode<int>*child=new Binarytreenode<int>(rightchilddata);
        front->right=child;
        pendingnodes.push(child);
        }
    }
    return root;
}
int main(){
    Binarytreenode<int>*root=inputlevelwise();
    printTree(root);
    delete(root);
}