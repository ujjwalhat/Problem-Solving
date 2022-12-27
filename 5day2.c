#include<stdio.h>
int main()
{
    char ch='E';
    for(int i=5;i>0;i--)
    {
        char x=ch;
        for(int j=i;j<6;j++)
        {
            printf("%c",x++);
        }
        printf("\n");
        ch--;

    }

return 0;
}