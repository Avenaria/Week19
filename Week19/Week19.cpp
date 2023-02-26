#include"library.cpp"
#include "library.h"
#include <iostream>
using namespace std;







int main()
{
    Library l;
    l.PrintBooks();
    l.EditBook(3);
    l.FindName("name4");
    l.FindAuthor("author4");

    l.SortName();
    l.PrintBooks();

    l.SortAuthor();
    l.PrintBooks();

    l.SortPublish();
    l.PrintBooks();

   

}

