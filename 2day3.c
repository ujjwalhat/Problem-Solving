#include<stdio.h>
long int fact(int);
int main()
{
    int num,sum=0;
    printf("Enter the number you want series sum of :: ");
    scanf("%d",&num);

     for(int i =1 ; i<=num ; i++)
{
    sum += i/fact(i);
}

printf("The sum of the series is ==  %d",sum);

return 0;
}

long int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}