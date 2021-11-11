#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int numero;
    char rue[30];
    char ville[30];
    int code_P;
}Adresse;
typedef struct{
    char nom[25];
    char prenom[25];
    int age;
    char sexe[2];
    float taille;
    Adresse adresse;
}Personne;

Personne saisir();
void affiche(Personne);
void affiche_A(Adresse);
void affiche_P(Personne);
void modifier(Personne *);
void modifier_A(Adresse);
void modifier_P(Personne);


int main()
{
    Personne A;
    Adresse A_A;
    A=saisir();
    affiche(A);
    modifier(&A);
    affiche(A);
    return 0;
}
void modifier(Personne * T)
{
    printf("Bonjour\n");
    printf("Saisir le prenom: ");
    scanf("%s",T->prenom);
    printf("\nSaisir le nom: ");
    scanf("%s",T->nom);
    printf("\n Saisir l'age: ");
    scanf("%d",&T->age);
    printf("\n Saisir le sexe: ");
    scanf("%s",T->sexe);
    printf("\n Saisir la taille: ");
    scanf("%f",&T->taille);
    printf("\n Saisir le numero de l'adresse: ");
    scanf("%d",&T->adresse.numero);
}
Personne saisir()
{
    Personne T;
    printf("Bonjour\n");
    printf("Saisir le prenom: ");
    scanf("%s",T.prenom);
    printf("\nSaisir le nom: ");
    scanf("%s",T.nom);
    printf("\n Saisir l'age: ");
    scanf("%d",&T.age);
    printf("\n Saisir le sexe: ");
    scanf("%s",T.sexe);
    printf("\n Saisir la taille: ");
    scanf("%f",&T.taille);
    printf("\n Saisir le numero de l'adresse: ");
    scanf("%d",&T.adresse.numero);
    printf("\n Saisir le numero de la rue: ");
    scanf("%s",T.adresse.rue);
    printf("\n Saisir la ville: ");
    scanf("%s",T.adresse.ville);
    printf("\n Saisir le code postal: ");
    scanf("%d",&T.adresse.code_P);
    return T;
}

void affiche(Personne T)
{
    printf("le prenom: %s",T.prenom);
    printf("\nle nom: %s",T.nom);
    printf("\nle sexe: %s",T.sexe);
    printf("\nl'age: %d",T.age);
    printf("\ntaille: %f",T.taille);
    printf("\nadresse: %d %s %d %s",T.adresse.numero,T.adresse.rue,T.adresse.code_P,T.adresse.ville);
}
