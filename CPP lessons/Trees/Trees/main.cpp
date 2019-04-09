//
//  main.cpp
//  Trees
//
//  Created by Alex Noyanov on 09.04.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//


// Working with trees in C++
// Creating, adding and printing

#include <iostream>

using namespace std;

typedef int TData;
struct TTreeItem        // Tree element
{
    TData data;         // Value
    TTreeItem *parent;  // Parent
    TTreeItem *left;    // Left element
    TTreeItem *right;   // Right
    
    TTreeItem(TData adata, TTreeItem* aparent) {    // Constuctor
        data = adata;
        parent = aparent;
        left = NULL;
        right = NULL;
    }
};

void addToTree(TTreeItem* root, TData data)             // Add new element to tree
{
    if(data < root->data) {
        if(root->left != NULL)
            addToTree(root->left, data);
        else
            root->left = new TTreeItem(data, root);
    } else {
        if(root->right != NULL)
            addToTree(root->right, data);
        else
            root->right = new TTreeItem(data, root);
    }
}

void printTree(TTreeItem* root)                          // Print tree using recursive algorithm
{                                                      // LEFT-ROOT-RIGHT
    if(root != NULL) {
        printTree(root->left);                           // Print left part
        std::cout << root->data << " ";                  // Space
        printTree(root->right);                          // Print right part
    }
}

void printTreeInverse(TTreeItem* root)                  // Print tree inverse
{
    if(root != NULL) {
        printTreeInverse(root->right);
        std::cout << root->data << " ";
        printTreeInverse(root->left);
    }
}

int main(int argc, const char * argv[]) {
    int numberOfElements;
    cout << "   === Input number of the numbers in the tree: ===" << endl;
    cin >> numberOfElements;
    cout << " Now input your elements:" << endl;
    int elemenValue;
    cin >> elemenValue;
    TTreeItem* treeRoot = new TTreeItem(elemenValue,NULL);        // Tree root
    
    for(int i =0; i < numberOfElements - 1; i++)                // Reading the elements for tree
    {
        cin >> elemenValue;
        addToTree(treeRoot, elemenValue);
    }
    
    //addToTree(treeRoot, 10);
    cout << "=== Now print your tree ===" << endl;
    printTree(treeRoot);
    
    cout <<endl<<  "=== Now print your tree inverse ===" << endl;
    printTreeInverse(treeRoot);
    
    
    return 0;
}
