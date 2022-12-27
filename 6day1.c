#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(b==c))
    printf("this is Equilateral triangle");
    else if(a!=b && a!=c && b!=c)
    printf("This is scalene triangle");
    else
    printf("This is isosclene triangle");

return 0;
}