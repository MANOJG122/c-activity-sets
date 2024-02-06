#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int a, b, c, isscalene;
    
    // Input
    a = input_side();
    b = input_side();
    c = input_side();
    
    isscalene = check_scalene(a, b, c);
    
    // Output
    output(a, b, c, isscalene);
    
    return 0;
}

int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && a != c && b != c)
        return 1;
    else
        return 0;
}

void output(int a, int b, int c, int isscalene) {
    printf("Side a: %d\n", a);
    printf("Side b: %d\n", b);
    printf("Side c: %d\n", c);
    
    if (isscalene)
        printf("The triangle is scalene.\n");
    else
        printf("The triangle is not scalene.\n");
}
