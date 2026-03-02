#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];   // Array of structures

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // To read full name with spaces

        s[i].total = 0;

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5;

        // Assign grade
        if(s[i].percentage >= 75)
            s[i].grade = 'A';
        else if(s[i].percentage >= 60)
            s[i].grade = 'B';
        else if(s[i].percentage >= 50)
            s[i].grade = 'C';
        else if(s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    printf("\n----- Student Results -----\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\nGrade: %c\n", s[i].grade);
    }

    return 0;
}