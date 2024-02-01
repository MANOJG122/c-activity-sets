#include <stdio.h>
 int input()
 {
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);
    return n;
 }
 int compare(int a,int b, int c)
 {
    int lar;

    if (a > b && a > c) {
        lar = a;
    } else if (b > a && b > c) {
        lar = b;
    } else {
        lar = c;
    }

    return lar;
 }
 void output(int a, int b, int c, int lar)
 {
    printf("the largest of %d %d & %d is: %d",a,b,c,lar);
 }
 int main()
 {
    int a=input();
    int b=input();
    int c=input();
    int largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;

 }