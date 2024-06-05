#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;

};
int max(int a, int b) {
    return (a > b) ? a : b;
}
int FindHeight(struct Node *root);
struct Node *GetNewNode(int data);
struct Node *Insert(struct Node*root,int data){
  if (root == NULL){
    root = GetNewNode(data);
    
  }
  else if (data <= root->data){
    root->left = Insert(root->left,data);
  }
  else{
    root->right = Insert(root->right,data);
  }
  return root;
}

struct Node *GetNewNode(int data){

  struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode ->data = data;
  newnode->left =NULL;
  newnode->right=NULL;
  return newnode;
} 
bool Search(struct Node* root ,int data){
if(root == NULL) return false;
if(root ->data ==data) return true;
else if (data <= root->data) return Search(root->left,data);
else return Search(root->right,data);
}


int FindMin(struct Node*root);
int FindMax(struct Node *root);

int main(){
  struct Node *root = NULL;
  char continuee ;
int data ;

  do{
    int data;
  printf("Enter the data to be inserted in to the tree ");
  scanf("%d",&data);
  root = Insert(root,data);
  printf("Do you want to continue (y/n)");
  scanf(" %c",&continuee);
  }while(continuee =='y' || continuee =='Y');
printf("Enter the data to be searched ?");
scanf("%d",&data);
bool found = Search(root , data);
if (found ==true){
  printf(" (:Found the data");
}
else{
  printf(" ):NOT Found the data");

}
int min =FindMin(root);
int max =FindMax(root);
printf(" \n  %d",min);
printf(" \n )%d",max);

int height=  FindHeight(root);
printf(" \n %d",height);
  return (0);
  }


  
int FindMin(struct Node*root){
    if(root==NULL){
    printf("TREE IS EMPTY");
    return -1;
  }
  else if (root->left ==NULL ){
    return root ->data;
  }

    return FindMax(root->left);
  
}

int FindMax(struct Node *root){
    if(root==NULL){
    printf("TREE IS EMPTY");
    return -1;
  }
  else if (root->right ==NULL ){
    return root ->data;
  }
  
    return FindMax(root->right);
  
}
// 

//FIND Height 

int FindHeight(struct Node *root){
  if (root ==NULL){
    return -1;
  }
  return max(FindHeight(root->left),FindHeight(root->right)) +1;
}