 #include<stdio.h>
int main()
{
    int x=1;
    for(int i=1;i<5;i++)
    {
        for(int j=i;j<4;j++)
        {
            printf(" ");
        }
        for(int j =0;j<i;j++)
        {
            printf("*");
        }

        for(int j=1;j<i;j++)
        {
            printf("*");
        }



    printf("\n");
    }
    return 0;
}