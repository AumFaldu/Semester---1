#include<stdio.h>
struct book
{
    char title[30];
    char author[30];
    char publication[40];
    float price;
};
void main()
{
    struct book b;
    printf("\nEnter title : ");
    scanf("%s",b.title);
    printf("\nEnter name of author : ");
    scanf("%s",b.author);
    printf("\nEnter publication : ");
    scanf("%s",b.publication);
    printf("\nEnter price : ");
    scanf("%f",&b.price);
    printf("\nTitle of book = %s",b.title);
    printf("\nAuthor of book = %s",b.author);
    printf("\nPublication of book = %s",b.publication);
    printf("\nPrice of book = %f",b.price);
}
