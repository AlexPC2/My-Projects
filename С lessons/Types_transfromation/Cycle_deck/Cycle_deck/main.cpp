//
//  main.cpp
//  Cycle_deck
//
//  Created by Alex Noyanov on 17.08.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

#define SIZE 10

class deck{
    
    int dck[SIZE];
    int tos;
    
public:
    void init();              // Deck initializing
    void push(int value);     // Push new int in to the deck
    int pop();               // Pop value from the deck
};

void deck::init(){
    tos = 0;
}

void deck::push(int value){
    if(tos == SIZE)
        tos = 0;
    dck[tos] = value;
    tos++;
}

int deck::pop(){
    if(tos == 0){
        cout << "=== Deck is empty! ===";
        return 0;
    }
    tos--;
    return dck[tos];
    
}


int main(int argc, const char * argv[]) {

    //char s[80];
    
    //cout << "Length is:";
    //cin >> s;
    
    deck myDeck;
    myDeck.init();
    for(int i = 0;i<10;i++)
        myDeck.push(i);
    
    cout << "Deck fully loaded: ";
    
    for(int i = 0;i<SIZE;i++)
        cout << myDeck.pop();
    
    for(int i = 0;i<20;i++)
        myDeck.push(i);
    
    cout << "Deck overloaded: ";
    
    for(int i = 0;i<SIZE;i++)
        cout << myDeck.pop();
    
    return 0;
}
