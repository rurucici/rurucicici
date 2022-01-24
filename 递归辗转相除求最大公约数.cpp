#include<stdio.h>
int MaxCommonFactor(int a,int b){
	if(a==b)return a;
	if(a%b==0){
		return b;
	}
	else{
		int tmp;
		tmp=a%b;
		a=b;
		b=tmp;
		return MaxCommonFactor(a,b); 
	}
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",MaxCommonFactor(x,y));
}
