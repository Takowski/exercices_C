#include <stdio.h>

int main(int argc, char const *argv[])
{
    int prixUnitaireHt;
    int nombreArticle;
    double tauxTva;
    int totalHt = nombreArticle * prixUnitaireHt;
    double totalTTC = totalHt * tauxTva;
    printf("Prix unitaire HT:\n");
    scanf("%d", &prixUnitaireHt);
    printf("Nombre articles:\n");
    scanf("%d", &nombreArticle);
    printf("Taux de TVA:\n");
    scanf("%lf", &tauxTva);
    printf("Prix total HT :%d\n", totalHt);
    printf("Prix total TTC :%d\n", totalHt);

    return 0;
}
