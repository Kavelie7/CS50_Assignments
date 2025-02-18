#include <stdio.h>

// Define a structure for Student
typedef struct {
    char name[50];
    float marks[3];
    char grade;
} Student;

// Function to calculate grade based on average marks
char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    Student student;
    float total = 0, average;
    
    // Taking input
    printf("Enter student's name: ");
    scanf("%49s", student.name);
    
    printf("Enter marks for 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &student.marks[i]);
        total += student.marks[i];
    }
    
    // Calculating average and grade
    average = total / 3;
    student.grade = calculateGrade(average);
    
    // Displaying results
    printf("\nStudent Name: %s\n", student.name);
    printf("Marks: %.2f, %.2f, %.2f\n", student.marks[0], student.marks[1], student.marks[2]);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", student.grade);
    
    return 0;
}


