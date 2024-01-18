#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare an array of structures
    struct Student students[3];  // Array of 3 structures

    // Input information for each student using a single scanf
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d (Name Age Grade): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].grade);
    }

    // Print information from the array of structures using a single printf
    for (int i = 0; i < 3; i++) {
        printf("Student %d\nName: %s\nAge: %d\nGrade: %.2f\n\n", i + 1, students[i].name, students[i].age, students[i].grade);
    }

    return 0;
}
