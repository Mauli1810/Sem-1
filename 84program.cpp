#include <stdio.h>
#include <stdlib.h>


struct Book {
    char title[50];
    char author[50];
    float price;
};


void readBook(struct Book *b) {
    printf("Enter the title of the book: ");
    scanf(" %[^\n]", b->title);
    printf("Enter the author of the book: ");
    scanf(" %[^\n]", b->author);
    printf("Enter the price of the book: ");
    scanf("%f", &b->price);
}


void displayBook(struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price: %.2f\n", b->price);
}

int main() {
    struct Book myBook;

    
    readBook(&myBook);

    
    displayBook(&myBook);

    return 0;
}

