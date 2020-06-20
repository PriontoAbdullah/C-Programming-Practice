#include <stdio.h>
 long long int factorial(unsigned int n);

int  main() {
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("Factorial of %d is %lld\n", n, factorial(n));
   return 0;
}
long long int factorial(unsigned int n) {

   if(n == 1) {
      return 1;
   }
   return n * factorial(n - 1);
}
