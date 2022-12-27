 #include<stdio.h>
int main()
{
    int x=1;
    for(int i=1;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for( int j=i;j>0;j--)
        {
            printf("%d",j);

        }
        for(int j=2;j<i+1;j++)
        {
            printf("%d",j);
        }




        printf("\n");
    }

    

return 0;
}