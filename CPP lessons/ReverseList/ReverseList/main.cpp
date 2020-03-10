//
//  main.cpp
//  ReverseList
//
//  Created by Alex Noyanov on 12.02.20.
//  Copyright © 2020 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
using namespace std;

struct List{
    int value;
    List* next;
    void addElement(int x){
        List newElem;
        newElem.value = x;
        //next->newElem;
        newElem.next = NULL;
    }
};

// List node with data:
struct node{
    int value;
};

// List with classes:
class oneLinkedList{
    private:
    node* head;
    
    public:
    oneLinkedList(){
        head = NULL;
    }
};

int main(int argc, const char * argv[]) {
    // Filling the List with numbers:
    List myListRoot;
    int n;
    cout << "=== Input numbers of list elements: ===" << "\n";
    cin >> n;
    int v;
    for(int i = 0; i<n;i++){
        cout << "Input element:\n";
        cin >> v;
        myListRoot.addElement(v);
    }
    
    // Printing elements from the list:
     cout << "   ==== List values ====\n";
    while(myListRoot.next != NULL){
        cout << myListRoot.value << "\n";
      
            myListRoot = *myListRoot.next;
    }
    
    
    return 0;
}
