#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    struct Item i;

    printf("Enter Item ID: ");
    scanf("%d", &i.id);

    printf("Enter Item Name: ");
    scanf("%s", i.name);

    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);

    printf("Enter Price: ");
    scanf("%f", &i.price);

    printf("\n----- Inventory -----\n");
    printf("ID : %d\n", i.id);
    printf("Name : %s\n", i.name);
    printf("Quantity : %d\n", i.quantity);
    printf("Price : %.2f\n", i.price);

    return 0;
}