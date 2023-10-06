// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct library
{
    char book_title[20];
    int book_price;
};

int main()
{
    struct library book1;
    struct library book2;

     strcpy(book1.book_title, "JAVA");
     strcpy(book2.book_title, "Python");

     book1.book_price = 100;
     book2.book_price = 150;

     printf("Your price for %s book is %d.\n", book1.book_title, book1.book_price);
     printf("Your price for %s book is %d.", book2.book_title, book2.book_price);

     return 0;
}