// Write ap program to swap two numbers without using third variable
#include <stdio.h>

int main() {
    // Write C code here
    int a=20;
    int b=30;
    a=a+b;// value of a=50
    b=a-b;// value of b=50-30=20
    a=a-b;//value of a=50-20=30
  
    printf("a=%d\n",a);
  
    printf("b=%d",b);

    return 0;
}
//Output
//a=30
//b=20