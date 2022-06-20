#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("Student.txt","w");
	int age;
	char name[100];
	float cgpa;
    printf("Enter the name");
	scanf("%s",&name);
	printf("Enter the age");
	scanf("%d",&age);
	printf("Enter the cgpa ");
	scanf("%f",&cgpa);
	fprintf(fptr,"%d\t", age);
	fprintf(fptr,"%f", cgpa);
	fclose(fptr);
    return 0;
