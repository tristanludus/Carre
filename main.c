#include <stdio.h>
#include <stdlib.h>

/*
Algo: Carre
BUT: Dessiner un carr� remplie de "+" avec comme contours des caract�res "*"
ENTREE: Deux entiers positifs, qui caract�riseront la longueur et la largeur du carr�
SORTIE: un carr� de caract�re avec comme longueur et largeur les entiers donn�s au d�but

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

    //on de mande � l'utilisateur de saisir une longueur et une largeur.
    printf("Saisir la Longueur\n");
    scanf("%d",&L);
    printf("Saisir la largeur\n");
    scanf("%d",&l);

//on dessine le carr�
for(i=1;i<=L;i++){
    for(j=1;j<=l;j++){
        if(j==1 || j==L || i==1 || i==l){
            printf("*");}
        else{
            printf("+");}}
        printf("\n");}
return 0;
}
