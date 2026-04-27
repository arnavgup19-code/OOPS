#include <iostream>
#include <string>
using namespace std;

class Book{
public:
    string title, author, ISBN;

    Book(){
        title=""; author=""; ISBN="";
    }

    Book(string title, string author, string ISBN){
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b){
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library{
public:
    Book *b;
    int count;

    Library(){
        b = new Book[100];
        count = 0;
    }

    bool addNewBook(string title, string author, string ISBN){
        b[count] = Book(title,author,ISBN);
        count++;
        return true;
    }

    bool removeBooks(string ISBN){
        for(int i=0;i<count;i++){
            if(b[i].ISBN == ISBN){
                for(int j=i;j<count-1;j++){
                    b[j]=b[j+1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails(){
        for(int i=0;i<count;i++){
            cout<<b[i].title<<" "<<b[i].author<<" "<<b[i].ISBN<<"\n";
        }
    }
};

int main(){
    Library l;

    l.addNewBook("a","x","1");
    l.addNewBook("b","y","2");

    l.removeBooks("1");

    l.displayDetails();
}