#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Student Management System\n");

    printf("Enter student roll number: ");
    scanf("%d", &s.roll);

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    if(s.marks >= 90)
        printf("Grade: A");
    else if(s.marks >= 75)
        printf("Grade: B");
    else if(s.marks >= 50)
        printf("Grade: C");
    else
        printf("Grade: Fail");

    return 0;
}
