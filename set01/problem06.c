#include <stdio.h>
int input()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);
    return n;
}
void compare(int a,int b,int c,int *lar)
{
    if(a>b && a>c)
    { 
        *lar=a;
    }
    else if(b>a && b>c)
    {
        *lar=b;
    } 
    else
    {
    *lar=c;
}
 
}
void output(int a,int b, int c,int lar)
{
    printf("the largest of %d,%d and %d is %d",a,b,c,lar);
}
int main()
{
    int a,b,c,lar;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&lar);
    output(a,b,c,lar);
    return 0;
}