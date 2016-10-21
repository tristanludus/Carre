#include <stdio.h>
#include <stdlib.h>

/*
Algo: Carre
BUT: Dessiner un carré remplie de "+" avec comme contours des caractères "*"
ENTREE: Deux entiers positifs, qui caractériseront la longueur et la largeur du carré
SORTIE: un carré de caractère avec comme longueur et largeur les entiers donnés au début

Var: L,l,i,j: ENTIER

DEBUT

ECRIRE "Entrez une longueur"
LIRE L
ECRIRE "Entrez une largeur"
LIRE l
POUR i DE 1 A L FAIRE
    POUR j DE 1 A l FAIRE
        SI j=1 OU j=L OU i=l OU i=l FAIRE
            ECRIRE "*"
        SINON
            ECRIRE "+"
        FINSI
    FINPOUR
FINPOUR
FIN.
*/

int main()
{
   int L;
   int l;
   int i=1;
   int j=1;

    //on de mande à l'utilisateur de saisir une longueur et une largeur.
    printf("Saisir la Longueur\n");
    scanf("%d",&L);
    printf("Saisir la largeur\n");
    scanf("%d",&l);

//on dessine le carré
for(i=1;i<=L;i++){
    for(j=1;j<=l;j++){
        if(j==1 || j==L || i==1 || i==l){
            printf("*");}
        else{
            printf("+");}}
        printf("\n");}
return 0;
}
