#include <stdio.h>
#include <stdlib.h>


//implementing the structure of a BST node
typedef struct node{

int value;
struct node *left;
struct node *right;
}node;

//function to create new BST node
node *createNode(int value){
node *newNode = (node*)malloc(sizeof(node)); // allocate memory for the node
newNode->value = value; //set node value to inputed value
newNode->left =newNode->right = NULL; // make sure node points to nothing
return newNode; //return for use
}

//function to insert node in BST
void insertNode(node** root, int value){
    if (*root==NULL){ 
        *root = createNode(value);
        return;
    }

    




}



int main() {

    
    return 0;
}