#include <stdio.h>

int main() {
    int num_subjects;
    float marks, total = 0.0, average;
    char grade;

    printf("=== Student Grade Calculator ===\n");
    printf("Enter the total number of subjects: ");
    scanf("%d", &num_subjects);

    if (num_subjects <= 0) {
        printf("Invalid number of subjects.\n");
        return 1;
    }

    for (int i = 1; i <= num_subjects; i++) {
        printf("Enter marks for Subject %d (out of 100): ", i);
        scanf("%f", &marks);

        while (marks < 0 || marks > 100) {
            printf("Invalid marks! Please enter a value between 0 and 100: ");
            scanf("%f", &marks);
        }

        total += marks;
    }

    average = total / num_subjects;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\n--- Result Summary ---\n");
    printf("Total Marks : %.2f / %.2f\n", total, num_subjects * 100.0);
    printf("Percentage  : %.2f%%\n", average);
    printf("Final Grade : %c\n", grade);

    return 0;
}
