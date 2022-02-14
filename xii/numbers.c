#include <stdio.h>

int main(){
	FILE *fp;
	int n,i;
	char ch;
	
	fp = fopen("numebrs.txt","w");
	
	for(i=0;i<5;i++){
		putw(i,fp);
	}
	
	fclose(fp);
	
	fp = fopen("numebrs.txt","r");
	
	while((ch=getw(fp)) != EOF){
		printf("%c\t",ch);
	}
	
	fclose(fp);
	
	return 0;
}
