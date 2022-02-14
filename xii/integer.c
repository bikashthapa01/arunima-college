#include <stdio.h>

int main(){
	FILE *fp;
	int x,i;
	
	fp = fopen("number.txt","w");
	
	for(i=1;i<=100;i++){
		putw(i,fp);
	}
	
	fclose(fp);
	
	fp = fopen("number.txt","r");
	
	while((x=getw(fp)) != EOF){
		printf("%d\t",x);
	}
}
