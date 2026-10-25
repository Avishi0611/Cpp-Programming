#include <iostream>
using namespace std;
class Book {
protected:
    string title;
    string author;
public:
    Book(string t, string a) {
        title = t;
        author = a;
    }    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};
class FictionBook : public Book {
private:
    string genre;
public:
    FictionBook(string t, string a, string g) : Book(t, a), genre(g) {}
    void display(bool detailed) {
        if (detailed) {
            cout << "Fiction Book Details:\n";
            cout << "Title: " << title << "\nAuthor: " << author << "\nGenre: " << genre << endl;
        } else {
            Book::display();
        }
    }
};
class NonFictionBook : public Book {
private:
    string subject;
public:
    NonFictionBook(string t, string a, string s) : Book(t, a), subject(s) {}
    void display(bool detailed) {
        if (detailed) {
            cout << "Non-Fiction Book Details:\n";
            cout << "Title: " << title << "\nAuthor: " << author << "\nSubject: " << subject << endl;
        } else {
            Book::display();
        }
    }
};
int main() {
    FictionBook fiction("The Hobbit", "J.R.R. Tolkien", "Fantasy");
    NonFictionBook nonfiction("A Brief History of Time", "Stephen Hawking", "Science");
    cout << "Short format:\n";
    fiction.display(false);
    nonfiction.display(false);
    cout << "\nDetailed format:\n";
    fiction.display(true);
    nonfiction.display(true);
    return 0;
}
