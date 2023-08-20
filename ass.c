#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

void main() {

	char name[41];
	char studentId[10];
	char grade;
    double gradepoint;

	printf("Enter student's Name : ");
	scanf("%s", name);

    rewind(stdin);

	printf("Enter student's ID : ");
	scanf("%s", studentId);

    printf("Enter student's grade: ");
    scanf("%s", &grade);

    if (grade == 'A') {
        printf("gradepoint = 4.00\n");
    }
    else if (grade == 'A-'){
        printf("gradepoint = 3.75\n");
    }
    else if (grade == 'B+') {
        printf("gradepoint = 3.50\n");
    }
    else if (grade == 'B') {
        printf("gradepoint = 3.00\n");
    }
    else if (grade == 'B-') {
        printf("gradepoint = 2.75\n");
    }
    else if (grade == 'C+') {
        printf("gradepoint = 2.50\n");
    }
    else if (grade == 'C') {
        printf("gradepoint = 2.00\n");
    }
    else if (grade == 'F') {
        printf("gradepoint = 0.00\n");
    }
    else {
        printf("Invalid gradepoint\n");
    }

    return 0;
}
