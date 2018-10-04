//
//  main.cpp
//  Lab4
//
//  Created by Александр Ноянов on 20.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Задача 12: Описать класс «домашняя библиотека». Предусмотреть возможность работы с произвольным числом книг,
// поиска книги по какому-либо признаку (например, по автору или по году издания), добавления книг в библиотеку,
// удаления книг из нее.
//  Написать программу, демонстрирующую работу с этим классом. Программа должна содержать меню,
// позволяющее осуществить проверку всех методов класса.

/*                )
                .(
                |!|
                \O\
                 /L/
                 |L|
     _,------. . -\E\-,_
    // ====== Y == /H/ \\
   // =====   |    ==== \\
  // ==       |      ==  \\
 // _________ | ________  \\
 '__________. 0 ._________'
             ---
 
 
 */

#include <iostream>
#include <list>
#include <string>

using namespace std;

class book {                            // Книга
    string author;                      // Автор
    string name;                        // Название книги
public:
    book(string nme, string athr){      // Констркутор с параметрами
        author = athr;
        name = nme;
    }
    //~book() {}
    string showAuthor() const {         // Показать автора книги
        return author;
    }
    string showName() const {           // Показать название книги
        return name;
    }
    
    bool operator ==(const book &b) const { // Оператор = для поиска
        return b.showAuthor() == author && b.showName() == name;
    }
    bool operator <(const book &b) const { // Оператор < для сортировки
        if(b.showAuthor() == author)
            return name < b.showName();
        else
            return author < b.showAuthor();
    }
    
};

ostream& operator<<(ostream& os, const book& b) // Оператор вывода в поток книги
{
    os << b.showAuthor() << ' ' << b.showName() << std::endl;
    return os;
}

class library
{                         // Библиотека
    list<book> books;      // Список из книг, которые в ней лежат
    
public:
    library() {};                        // Конструтор библиотеки
    library(list<book> books){            // Констркутор с параметрами позволяет создать библиотеку из одной книги
        this->books = books;
    }
    //~library() {}                                                // Диструктор класса
    void addBook(string bookName, string bookAuthor);       // Добавить новую книгу в библиотеку
    void removeBook(string bookName, string bookAuthor);    // Убирает книгу с полки
    book findBook(string bookName,string bookAuthor);       // Найти книгу в нашей библиотеки
    void sortBooks();                                     // Расставляет книги по алфавиту
    
    void printLibrary(ostream& out);
    
//    class FindBookPredicate
//    {
//        string _bookName, _bookAuthor;
//    public:
//        FindBookPredicate(string bookName, string bookAuthor) {
//            _bookName = bookName;
//            _bookAuthor = bookAuthor;
//        }
//        bool operator() ( const book& b ) const {
//            return b.showAuthor() == _bookName && b.showName() == _bookAuthor;
//        }
//    };
};


// А теперь реализация методом класса library:
void library::addBook(string bookName, string bookAuthor){
    books.push_back(book(bookName, bookAuthor));
}

void library::removeBook(string bookName, string bookAuthor){
    books.remove(book(bookName, bookAuthor));
}


book library::findBook(string bookName , string bookAuthor)
{
    auto it0 = find( books.cbegin(), books.cend(), book(bookName, bookAuthor)); // Указатель на нужную книгу в списке
    
//    auto it = find_if( begin(books), end( books ), FindBookPredicate(bookAuthor, bookName));
//
//
//
//    auto it = find_if( begin( books ), end( books ),
//        [bookAuthor, bookName]( const book& b){ return b.showAuthor() == bookAuthor && b.showName() == bookName; } );

    if(it0 == books.cend()) {                                                   // Если нужной книги нету
        return book("found","not");
    } else
        return *it0;
}

void library::sortBooks()
{
    books.sort();                                                                // Стандартный метод для сортировки списка
}

void library::printLibrary(ostream& out)
{
    for(auto b : books) {
        out << b;
    }
}

