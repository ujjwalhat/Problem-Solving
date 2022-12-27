#include<stdio.h>
int main()
{
    float bs,hra,da,allow,ts,pf;
    char ch;
    printf("Enter the grade: ");
    scanf("%c",&ch);
    printf("Enter the basic salary : ");
    scanf("%f", &bs);
    if((ch=='A')||(ch=='a'))
    {
        allow=1700;
    }
   else if((ch=='B')||(ch=='b'))
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }

     hra = (20*bs)/100;
        da = (50*bs)/100;
    pf=(11*bs)/100;


    ts=bs+hra+da+allow-pf;
    printf("The total salary is %.f",ts);



return 0;
}