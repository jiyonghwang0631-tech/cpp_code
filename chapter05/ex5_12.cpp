#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    double price;
    int page;
    char *title;
    char *author;
public:
    Book(double pr, int pa, char*t, char *a);
    ~Book();
    void changeTitle(const Book &t);
    void changeAuthor(const Book &a);
    void show();
};

#include <cstring> // strlen, strcpy

Book::Book(double pr, int pa, char *t, char *a)
{
    price = pr;
    page = pa;

    title = new char[strlen(t) + 1];
    strcpy(title, t);

    author = new char[strlen(a) + 1];
    strcpy(author, a);
}

void Book::changeTitle(const Book &t)
{
    delete[] title; 

    title = new char[strlen(t.title) + 1];
    strcpy(title, t.title);
}
void Book::changeAuthor(const Book &a);
{


}

Book::~Book()
{
    delete[] title;
    delete[] author;
}




MyPipe::MyPipe()
{
    putIndex = 0;
    getIndex = 0;
    size = 0;
}

bool MyPipe::put(int n)
{
    if(size == 5) return false; // 꽉 참

    p[putIndex] = n;
    putIndex = (putIndex + 1) % 5;
    size++;

    return true;
}

bool MyPipe::get(int& n)
{
    if(size == 0) return false; // 비어 있음

    n = p[getIndex];
    getIndex = (getIndex + 1) % 5;
    size--;

    return true;
}

int MyPipe::getSize()
{
    return size;
}