void LibraryTest(library lib){
    lib.addBook("Pascal", "Virt");                      // Добавили в нее кучу книг
    lib.addBook("C", "Ritchi");
    lib.addBook("C++", "Straustrup");
    lib.addBook("C++", "Shild");
    lib.addBook("Kurs C++", "MPEI");
    
    cout << "Before sort:" << endl;
    lib.printLibrary(cout);                             // Посмотрели на нее до сортировки
    cout << endl;
    lib.sortBooks();                                    // Отсортировали библиотеку
    cout << "After sort:" << endl;
    lib.printLibrary(cout);                             // Посмотрели на отсортированную
    cout << endl;
    
    
    //    if(book("C++", "Shild") == book("C++", "Shild"))
    //       cout << "equal\n";
    //    else
    //       cout << "not equal\n";
    
    cout << "Found " << lib.findBook("C++", "Shild");   //Попробовали поискать нужную книгу
    lib.removeBook("C++", "Shild");                     // Удалили книгу
    cout << "Found " << lib.findBook("C++", "Shild");   // Убедились, что книга удалилась
}

int main(int argc, const char * argv[]) {

    library lib;                                        // Сделали библиотеку
    
    char userChoise;                                    //  Выбор пользователя
    
    string helpText = " h - помощь \n t - сделать тест с книгами \n а - добавить книгу в библиотеку \n r - убрать книгу \n f - найти книгу \n e - выйти";
    
    cout << "   ==== Lab N4 ====" << endl;
    
    cout << "Добро пожаловать в библиотеку! Чем я вам могу помочь?" << endl;
    cout << helpText << endl;
    
    cout << endl << "Ваш выбор:";
    
    cin >> userChoise;                                   // Спрашиваем пользователя
    
    while(userChoise != 'e'){                            // Делаем, пока пользователь не захочет выйти
    
        switch (userChoise) {
            case 'h':
                cout << "   >--Помощь. Вот список команд:" <<  endl << helpText << endl;
                break;
            
            case 't':
            {
                cout << "   >--Тест. Провожу тест с книгами:" <<  endl;
                LibraryTest(lib);
                break;
            }
            case 'a':
            {
                string bookName,bookAuthor;
                cout << "   >--Добавить книгу в библиотеку" <<  endl;
                while(bookName.empty()){
                cout << "Название:";
                getline(cin,bookName);
                }
                cout << "Автор:";
                getline(cin,bookAuthor);
                
                lib.addBook(bookName, bookAuthor);
                cout << "В библиотеку добавлена книга:" << bookName<< " автор:" << bookAuthor <<endl;
                break;
            }
                
            case 'r':
            {
             cout << "   >--Убрать книгу с полки библиотеки" <<  endl;
                string bookName, bookAuthor;
                while(bookName.empty()){
                    cout << "Название:";
                    getline(cin,bookName);
                }
                cout << "Автор:";
                getline(cin,bookAuthor);
                cout << "Ваша книга на полке " << lib.findBook(bookName, bookAuthor);
                cout << "<удаление книги>"<< endl;
                lib.removeBook(bookName, bookAuthor);
                cout <<">-Поиск после удаления: ваша книга " << lib.findBook(bookName, bookAuthor) << endl;
                break;
            }
              
            case 'f':
            {
                cout << "   >--Поиск книги в библиотеки" <<  endl;
                string bookName, bookAuthor;
                while(bookName.empty()){
                    cout << "Название:";
                    getline(cin,bookName);
                }
                cout << "Автор:";
                getline(cin,bookAuthor);
                cout << "Ваша книга на полке " << lib.findBook(bookName, bookAuthor);
                break;
            }
                
            default:                                     // Неизвестная команда
            {
                cout << " Что-то непонятное. Попробуйте снова:" << endl;
                cout << helpText << endl;
                cin >> userChoise;
            }
               // break;
        }
         cin >> userChoise;                                   // Спрашиваем пользователя
    }
    cout << " >--Выход. До свидания!" << endl;
    
    
    //LibraryTest(lib);
    return 0;
}
