#include<stdio.h>
int main()
{
int r,t,h,e,m,sc,so;
printf("Enter Student's Roll no:");
scanf("%d",&r);
printf("Marks of student:");
scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
int total;
total=t+h+e+m+sc+so;
printf("\nTotal Marks:%d",total);
float per;
per=total/6;
printf("\nPercentage:%f",per);
char ch;
if (per>=75)
ch='D';
else if ((per<75)&&(per>=65))
ch='F';
else if ((per<60)&&((per>=50))
ch='S'
else if ((per<50)&&((per>=35))
ch='T'
else
ch='f'
switch(ch)
{
case'D':if("Grade=Distinction");break;
case'F':if("Grade=First");break;
case'S':if("Grade=Second");break;
case'T':if("Grade=Third");break;
case'f':if("Grade=Fail");break;
default:if("Your Grade is unknown");
}
}
