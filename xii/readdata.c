// fprintf() write infomrmation of 3 students into file 

#include <stdio.h>

int main(){
	FILE *fp;
	int rollNo,percentage;
	char name[30];

	
	fp = fopen("data.txt","r");
	
	printf("Students Data:\n");

	while((fscanf(fp,"%d\t%s\t%d",&rollNo,name,&percentage))!= EOF){
		printf("\n%d\t%s\t%d",rollNo,name,percentage);
	}
	
	fclose(fp);
		
	
}
