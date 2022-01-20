#include<stdio.h>
int main(){
int month;
printf("Enter month number(1=Jan,2=Feb,3=March,4=April,5=May,6=June,7=July)\n");
scanf("%d",&month);
switch(month){
	case 1:printf("January\n");
		break;
	case 2:printf("Feb\n");
		break;
	case 3:printf("Mar\n");
		break;
	case 4:printf("April\n");
		break;
	case 5:printf("May\n");
		break;
	case 6:printf("June\n");
		break;
	case 7:printf("July\n");
		break;
	default:printf("inavlid input entered\n");
	}
	return 0;
}
