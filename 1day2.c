#include<stdio.h>
int main()
{
   int x;
   for(int i=0;i<4;i++)
   {
    x=i;
    for(int j=0;j<=i ;j++)
    {
        printf("%d",++x);
    }
    printf("\n");
   }

return 0;
}