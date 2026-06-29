#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Details\n");

    for(i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}