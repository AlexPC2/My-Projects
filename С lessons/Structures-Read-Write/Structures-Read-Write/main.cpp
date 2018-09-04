//
//  main.cpp
//  Structures-Read-Write
//
//  Created by Александр Ноянов on 17.03.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#include <iostream>

//struct myStruct {   // Моя структура
//    int value1;
//    int value2;
//    char char1;
//};

typedef int myStruct;   // Тип

struct ListItem         // Структура
{
    myStruct data;      // Элемент структуры типа meStruct
    ListItem* next;     // Указатель на следующий элемент
    ListItem* prev;     // Указатель на предыдущий
};

ListItem* createList(myStruct data) // Создание списка структур
{
    ListItem* head = new ListItem();    // Указатель head - указатель на новый список
    head->data = data;
    head->prev = NULL;
    head->next = NULL;
    return head;
}

ListItem* begin(ListItem* head)
{
    while(head->prev != NULL ){
        head = head->prev;
    }
    return head;
}
ListItem* end(ListItem* head)
{
    while(head->next != NULL ){
        head = head->next;
    }
    return head;
}

void pushBack(ListItem* head, myStruct data)
{
    ListItem* tail = end(head);
    ListItem* l = new ListItem();
    l->data = data;
    l->prev = tail;
    l->next = NULL;
    tail->next = l;
}

void pushFront(ListItem* head, myStruct data)
{
    head = begin(head);
    ListItem* l = new ListItem();
    l->data = data;
    l->prev = NULL;
    l->next = head;
    head->prev = l;
}

void addListToList(ListItem* l1, ListItem* headl2)
{
    ListItem* tail = end(l1);
    tail->next = headl2;
    headl2->prev = tail;
    
}

void printList(ListItem* head)
{
    while(head != NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

void deleteInList(ListItem* element){
    ListItem* prevElement = element->prev;            // Предыдущий
    ListItem* nextElement = element->next;            // Следующий
    
    prevElement->next = nextElement;        // Предыдущий на следющий
    nextElement->prev = prevElement;        // Следующий на предыдущий
    delete element;
}

ListItem* get(ListItem* head, int index)
{
    for(int i =0; i < index;i++){
        head = head->next;
    }
    
    return head;   // Возвращает значение этого элемента
}

void deleteNth(ListItem* head, int index)
{
    ListItem* element = get(head,index);
    
    deleteInList(element);
}

void printBackList(ListItem* head){
    
    ListItem* tail = end(head);
    
    while(tail != NULL) {
        printf("%d ",tail->data);
        tail = tail->prev;
    }
    printf("\n");
    
}

void deleteList(ListItem* list){
    while(list->next != NULL){
        deleteInList(list);
        delete list;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    ListItem* l1 = createList(0);
    pushBack(l1, 2);
    pushBack(l1, 3);
    ListItem* l2 = createList(0);
    pushBack(l2, -2);
    pushBack(l2, -3);
    
    printList(l1);
    printList(l2);
    
    addListToList(l1, l2);
    printList(l1);

    ListItem* l3 = get(l1,3);
    deleteInList(l3);
    printList(l1);

    printBackList(l1);
    
    deleteList(l1);
    
    //printList(l1);
    
    return 0;
}
