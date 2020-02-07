#include <stdio.h>
/******global****/
int entier = 0;
int *Ptrentier = &entier;


/*******proto******/
void affichagevalptr();
void valeurnonpointeur();
void saisientier();
void afficheradptdr();
void afficheraddentier();
void afficherentier();
void menu();

/**********************définitions************************/
void affichagevalptr() {
printf("\nLa valeur du pointeur est %p\n",Ptrentier);
}

void saisientier() {
printf("\nVeuillez entrer la valeur entière voulue\n");
scanf("%d",&entier);
}

void valeurnonpointeur() {
printf("\nLa valeur du non pointeur est %d\n",*Ptrentier);
}

void afficheradptdr() {
printf("\nL'adresse du pointeur est %p\n",&Ptrentier);
}

void afficheraddentier() {
printf("\nL'adresse de l'entier est %p\n",&entier);
}

void afficherentier() {
printf("\nL'entier est %d\n",entier);
}

void menu() {
int choix=0;
    printf("1- Affiche la valeur du pointeur\n");
    printf("2- Affiche le contenu pointée\n");
    printf("3- Saisir une nouvelle valeur\n");
    printf("4- Affiche l'adresse du pointeur\n");
    printf("5- Affiche l'adresse de l'entier\n");
    printf("6- Afficher la valeur entière\n");
    printf("7- Arrêt du programme\n");
    scanf("%d",&choix);

switch (choix)
{

    case 1:
        affichagevalptr();
        menu();
    case 2:
        valeurnonpointeur();
        menu();
    case 3:
        saisientier();
        menu();
    case 4:
        afficheradptdr();
        menu();
    case 5:
        afficheraddentier();
        menu();
    case 6:
        afficherentier();
        menu();
    case 7:
        break;

}


}

int main() {
    saisientier();
menu();
    return 0;
}