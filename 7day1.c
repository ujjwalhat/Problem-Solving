#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature:: ");
    scanf("%d",&temp);
    if(temp<0)
    printf("FREEZING WEATHER !");
    else if (temp>=0 && temp<=10)
    printf("VERY COLD WEATHER");
    else if (temp>10 && temp<=20)
    printf("COLD WEATHER");
    else if (temp>20 && temp<=30)
    printf("NORMAL IN TEMP");
    else if (temp>30 && temp<=40)
    printf("HOT");
    else
    printf("VERY HOT");

return 0;
}