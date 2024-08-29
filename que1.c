#include <stdio.h>

int main()
{
    int score;
    char grade;

  
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

   
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

   
    printf("Your grade is %c. ", grade);

   
    switch(grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'E':
            printf("You need to work harder.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

    

  {
    
    
    printf("Enter your grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else if (grade == 'F') {
        printf("Please try again next time.\n");
    } else {
        printf("Invalid grade entered. Please enter a valid grade (A, B, C, D, or F).\n");
    }

    return 0;
}
}