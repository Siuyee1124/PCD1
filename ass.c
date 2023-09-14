#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#pragma warning(disable:4996)

// Constants for credit hours
#define AAA1003 3
#define AAA1014 4
#define ABA1003 3
#define ABA1014 4
#define ACA1003 3
#define ACA1014 4

// Function prototypes
void displayMainMenu();
int staffAdministratorLogin();
void staffAdministratorMode();
char calculateLetterGrade(double gpa);
void studentMode();
void saveStudentData();
void displayStudentData();

char studentName[50];
char studentID[20];
char result;
int semester;
int totalCreditHours = 0;
double cgpa;
double totalQualityPoints = 0.0;
double gpaSem1, gpaSem2, gpaSem3;
float gradePointAAA1003, gradePointAAA1014, qualityPointAAA1003, qualityPointAAA1014;
float gradePointABA1003, gradePointABA1014, qualityPointABA1003, qualityPointABA1014;
float gradePointACA1003, gradePointACA1014, qualityPointACA1003, qualityPointACA1014;

int main() {
    displayMainMenu();
    printf("Welcome to Kolej Pasar GPA/CGPA Calculator\n");
    printf("Select Mode:\n");
    printf("1. Kolej Pasar Staff Administrator Mode\n");
    printf("2. Kolej Pasar Student Mode\n");
    printf("3. Exit\n");
    printf("Enter your selection: ");

    int mode;
    scanf("%d", &mode);

    if (mode == 1) {
        staffAdministratorMode();
    }
    else if (mode == 2) {
        studentMode();
    }
    else if (mode == 3) {
        printf("Exiting program. Goodbye...\n");
        exit(0);
    }
    else {
        printf("Invalid mode selection.\n");
    }

    return 0;
}

void displayMainMenu() {
    printf("*************************************************\n");
    printf("*                                               *\n");
    printf("*        KOLEJ PASAR GPA/CGPA CALCULATOR        *\n");
    printf("*                                               *\n");
    printf("*************************************************\n");
    printf("*                                               *\n");
    printf("*             1. Administrator Mode             *\n");
    printf("*             2. Student Mode                   *\n");
    printf("*             3. Exit                           *\n");
    printf("*                                               *\n");
    printf("*************************************************\n");
    printf("\nSelect an option: \n\n");
}

int staffAdministratorLogin() {
    // You can implement your login logic here.
    // For now, we'll assume successful login.
    return 1;
}

