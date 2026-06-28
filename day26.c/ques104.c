#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Jaipur\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Q2. 5 + 7 = ?\n");
    printf("1.10  2.12  3.14\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Total Score = %d/2", score);

    return 0;
}