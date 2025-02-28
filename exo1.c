#include <stdio.h>
#include <math.h>

int main()
{
    double montantInitial, tauxCroissance, investissementMensuel, valeurTotal;
    int nombreMois;

    // Demander les informations à l'utilisateur
    printf("Entrez le montant initial de l'investissement : ");
    scanf("%lf", &montantInitial);
    printf("Entrez le taux de croissance mensuel (en pourcentage) : ");
    scanf("%lf", &tauxCroissance);
    printf("Entrez le nombre de mois : ");
    scanf("%d", &nombreMois);
    printf("Entrez le montant de l'investissement mensuel : ");
    scanf("%lf", &investissementMensuel);

    // Convertir le taux de pourcentage à décimal
    tauxCroissance = tauxCroissance / 100.0;

    // Initialiser la valeur totale avec le montant initial
    valeurTotal = montantInitial;

    // Calculer la valeur pour chaque mois
    for (int mois = 1; mois <= nombreMois; mois++)
    {
        // Ajouter les intérêts du mois
        valeurTotal = valeurTotal * (1 + tauxCroissance);

        // Ajouter l'investissement mensuel
        valeurTotal = valeurTotal + investissementMensuel;

        // Afficher la valeur à la fin de ce mois
        printf("Mois %d : %.2lf €\n", mois, valeurTotal);
    }
    
    return 0;
}