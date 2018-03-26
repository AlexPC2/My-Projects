//
//  main.cpp
//  Tree
//
//  Created by Александр Ноянов on 22.03.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#include <iostream>

typedef int TData;
struct TTreeItem
{
    TData data;
    TTreeItem *parent;
    TTreeItem *left;
    TTreeItem *right;
    
    TTreeItem(TData adata, TTreeItem* aparent) {
        data = adata;
        parent = aparent;
        left = NULL;
        right = NULL;
    }
};


struct TListItem
{
    TData data;
    TListItem *next;
    
    TListItem(TData adata) {
        data = adata;
        next = NULL;
    }
};


TListItem* tail(TListItem *head)
{
    while(head->next != NULL)
        head = head->next;
    return head;
}

void addToList(TListItem *head,TData data)
{
    TListItem* atail = tail(head);
    atail->next = new TListItem(data);
}

void printList(TListItem *list)
{
    while(list != NULL) {
        std::cout << list->data << " ";
        list = list->next;
    }
}

void inverseList(TListItem* head)
{
    if(head->next != NULL)
    {
        TListItem* newhead = head->next;
        inverseList(newhead);
        head->next = head;
    }
}

void addToTree(TTreeItem* root, TData data)
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

TData minTreeValue(TTreeItem* root)
{
    // Go to the lowest value:
    while(root != NULL) {
        if(root->left == NULL)
            return root->data;
        root = root->left;
    }
    return 0;
}

TData maxTreeValue(TTreeItem* root)
{
    // Go to the lowest value:
    while(root != NULL) {
        if(root->right == NULL)
            return root->data;
        root = root->right;
    }
    return 0;
}

void printTree(TTreeItem* root)
{
    if(root != NULL) {
        printTree(root->left);
        std::cout << root->data << " ";
        printTree(root->right);
    }
}

void printTreeInverse(TTreeItem* root)
{
    if(root != NULL) {
        printTreeInverse(root->right);
        std::cout << root->data << " ";
        printTreeInverse(root->left);
    }
}


void printTreeAlex(TTreeItem* root)
{
    while(root->parent != NULL)             // Before the top
    {
        std::cout << root->data << "\n";    // Print data;
        root = root->parent;                // Go to the parent
        root = root->right;                 // Then go to the right element
        std::cout << root->data << "\n";    // Print in
        root = root->parent;                // Go to the parent again
    }
    
    while(root->right != NULL )             // After the top
    {
        root = root->left;                  // Go to the left
        std::cout << root->data << "\n";    // Print data;
        root = root->parent;                // Go to the parent
        root = root->right;                 // Then go to the right element
        std::cout << root->data << "\n";    // Print in
    }
}

int main(int argc, const char * argv[])
{
    TListItem *list = new TListItem(5);
    
    addToList(list, 7);
    addToList(list, 12);
    addToList(list, 1);
    addToList(list, 3);
    addToList(list, 8);
    
    printList(list);
    
//    TTreeItem* tree = new TTreeItem(5, NULL);
//    addToTree(tree, 7);
//    addToTree(tree, 12);
//    addToTree(tree, 1);
//    addToTree(tree, 3);
//    addToTree(tree, 8);
//    std::cout << "Min Value=" << minTreeValue(tree) << "\n";
//    std::cout << "Max Value=" << maxTreeValue(tree) << "\n";
//
//    printTree(tree);
//    std::cout << "\n";
//
//    printTreeInverse(tree);
//    std::cout << "\n";

    return 0;
}
