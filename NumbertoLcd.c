#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 9

int main(int argc,char *argv[]){
               
    int nb; /*Nb des segments dans chaque chiffre*/
    char NombreLcd[MAX] /*Nombre à imprimer*/

    char convertChiffre[10][7]={
        /*Une fonction que nous allons appeler par la suite, elle contient tous les chiffres respectivement de 0 à 9 en LCD*/
     '-','|','|',' ','|','|','-',
     ' ','|',' ',' ','|',' ',' ',
     '-','|',' ','-',' ','|','-',
     '-','|',' ','-','|',' ','-',
     ' ','|','|','-','|',' ',' ',
     '-',' ','|','-','|',' ','-',
     '-',' ','|','-','|','|','-',
     '-','|',' ',' ','|',' ',' ',
     '-','|','|','-','|','|','-',
     '-','|','|','-','|',' ','-',
    };


    while(!EOF) /*Tant qu'on est pas arrivé à la fin du fichier*/{
        if(!nb){ /*Le cas ou il n'y a pas de chiffre*/
            return 0;
        }
        int longueur=srtlen(NombreLcd); /*on récupère la longueur du nombre à imprimer*/
        int nombre;

        for(int i=0;i<=longueur;i++){
            for(int j=0;j<=longueur;j++){
                nombre=NombreLcd[j] - '0';
            /*à partir de cette partie on va traiter les différentes parties d'un chiffre*/
                if((i%(nb+1))==0){
                    printf(" ");
                    for(int k=0,k<nb;k++){
                        printf("%c",convertChiffre[nombre][i/(nb+1)*3]);
                    }
                    print(" ");
                }

                if(i>0 && i<(nb+1)){
                    printf("%c", convertChiffre[nombre][5]);
                    for(k=0;k<nb;k++){
                        printf(" ");
                    }
                    printf("%c",convertChiffre[nombre][4])
                }

                if(j!=nombre-1){
                    printf(" ");
                }
                printf("\n");
            }
            printf("\n");
        }
        
    }
    return 0;

}