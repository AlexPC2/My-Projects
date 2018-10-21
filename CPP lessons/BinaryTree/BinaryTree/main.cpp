//
//  main.cpp
//  BinaryTree
//
//  Created by Александр Ноянов on 10.10.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>

struct Tree{                // Binary tree
    int value;              // Value
    Tree *left;             // Left
    Tree *right;            // Right
};

Tree* MakeTree(int v){
    Tree* tr = new Tree;
    
    tr->value = v;
    tr->left =NULL;
    tr->right = NULL;
    
    return tr;
}

void addLeft(Tree *root, int x)     // Add new value to the left branch
{
    root->left = MakeTree(x);
}

void addRight(Tree *root, int x)    // Add to the right branch
{
    root->right = MakeTree(x);
}

void printTree(Tree *root)          // Print all tree with recursion!
{
    // Print left branch
    if(root->left != NULL)
    {
        printf("%d ",root->left->value);
        printTree(root->left);
    }
    
    // Print top
    if(root->left != NULL && root->right != NULL)
        printf("%d ",root->value);
    
    // Print right branch
    if(root->right != NULL)
    {
        printf("%d ",root->right->value);
        printTree(root->right);
    }
}

int main(int argc, const char * argv[]) {
    
    printf(" Binary tree test \n");
    
    Tree *myTree = MakeTree(10);
    
    addLeft(myTree, 5);
    addRight(myTree, 2);
   
    addLeft(myTree->left, 6);
    addRight(myTree->right, 4);
    
    printf(" === Printing all tree ===\n");
    printTree(myTree);
    printf("\n");
    
    return 0;
}
