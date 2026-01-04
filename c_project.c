#include <stdio.h>

int main() {
    
    // Declaring variables to store marks:
    int marks_1, marks_2, marks_3, marks_4, marks_5;

    // Declaring variable to store total marks:
    int totalMarks;

    // Declaring variable to store percentage value:
    float percentage;

    // Declaring variable to store grade (Character value):
    char grade;                              

    printf("Enter marks for Subject 1: ");
    scanf("%d", &marks_1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &marks_2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &marks_3);

    printf("Enter marks for Subject 4: ");
    scanf("%d", &marks_4);

    printf("Enter marks for Subject 5: ");
    scanf("%d", &marks_5);


    // Validation: Marks should be between 0 and 100:
    if (marks_1 > 100 || marks_2 > 100 || marks_3 > 100 || marks_4 > 100 || marks_5 > 100 ||
        marks_1 < 0   || marks_2 < 0   || marks_3 < 0   || marks_4 < 0   || marks_5 < 0) {
        printf("\nError: Marks must be between 0 and 100.\n");
        return 0;
    }

    // Calculating total marks:
    totalMarks = marks_1 + marks_2 + marks_3 + marks_4 + marks_5;

    // Calculating percentage:
    percentage = (totalMarks / 500.0) * 100;

    // Nested if-else to assign grade:
    if (percentage >= 90 ) {
        grade = 'A';
    } 
    else if (percentage >= 80 ) {
        grade = 'B';
    } 
    else if (percentage >= 70 ) {
        grade = 'C';
    } 
    else if (percentage >= 60 ) {
        grade = 'D';
    } 
    else if (percentage >= 50 ) {
        grade = 'E';
    } 
    else{
        grade = 'F';
    }   

    // Displaying results:
    printf("\n|~~~~~~~ Student Result ~~~~~~~|\n");

    // Displaying Total Marks:
    printf("Total Marks\t: %d / 500\n", totalMarks);

    // Displaying Percentage:
    printf("Percentage\t: %.2f%%\n", percentage);

    // Displaying Grade:
    printf("Grade\t\t: %c\n", grade);

    return 0;
}



















