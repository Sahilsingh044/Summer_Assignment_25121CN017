#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s;
    float percentage;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    percentage = s.marks;

    printf("\n----- Result -----\n");
    printf("Roll No : %d\n", s.roll);
    printf("Name : %s\n", s.name);
    printf("Marks : %.2f\n", percentage);

    if(percentage >= 40)
        printf("Status : PASS");
    else
        printf("Status : FAIL");

    return 0;
}