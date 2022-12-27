#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
    printf("First Quadrant ");
    else if (x<0&&y>0)
    printf("Second Quadrant ");
    else if(x<0&&y<0)
    printf("Thrid Quadrant");
    else if(x>0&&y<0)
    printf("Forth Quadrant");
    else if (x==0&& y!=0)
    printf("On Y axis");
    else if (y==0 && x!=0)
    printf("ON X axis");
    else if (y==0 && x==0)
    printf("ON ORIGIN");
    else
    printf("Enter a valid coordinate !!!!!!!!!");

return 0;
}