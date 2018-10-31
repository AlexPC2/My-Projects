//
//  main.cpp
//  Classes
//
//  Created by Александр Ноянов on 15.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Lesson about classes

#include <iostream>

using namespace std;

// Creating class "card"
class card
{
    // All that not in the public is private
private:
    string m_bookName;
    string m_author;
    int m_number;
    // Public methods can be used by someone outside
public:
    void setBookName(string bookName) {
        m_bookName = bookName;
    }
    void setAuthor(string author) {
        m_author = author;
    }
    string getBookNme() {
        return m_bookName;
    }
    string getAuthor() {
        return m_author;
    }
    void store();
    void show();
    };

// Describing all methode for following class:
void card::store() {
    printf("0");
}

void card::show() {
    printf("%s %s\n", m_bookName.c_str(), m_author.c_str());
}

int main(int argc, const char * argv[]) {
    card myCard;
    myCard.store();
    myCard.show();
    return 0;
    
}
