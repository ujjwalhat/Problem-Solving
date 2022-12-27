#include<stdio.h>
int main()
{
    char ch='A';
    for( int i=1;i<5;i++)
    {
        char x=ch;
        for(int j=0;j<i;j++)
        {
            printf("%c",x++);
        }
        printf("\n");
        ch++;
    }
return 0;
}