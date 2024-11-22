#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("donnez deux nombres\n");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("leur somme est %d\n",a+b);
    printf("leur produit est %d\n",a*b);


    return 0;
}
