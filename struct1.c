#include <stdio.h>
#include <string.h>
struct BOOK
{
    int bookprice;
    char bookname[100];
    char bookauthor[100];
};
int main()
{
    struct BOOK b1;
    // b1.bookprice = 78;
    // strcpy(b1.bookname, "MATHS");
    // strcpy(b1.bookauthor, "BSgrewal");
    scanf("%s",&b1.bookname);
    scanf("%s",&b1.bookauthor);
    scanf("%f",&b1.bookprice);
    // scanf("%s",&b1.bookname);
    // scanf("%s",&b1.bookauthor);
    // scanf("%f",&b1.bookprice);
    // scanf("%s",&b1.bookname);
    // scanf("%s",&b1.bookauthor);
    // scanf("%f",&b1.bookprice);
    // struct BOOK b1,b2,b3;
    // strcpy(b1.bookname,"operating system");
    // strcpy(b1.bookauthor,"galvin");
    // b1.bookprice=300;
    printf("%s\n", b1.bookname);
    printf("%s\n", b1.bookauthor);
    printf("%d\n\n", b1.bookprice);
    // strcpy(b2.bookname,"higher engineering mathematics");
    // strcpy(b2.bookauthor,"N.P. bali");
    // b2.bookprice=310;
    // printf("%s\n",b2.bookname);
    // printf("%s\n",b2.bookauthor);
    // printf("%d\n\n",b2.bookprice);
    // strcpy(b3.bookname,"mathematics");
    // strcpy(b3.bookauthor,"R C joshi");
    // b3.bookprice=320;
    // printf("%s\n",b3.bookname);
    // printf("%s\n",b3.bookauthor);
    // printf("%d\n",b3.bookprice);
    return 0;
}