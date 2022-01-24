#include<stdio.h>
int main()
{
	int sum,a,b,c,num;
	char ch;
	do{
	
	printf("Input a sum:");
	scanf("%d",&sum);
	
	for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
	for(int k=0;k<10;k++){
		if(i*122+j*212+k*221==sum){
			a=i;
			b=j;
			c=k;
		num=a*100+b*10+c*1;
	printf("That is %d\n",num);
	}
}
}
}

	printf("Continue ?(y/n):");
	scanf(" %c",&ch);//%cÇ°ÓÐ¿Õ¸ñ 
	}
	while (ch=='y');
	
	
	return 0;
	
	
 } 