void staffAdministratorMode() {
    if (staffAdministratorLogin()) {
        printf("\nEnter student's name: ");
        scanf(" %[^\n]", studentName);
        printf("Enter student's ID (e.g., KPKL12345): ");
        scanf("%s", studentID);

        // Semester 1
        printf("\n\n");
        printf("==========\n");
        printf("Semester 1\n");
        printf("==========\n");
        printf("Course AAA1003\n");
        printf("Enter Grade Point: ");
        scanf("%f", &gradePointAAA1003);
        fflush(stdin);

        printf("Course AAA1014\n");
        printf("Enter Grade Point: ");
        scanf("%f", &gradePointAAA1014);
        fflush(stdin);

        qualityPointAAA1003 = gradePointAAA1003 * AAA1003;
        qualityPointAAA1014 = gradePointAAA1014 * AAA1014;

        gpaSem1 = (qualityPointAAA1003 + qualityPointAAA1014) / (AAA1014 + AAA1003);

        printf("\nQuality Point for AAA1003: %.2f\n", qualityPointAAA1003);
        printf("Quality Point for AAA1014: %.2f\n", qualityPointAAA1014);

        printf("Semester 1 GPA: %.2f\n", gpaSem1);

        if (gpaSem1 == 4.0) {
            printf("Grade Obtained : A\n");
        }
        else if (gpaSem1 >= 3.75) {
            printf("Grade Obtained : A-\n");
        }
        else if (gpaSem1 >= 3.50) {
            printf("Grade Obtained : B+\n");
        }
        else if (gpaSem1 >= 3.00) {
            printf("Grade Obtained : B\n");
        }
        else if (gpaSem1 >= 2.75) {
            printf("Grade Obtained : B-\n");
        }
        else if (gpaSem1 >= 2.50) {
            printf("Grade Obtained : C+\n");
        }
        else if (gpaSem1 >= 2.00) {
            printf("Grade Obtained : C\n");
        }
        else {
            printf("Grade Obtained : F\n");
        }

        // Semester 2
        printf("\n\n");
        printf("==========\n");
        printf("Semester 2\n");
        printf("==========\n");
        printf("Course ABA1003\n");
        printf("Enter Grade Point: ");
        scanf("%f", &gradePointABA1003);
        fflush(stdin);

        printf("Course ABA1014\n");
        printf("Enter Grade Point: ");
        scanf("%f", &gradePointABA1014);
        fflush(stdin);

        qualityPointABA1003 = gradePointABA1003 * ABA1003;
        qualityPointABA1014 = gradePointABA1014 * ABA1014;

        gpaSem2 = (qualityPointABA1003 + qualityPointABA1014) / (ABA1014 + ABA1003);

        printf("\nQuality Point for ABA1003: %.2f\n", qualityPointABA1003);
        printf("Quality Point for ABA1014: %.2f\n", qualityPointABA1014);

        printf("Semester 2 GPA: %.2f\n", gpaSem2);

        if (gpaSem2 == 4.0) {
            printf("Grade Obtained : A\n");
        }
        else if (gpaSem2 >= 3.75) {
            printf("Grade Obtained : A-\n");
        }
        else if (gpaSem2 >= 3.50) {
            printf("Grade Obtained : B+\n");
        }
        else if (gpaSem2 >= 3.00) {
            printf("Grade Obtained : B\n");
        }
        else if (gpaSem2 >= 2.75) {
            printf("Grade Obtained : B-\n");
        }
        else if (gpaSem2 >= 2.50) {
            printf("Grade Obtained : C+\n");
        }
        else if (gpaSem2 >= 2.00) {
            printf("Grade Obtained : C\n");
        }
        else {
            printf("Grade Obtained : F\n");
        }

        // Semester 3
        printf("\n\n");
        printf("==========\n");
        printf("Semester 3\n");
        printf("==========\n");
        printf("Course ACA1003\n");
        printf("Enter Grade Point: ");
        scanf("%f", &gradePointACA1003);
        fflush(stdin);

        printf("Course ACA1014\n");
        printf("Enter Grade Point: ");
        scanf("%f", &gradePointACA1014);
        fflush(stdin);

        qualityPointACA1003 = gradePointACA1003 * ACA1003;
        qualityPointACA1014 = gradePointACA1014 * ACA1014;

        gpaSem3 = (qualityPointACA1003 + qualityPointACA1014) / (ACA1014 + ACA1003);

        printf("\nQuality Point for ACA1003: %.2f\n", qualityPointACA1003);
        printf("Quality Point for ACA1014: %.2f\n", qualityPointACA1014);

        printf("Semester 3 GPA: %.2f\n", gpaSem3);

        if (gpaSem3 == 4.0) {
            printf("Grade Obtained : A\n");
        }
        else if (gpaSem3 >= 3.75) {
            printf("Grade Obtained : A-\n");
        }
        else if (gpaSem3 >= 3.50) {
            printf("Grade Obtained : B+\n");
        }
        else if (gpaSem3 >= 3.00) {
            printf("Grade Obtained : B\n");
        }
        else if (gpaSem3 >= 2.75) {
            printf("Grade Obtained : B-\n");
        }
        else if (gpaSem3 >= 2.50) {
            printf("Grade Obtained : C+\n");
        }
        else if (gpaSem3 >= 2.00) {
            printf("Grade Obtained : C\n");
        }
        else {
            printf("Grade Obtained : F\n");
        }


        // Calculate CGPA
        totalCreditHours = AAA1003 + AAA1014 + ABA1003 + ABA1014 + ACA1003 + ACA1014;
        totalQualityPoints = qualityPointAAA1003 + qualityPointAAA1014 + qualityPointABA1003 + qualityPointABA1014 + qualityPointACA1003 + qualityPointACA1014;
        cgpa = totalQualityPoints / totalCreditHours;

        printf("\n\nTotal credit hours: %d\n", totalCreditHours);
        printf("CGPA: %.2f\n", cgpa);

    if (cgpa == 4.0) {
        printf("Grade Obtained : A\n");
    }
    else if (cgpa >= 3.75) {
        printf("Grade Obtained : A-\n");
    }
    else if (cgpa >= 3.50) {
        printf("Grade Obtained : B+\n");
    }
    else if (cgpa >= 3.00) {
        printf("Grade Obtained : B\n");
    }
    else if (cgpa >= 2.75) {
        printf("Grade Obtained : B-\n");
    }
    else if (cgpa >= 2.50) {
        printf("Grade Obtained : C+\n");
    }
    else if (cgpa >= 2.00) {
        printf("Grade Obtained : C\n");
    }
    else {
        printf("Grade Obtained : F\n");
    }

        saveStudentData();
    }
    else {
        printf("Staff administrator login failed. Access denied.\n");
    }
}

