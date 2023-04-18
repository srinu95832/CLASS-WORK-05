#include <stdio.h>

int main() {
    int rollno, m1, m2, m3, total;
    float percentage;
    char name[50], division;

    printf("Enter your roll no: ");
    scanf("%d", &rollno);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = (float)total / 3.0;

    if (percentage >= 60) {
        division = 'F';
    } else if (percentage >= 50) {
        division = 'S';
    } else if (percentage >= 40) {
        division = 'T';
    } else {
        division = 'F';
    }

    printf("\nRoll no: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %c\n", division);

    return 0;
}

