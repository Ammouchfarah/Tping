#include <stdio.h>
#include <stdlib.h>

int main()
{/* int tab[50];

  int m;
   printf("donnez la dimmension de votre tab");
   scanf("%d",&m);
  for(int i=0;i<m;i++)
    {
        scanf("%d",&tab[i]);}
   affichevecteur(tab, m);
   int mat[2][2]={(1,3),(6,7)};
   affichematrice(mat,2,2);*/
   //exe2




    return 0;
}
//EXE 1 :deux fonction pour afficher une vecteur et une matrice
/*void affichevecteur(int*vecteur,int dimension)
{

    for(int i=0;i<dimension;i++)
    {
        printf("%d",vecteur[i]);
        printf("\n");
    }
}
void affichematrice(int**matrice,int ligne,int colonne)
{

    for(int i=0;i<ligne;i++)
    { /*for(int j=0;j<colonne;j++)
    printf("%d%d",matrice[i][j]);
       affichevecteur(matrice[i],colonne);
        printf("\n");
    }
}*/
//EXE2:ecrire une  fonction qui alloue la memoire d un vecteur puis une fonction pour libere le vecteur
/*int* alloue_vecteur(int dimmension,int val)
{
   int i;
   int* vecteur=malloc(dimmension*sizeof(int));
   for(i=0;i<dimmension;i++)
   {
       vecteur[i]=val;
       return vecteur;
   }
   }
   void libre_vecteur(int*vecteur)
   {
       free(vecteur);
   }
//exe3 et puis la meme demarche pour la matrice
int** alloue_matrice(int lignes,int colonnes,int val)
{
    int i,j;
    int**matrice=malloc(lignes*sizeof(int*));
    for(i=0;i<lignes;i++)
    {
        for(j=0;i<colonnes;j++)
        {
            matrice[i][j]=val;

        }
    }
    return matrice;
}
void libere_matrice(int**matrice,int lignes)
{
    int i;
      for(i=0;i<lignes;i++)
      {
          free((int*)matrice[i]);
      }

}*/
//exe 4 fonction pour allouer la memoire  des matrice d identite
int** alloue_matrice_zero(int lignes,int colonnes)
{
    int i;
    int**matrice=calloc(lignes,sizeof(int*));
    for(i=0;i<lignes;i++)
    {
        matrice[i]=calloc(colonnes,sizeof(int));
    }
    return matrice;
}
int** genere_matrice_identite(int  dimension)
{
    int i;
    int**identite=alloue_matrice_zero(dimension,dimension);
    for(i=0;i<dimension;i++)
    {
        identite[i][j]=1;
        affiche_matrice(identite,dimension,dimension);
    }
    return identite;
}
//il faut connaitre la difference entre reference a lutilisation un passage pmar valeur et une comportement de passage par pointeur et il va pour simplifier le code par contre  pointeur

//ce tp est pour la location dynamique
