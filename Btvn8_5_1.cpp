#include <stdio.h>

int main() {
   int arr[10] = {45,59,65,32,18,48,79,12,99,84};
   int S, i;
   double A;

   S = A = 0;
   for(i = 0; i < 10; i++) {
      S = S + arr[i];
   }
   
   A = (float) S/i;
   
   printf("Gia tri trung binh cua mang la: %.2lf\n", A);   
   
   return 0;
}