void studentMode() {
    printf("Enter your student ID (e.g., KPKL12345): ");
    scanf("%s", studentID);

    printf("\n\nStudent Data:\n");
    displayStudentData();
}

void saveStudentData() {
    FILE* file = fopen("kolejPasarCalculator.txt", "a");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
   
    fprintf(file, "\nStudent Name: %s\n", studentName);
    fprintf(file, "Student ID: %s\n", studentID);
    fprintf(file, "Semester 1 GPA: %.2f\n", gpaSem1);
    fprintf(file, "Semester 2 GPA: %.2f\n", gpaSem2);
    fprintf(file, "Semester 3 GPA: %.2f\n", gpaSem3);
    fprintf(file, "CPGA Result: %.2f\n", cgpa);
    fprintf(file, "\nCourse Recommendation:\n");

    if (cgpa == 4.0) {
        fprintf(file, "Grade Obtained : A\n");
        fprintf(file, "Congratulations, on your excellent result !\n");
        fprintf(file, "We recommend looking into more specialized courses to your area of interest.\n");
    }
    else if (cgpa >= 3.75) {
        fprintf(file, "Grade Obtained : A-\n");
        fprintf(file, "You're performing excellently in your studies!\n");
        fprintf(file, "Think about trying more demanding classes in your major or exploring different subjects.\n");
    }
    else if (cgpa >= 3.50) {
        fprintf(file, "Grade Obtained : B+\n");
        fprintf(file, "You're making great strides!\n");
        fprintf(file, "Concentrate on essential courses in your major!\n");
    }
    else if (cgpa >= 3.00) {
        fprintf(file, "Grade Obtained : B\n");
        fprintf(file, "There's potential for improvement, so stay motivated!\n");
        fprintf(file, "Consider seeking academic support resources and discussing your goals with an advisor.\n");
    }
    else if (cgpa >= 2.75) {
        fprintf(file, "Grade Obtained : B-\n");
        fprintf(file, "You're making progress, consider exploring study groups to enhance your learning experience.\n");
        fprintf(file, "Remember, reaching out to academic support services can provide valuable assistance.\n");
    }
    else if (cgpa >= 2.50) {
        fprintf(file, "Grade Obtained : C+\n");
        fprintf(file, "Keep up the effort! Exploring study groups may help you reach your academic goals.\n");
        fprintf(file, "Don't hesitate to seek guidance from academic advisors or tutors if needed.\n");
    }
    else if (cgpa >= 2.00) {
        fprintf(file, "Grade Obtained : C\n");
        fprintf(file, "You're on the right track! Joining study groups could enhance your learning experience.\n");
        fprintf(file, "Consider discussing your progress with an academic advisor for personalized support.\n");
    }
    else {
        fprintf(file, "Grade Obtained : F\n");
        fprintf(file, "Don't be discouraged! Reach out to academic support services and explore ways to improve your performance.\n");
        fprintf(file, "Seeking help and guidance is a positive step towards academic success.\n");
    }

    fclose(file);
}

void displayStudentData() {
    FILE* file = fopen("kolejPasarCalculator.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}



