#include"binarytree.h"
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
        if(root->left->data < root->data && leftmax < root->data && val1){
            return true;
            else
            return false;
        }
     }
        else if(root->right!=NULL && root->left==NULL){
            if(root->right->data >= root->data && rightmin>=root->data && val2 ){
                return true;
                else
                return false;
            }
        }
            else {
                if(root->left->data < root->data && root->right->data >= root->data && leftmax < root->data && rightmin > = root->data && val1,val2){
                    return true;
                    else 
                    return false; 
                }
     }
}