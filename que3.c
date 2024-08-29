#include <stdio.h>

int main() {
    char grade;

    // Input: Grade of the student
    printf("Enter your grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    // Check eligibility based on the grade
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else if (grade == 'F') {
        printf("Please try again next time.\n");
    } else {
        printf("Invalid grade entered. Please enter a valid grade (A, B, C, D, or F).\n");
    }

    return 0;
}
