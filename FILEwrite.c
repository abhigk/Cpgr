#include <stdio.h>

int main() {

	int age;
	char  name[20];
	float salary;


	    FILE *fptr;
	    fptr = fopen("emp.rec","w");
	    
	    if(fptr==NULL){
	        printf("File doesn't exist");
	        return;
	    }
	    

	printf("Enter name\n");
	scanf("%s",name);
	fprintf(fptr,"Name :%s",name);

	printf("Enter Age");
	scanf("%d",&age);
	fprintf(fptr,"Age : %d",age);

	printf("Enter salary");
	scanf("%f",&salary);
	fprintf(fptr,"Salary%s",salary);
        fclose(fptr);
	printf("Compeleted");

	return 0;
}
