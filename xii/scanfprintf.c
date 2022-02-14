// fprintf() write infomrmation of 3 students into file 

#include <stdio.h>

int main(){
	FILE *fp;
	int rollNo,percentage;
	char name[30];
	
	int i;
	
	fp = fopen("data.txt","w");
	
	printf("Enter 3 Students Data:\n");
	for(i=0;i<3;i++){
		
		printf("Enter Roll No:\n");
		scanf("%d",&rollNo);
		
		printf("Enter Name:\n");
		scanf("%s",name);
		
		printf("Enter Percentage:\n");
		scanf("%d",&percentage);
		
		fprintf(fp,"%d\t%s\t%d\n",rollNo,name,percentage);
	}
	
	fclose(fp);
		
	
}
