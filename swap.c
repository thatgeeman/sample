#include <stdio.h>

int main(void)
{
    int x = 34;
    int y = 55
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    
    int temp = x;
    x = y;
    y = temp;
    
    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
