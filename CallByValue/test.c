#include <stdio.h>

int main() {
 int a = 10;
 printf("a1: %d\n", a);
 sub(a);
 printf("a2: %d\n", a);
}

sub(int a) { 
 a = a - 1;
 printf("a-sub: %d\n", a);
}
