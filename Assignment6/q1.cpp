#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;
};

class Library {
private:
    Book books[100];
    int count=0;

public:
    bool addNewBook(string &title, string &author, string &ISBN) {
        if (count >= 100) return false;

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;

        return true;
    }

    bool removeBooks(string &ISBN);

    void display() {
        if (count == 0) {
            cout << "No books available\n";
            return;
        }

        for (int i = 0; i < count; i++) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
            cout << "----------------------\n";
        }
    }

    void setCount(int c) {
        count = c;
    }
};
bool Library::removeBooks(string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main() {
    Library lib;
    lib.setCount(0);

    string t1 = "C++ Basics";
    string a1 = "Bjarne";
    string i1 = "101";

    lib.addNewBook(t1, a1, i1);

    string t2 = "DSA";
    string a2 = "CLRS";
    string i2 = "102";

    lib.addNewBook(t2, a2, i2);

    cout << "Books in Library:\n";
    lib.display();

    lib.removeBooks(i1);

    cout << "\nAfter removal:\n";
    lib.display();

    return 0;
}
