#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize the fields of Employee
void emp_init(struct Employee *e, char firstName[], char lastName[], double monthlySalary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = monthlySalary;
}

// Function to set the salary of Employee
void set_salary(struct Employee *e, double salary) {
    e->monthlySalary = salary;
}

// Function to display the details of Employee
void emp_display(struct Employee *e) {
    printf("Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
}

// Function to calculate and display yearly salary
void displayYearlySalary(struct Employee *e) {
    double yearlySalary = e->monthlySalary * 12;
    printf("Yearly Salary for %s %s: $%.2f\n", e->firstName, e->lastName, yearlySalary);
}

// Function to give a raise of given percentage
void giveRaise(struct Employee *e, double percentage) {
    double raiseAmount = e->monthlySalary * percentage / 100;
    e->monthlySalary += raiseAmount;
}

int main() {
    // Creating employee objects
    struct Employee emp1, emp2;

    // Initializing employee objects
    emp_init(&emp1, "John", "Doe", 5000);
    emp_init(&emp2, "Jane", "Smith", 6000);

    // Displaying yearly salary for each employee
    displayYearlySalary(&emp1);
    displayYearlySalary(&emp2);

    // Giving a 10% raise to each employee
    giveRaise(&emp1, 10);
    giveRaise(&emp2, 10);

    // Displaying yearly salary after raise
    printf("\nAfter 10%% raise:\n");
    displayYearlySalary(&emp1);
    displayYearlySalary(&emp2);

    return 0;
}
