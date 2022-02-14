// write student data until user press No (n) / yes(y) 
#include <stdio.h>
#include <conio.h>

int main(){
	FILE *fp;
	char choice = 'y';
	
	char name[30];
	int rollno;
	
	// writing data into file 
	
	
	fp = fopen("studentdata.txt","w");
	
	while(choice != 'n'){
		printf("Enter RollNo:\n");
		scanf("%d",&rollno);
	
		printf("Enter Name:\n");
		scanf("%s",name);
		
		fprintf(fp,"%d\t%s\n",rollno,name);
		
		printf("Add more Record ? y/n: ");
	
		choice = getche();
		
		printf("\n");
	}
	
	fclose(fp);
	
	// reading data from file 
	
	
	fp = fopen("studentdata.txt","r");
	
	printf("Students Data:\n");

	while((fscanf(fp,"%d\t%s",&rollno,name))!= EOF){
		printf("%d\t%s\n",rollno,name);
	}
	
	fclose(fp);
	


}
