#include<stdio.h>
void main()
{
    int a,b,c,sum,average;
    printf("Enter the values a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    average=(a+b+c)/3;
    printf("sum of three numbers is %d ",sum);
    printf("\nsum of three numbers is %d ",average);
    getch();
}
