#include <stdio.h>
int main() {
   int c = 5,d=6;
   int *p = &c,*p1=&d;

   printf("%d ", p);  // 5
   printf("%d", p1);  // 5
   return 0;
}
