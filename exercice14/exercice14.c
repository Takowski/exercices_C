#include <stdio.h>

int main(int argc, char const *argv[])
{
   printf("Ecris un nombre !\n ");
   double number=0;
   scanf("%lf",&number);
   double square=number*number;
   printf("%.2f\n",square);

    return 0;
}
