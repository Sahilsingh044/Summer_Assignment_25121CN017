#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0, ch;

    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1.Display");
    printf("\n2.Sum");
    printf("\n3.Maximum");

    printf("\nEnter Choice: ");
    scanf("%d", &ch);

    switch(ch) {

        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];

            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int max = a[0];

            for(i = 1; i < n; i++)
                if(a[i] > max)
                    max = a[i];

            printf("Maximum = %d", max);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}