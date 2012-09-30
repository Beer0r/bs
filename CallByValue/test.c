#include <stdio.h>

int main() {
 int a = 10;
 printf("a: %d\n", a);
 sub(a);
}

sub(int a) {
 int b;  
 b = a - 1;
 printf("b: %d\n", b);
}
