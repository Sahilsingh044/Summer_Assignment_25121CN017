#include <stdio.h>

struct Book {
    int id;
    char name[30];
};

int main() {
    struct Book b[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\nLibrary Books\n");

    for(i = 0; i < 3; i++) {
        printf("%d %s\n", b[i].id, b[i].name);
    }

    return 0;
}