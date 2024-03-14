#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    char name[50];
    float gpa;
};

void display(const struct student stu[], int count) {
    printf("\nStudent Database:\n");
    printf("ID\tName\t\tGPA\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n", stu[i].id, stu[i].name, stu[i].gpa);
    }
    printf("\n");
}

int main() {
    struct student stu[450];
    int stuCount = 0;
    int choice;

    do {
        printf("Student Database Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (stuCount < 2) {
                    printf("Enter student ID: ");
                    scanf("%d", &stu[stuCount].id);

                    printf("Enter student name: ");
                    scanf("%s", &stu[stuCount].name);

                    printf("Enter student GPA: ");
                    scanf("%f", &stu[stuCount].gpa);

                    stuCount++;
                } else {
                    printf("Maximum number of students reached.\n");
                }
                break;

            case 2:
                display(stu, stuCount);
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 3.\n");
        }
    } while (choice != 3);

}