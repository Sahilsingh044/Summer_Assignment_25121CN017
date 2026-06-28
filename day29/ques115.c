#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int ch;

    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);

    printf("\n1. Length");
    printf("\n2. Copy");
    printf("\n3. Concatenate");
    printf("\n4. Compare");

    printf("\nEnter Choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Length = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String = %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated String = %s", str1);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are Equal");
            else
                printf("Strings are Not Equal");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}