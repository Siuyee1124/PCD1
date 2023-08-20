#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

void main() {

	char name[41];
	char studentId[10];
	double gradepoint;

	printf("Enter student's Name : ");
	scanf("%s", name);

    rewind(stdin);

	printf("Enter student's ID : ");
	scanf("%s", studentId);

    printf("Enter student's gradepoint: ");
    scanf("%lf", &gradepoint);

    if (gradepoint == 4.00) {
        printf("Your grade: A\n");
    }
    else if (gradepoint >= 3.75) {
        printf("Your grade: A-\n");
    }
    else if (gradepoint >= 3.50) {
        printf("Your grade: B+\n");
    }
    else if (gradepoint >= 3.00) {
        printf("Your grade: B\n");
    }
    else if (gradepoint >= 2.75) {
        printf("Your grade: B-\n");
    }
    else if (gradepoint >= 2.50) {
        printf("Your grade: C+\n");
    }
    else if (gradepoint >= 2.00) {
        printf("Your grade: C\n");
    }
    else if (gradepoint >= 0.00) {
        printf("Your grade: F\n");
    }
    else {
        printf("Invalid gradepoint\n");
    }

    return 0;
}