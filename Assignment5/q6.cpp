#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
  string title;
  string author;
  float price;

public:
  Book(string t, string a, float p)
  {
    title = t;
    author = a;
    price = p;
  }
  void displayBook()
  {
    cout << "Title: " << title << "\n";
    cout << "Author: " << author << "\n";
    cout << "Price: " << price << "\n";
  }
};

class Textbook : public Book
{
private:
  string subject;

public:
  Textbook(string t, string a, float p, string s)
      : Book(t, a, p)
  {
    subject = s;
  }
  void displayTextbook()
  {
    displayBook();
    cout << "Subject: " << subject << "\n";
  }
};

int main()
{
  Book b("The Alchemist", "Paulo Coelho", 299.0);
  b.displayBook();

  cout << "\n";

  Textbook t("Engineering Mathematics", "B.S. Grewal", 599.0, "Mathematics");
  t.displayTextbook();

  return 0;
}
