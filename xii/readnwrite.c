#include <stdio.h>

struct student {
	int rollno;
	char name[20];
	int percentage;
};

int main(){
	FILE *fp;
	
	struct student s;
	
	fp = fopen("struct.txt","w");
	
	printf("Enter RollNo:\n");
	scanf("%d",&s.rollno);
	
	printf("Enter Name:\n");
	scanf("%s",s.name);
	
	printf("Enter Percentage:\n");
	scanf("%d",&s.percentage);
	
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	
	fp = fopen("struct.txt","r");
	
	struct student s1;
	
	fread(&s1,sizeof(s),1,fp);
	
	printf("Roll No: %d\nName: %s\nPercentage: %d\n",s1.rollno,s1.name,s1.percentage);

}
