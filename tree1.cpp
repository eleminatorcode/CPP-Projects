#include<iostream>
#include "tree.h"
using namespace std;

Tree<int>*takeinput(){
    int rootdata ;
    cout<<"Enter the data :";
    cin>>rootdata;
Tree<int> *root=new Tree<int>(rootdata);
int n;
cout<<"Enter the number of child of"<<root->data<<":";
cin>>n;
for(int i=0;i<n;i++){
    Tree<int>*child=takeinput();
    root->children.push_back(child);
}
return root;

}

void printTree(Tree<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";

    }
    cout<<endl;
     for(int i=0;i<root->children.size();i++){
        return printTree(root->children[i]);
     }

}
int main(){
    Tree<int>*root=takeinput();
    printTree(root);
}