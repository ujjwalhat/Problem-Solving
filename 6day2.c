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
    
    
        int num=x;
        for(int j=0;j<i;j++)
        {
            printf("%d",num++);
        }
        x++;
        num--;num--;
        for(int j=1;j<i;j++){
            
            printf("%d",num--);
           

        }


        printf("\n");
    }


return 0;
}