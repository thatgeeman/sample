#include <stdio.h>

int main(void)
{
    int x = 51;
    int y = 55;
    int z = 2;
    printf("x is %i\n", x);
    printf("y is %i\n", y);
   
 
    int temp = x;
    x = y;
    y = temp;
    
    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
    printf("z is still %i\n", z);
printf("this is branch test");
}
