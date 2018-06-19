/* average marks of a tength class student */
#include <stdio.h>
#include <conio.h>
int main()
{
	int t,h,e,m,sc,ss;
	float tot,avg;
	
	printf("\n Enter the marks in 6 subjects=");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&ss);
	
	tot=t+h+e+m+sc+ss;
	avg=tot/6;
	
	printf("\n total marks of the student=%f",tot);
	printf("\n average marks of the student=%f",avg);
	getch();
 } 
