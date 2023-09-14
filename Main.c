#include<stdio.h>
int sum(int x, int y) {
   return x+y;
}
int main(void) {
   if(sum(2,3) == 5) {
     printf("Sum Test passed");
   } else {
     printf("Sum test failed");
   }
   
   return 0;
}