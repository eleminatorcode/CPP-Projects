#include<iostream>
#include"binarytree.h"
using namespace std;
void isBStHleperLeft(Binarytreenode<int>*root,int *leftmax){
    if(root->left!=NULL && root->left->data > *leftmax){
        *leftmax=root->left->data;
    }
    if(root->right!=NULL && root->right->data >*leftmax){
        *leftmax=root->right->data;
    }
}
void isBStHleperRight(Binarytreenode<int>*root,int *rightmin){
    if(root->left!=NULL && root->left->data < *rightmin){
        *rightmin=root->left->data;
    }
    if(root->right!=NULL && root->right->data <*rightmin){
        *rightmin=root->right->data;
    }
}
bool IsBST(Binarytreenode<int>*root){
     if(root==NULL){
        return false;
     }
     int leftmax,rightmin;
     bool val1,val2;
     if(root->left!=NULL){
        leftmax=root->left->data;
        val1=IsBST(root->left);
        isBStHleperLeft(root->left,&leftmax);
     }
     if(root->right!=NULL){
        val2=IsBST(root->right);
        rightmin=root->right->data;
        isBStHleperRight(root->right,&rightmin);
     }
     if(root->left==NULL && root->right==NULL){

           return true;
     }
     else if( root->left !=NULL && root->right==NULL){
        if((root->left->data < root->data) && (leftmax < root->data && val1))
            return true;
            else
            return false;
        
     }
        else if(root->right!=NULL && root->left==NULL){
            if((root->right->data >= root->data) && (rightmin>=root->data && val2 ))
                return true;
                else
                return false;
        }
            else {
                if((root->left->data < root->data) && (root->right->data >= root->data )&& (leftmax < root->data) && (rightmin >= root->data )&& (val1)&&val2)
                    return true;
                    else 
                    return false; 
                
     }
}
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
Binarytreenode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1){        //if the data is -1 , means NULL pointer
        return NULL;
    }
    //Dynamically create the root node which constructor of the same class
    Binarytreenode<int>*root =new Binarytreenode<int>(rootData);
    //Recursively calling over left subtree
    Binarytreenode<int>*leftChild=takeInput();
    //Recursively calling right subtree
    Binarytreenode<int>*rightChild=takeInput();
    root->left=leftChild;
    root->right=rightChild;
    return root;
}


int main(){
   /* Binarytreenode<int>*root=new Binarytreenode<int>(1);
    Binarytreenode<int>*node1=new Binarytreenode<int>(2);
    Binarytreenode<int>*node2=new Binarytreenode<int>(3);
    root->left=node1;
    root->right=node2;*/
    Binarytreenode<int>* root=takeInput();
    printTree(root);
    IsBST(root);
    delete(root);
    
}
/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

/*void isBSTHelperLeft(BinaryTreeNode<int> *root, int *leftmax) {
  if (root->left != NULL && root->left->data > *leftmax)
    *leftmax = root->left->data;
  if (root->right != NULL && root->right->data > *leftmax)
    *leftmax = root->right->data;
}
void isBSTHelperRight(BinaryTreeNode<int> *root, int *rightmin) {
  if (root->left != NULL && root->left->data < *rightmin)
    *rightmin = root->left->data;
  if (root->right != NULL && root->right->data < *rightmin)
    *rightmin = root->right->data;
}
bool isBST(BinaryTreeNode<int> *root) {
  // Write your code here
  if (root == NULL)
    return false;
  int leftmax, rightmin;
  bool val1, val2;
  if (root->left != NULL) {
    val1 = isBST(root->left);
    leftmax = root->left->data;
    isBSTHelperLeft(root->left, &leftmax);
  }
  if (root->right != NULL) {
    val2 = isBST(root->right);
    rightmin = root->right->data;
    isBSTHelperRight(root->right, &rightmin);
  }
  if (root->left == NULL && root->right == NULL)
    return true;
  else if (root->left != NULL && root->right == NULL) {
    if ((leftmax < root->data) && (root->left->data < root->data) && val1)
      return true;
    else
      return false;
  } else if (root->left == NULL && root->right != NULL) {
    if ((rightmin >= root->data) && (root->right->data >= root->data) && val2)
      return true;
    else
      return false;
  } else {
    if ((leftmax < root->data) && (rightmin >= root->data) &&
        (root->left->data) < (root->data) &&
        (root->right->data >= root->data) && val1 && val2)
      return true;
    else
      return false;
  }
}
*/