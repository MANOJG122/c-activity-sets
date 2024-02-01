#include <stdio.h>
int input()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    return num;
}
int add(int a,int b)
{
    int sum=a+b;
    return sum;
    
}
void output(int sum)
{
    printf("the sum of is:%d",sum);

}
int main()
{
    int a,b;
    a=input();
    b=input();
    int sum=add(a,b);
    output(sum);
    return 0;
}