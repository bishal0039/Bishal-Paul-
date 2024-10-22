#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100


struct Student {
    char name[50];
    int age;
    char grade;
};


void displayStudents(struct Student students[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Age: %d\n", students[i].age);
        printf("  Grade: %c\n\n", students[i].grade);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];  
    int n;

    
    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    if (n > MAX_STUDENTS) {
        printf("Number of students exceeds the maximum limit.\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }


    displayStudents(students, n);

    return 0;
}
