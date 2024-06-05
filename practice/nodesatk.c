#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{

    int data;
    struct Node *left;
    struct Node *right;

};
// Function to create a new node - newNode(int data)
void printNodesAtK(struct Node*root,int k);
struct Node * newNode(int data){

  struct Node * newnode = (struct Node *)(malloc(sizeof(struct Node)));
  newnode ->data = data;
  newnode ->left = NULL;
  newnode->right = NULL;
  return newnode;
}
// Function to insert a node in the binary tree

struct Node * insertnode(struct Node * root,int data){
    if (root ==NULL){
      return newNode(data);
    }
    if (data < root->data){
      root->left =insertnode(root->left,data);
    }
    else if(data >root ->data){
      root->right = insertnode(root ->right,data);
    }
return root;
}


bool Search(struct Node* root ,int data){
if(root == NULL) return false;
if(root ->data ==data) return true;
else if (data <= root->data) return Search(root->left,data);
else return Search(root->right,data);
}


void preOrder(struct Node*root){
  if(root ==NULL){
    return ;
  }


  printf(" %d ",root->data);
  preOrder(root->left);
  preOrder(root->right);
  }

void inOrder(struct Node*root){
  if(root ==NULL){
    return ;
  }
  inOrder(root->left);
  printf(" %d ",root->data);
  inOrder(root->right);
}
void postOrder(struct Node*root){
  if(root==NULL){
    return ;
  }
postOrder(root->left);
postOrder(root->right);

printf(" %d ",root->data);
}


int main(){
  struct Node *root = NULL;
  root = insertnode(root,20);
  root = insertnode(root,12);
  root = insertnode(root,13);
  root = insertnode(root,24);
  root = insertnode(root,25);
  bool found = Search(root,20);
  printNodesAtK(root,2);

if(found ==true){
  printf("Found \n");
}
else{
  printf("NOT Found \n");

}
printf("  PRE ORDER  ");
preOrder(root);

printf("\n");
printf("  IN ORDER \n");
printf("\n");

inOrder(root);
printf("\n");
printf("POST ORDER\n");


postOrder(root);

  return (0);
  
}

/*
      20
      /  \
    12    24
      \     \
      13     25
*/