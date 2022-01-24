#include <stdio.h>
int main()
{
	int i,j;
	printf(" ");
	for(i=1;i<10;i++){
		printf("%4d",i);}
		printf("\n");
		printf("-----------------------------------------------\n");
		for(i=1;i<10;i++){
			printf("%d",i) ;
		for(j=1;j<10;j++){
			if(j<i) printf("    ");
			else printf("%4d",j*i);
			
		}
		printf("\n");
	}
	return 0;
 } 
