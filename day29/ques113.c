#include <stdio.h>

int main() {
    int ch;
    float a, b;

    printf("Enter Two Numbers: ");
    scanf("%f%f", &a, &b);

    printf("\n1.Add");
    printf("\n2.Subtract");
    printf("\n3.Multiply");
    printf("\n4.Divide");

    printf("\nEnter Choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by Zero Not Possible");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}