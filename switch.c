#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'b':
            printf("Good!\n");
            break;
        case 'C':
        case 'c':
            printf("Average.\n");
            break;
        case 'D':
        case 'd':
            printf("Needs improvement.\n");
            break;
        case 'F':
        case 'f':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
