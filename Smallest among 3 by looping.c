#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the values for a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if((a<b)&&(a<c))
	printf("\n a is the smallest:%d",a);
	else{
	if(b<c)
	printf("\n b is the smallest:%d",b);
	else
	printf("\n c is the smallest:%d",c);
	}
return(0);
}
