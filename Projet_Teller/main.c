//
//  main.c
//  Projet_Teller
//
//  Created by Paul-Henri on 03/11/2016.
//  Copyright © 2016 Test. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


/* Annonce des fonction */
int sigma_v1();
int teller();
void iterated_teller();
int is_prime_v1();
int iterated_teller_1000();
int premier();
int deficient();



/* Déclaration de la fonction principale */
int main(int argc, const char * argv[]) {
    int choix;
    printf("--- Menu ---\n\n");
    printf("1. Lancer sigma_v1\n");
    printf("2. Lancer teller\n");
    printf("3. Lancer iterated_teller\n");
    printf("4. Lancer is_prime_v1\n");
    printf("5. LAncer iterated_teller(1000)\n");
    //scanf("%d", &choix);
    //int x;
    //printf("nombre");
    //scanf ("%d", &x);
    //return iterated_teller_1000();
    //premier(101);
    deficient(13);
    return 0;
    
}



/* Déclaration des fonctions secondaires */


/* Sigma_v1 calcule la somme des diviseurs d'un nombre en incluant 1 */

int sigma_v1(int x){
    int i = 1, s = 0;
    do
    {
        if (x % i == 0)
        {
            // debug
            //printf ("%d est un diviseur de %d\n",i,x);
            s = s + i;
        }
        i++;
    }while (i <= x);
    //printf("%d\n", s);
    return s;
}


/* Teller calcule la somme des diviseurs d'un nombre en exluant 1 */

int teller(int x){
    int i = 2, s = 0;
    do
    {
        if (x % i == 0)
        {
            // debug
            //printf ("%d est un diviseur de %d\n",i,x);
            s = s + i;
        }
        i++;
    }while (i <= x);
    //printf("%d\n", s);
    return s;
}


/* Iterated_Teller applique la fonction Teller de manière récursive */
void iterated_teller(int x){
    int i = x;
    while (i != teller(i)){
        i = teller(i);
    }
    printf("H(%d) = %d\n", x, i);
    //return 0;
}

/* Is_Prime_V1 permet de déterminer si un nombre est premier grâce à la fonction Teller */
int is_prime_v1(int x){
    if (teller(x) == x){
        printf("%d est premier\n", x);
    }
    else printf("%d n'est pas premier\n", x);
    return 0;
}

/* Calcule les termes de 1 à 1000 de la fonction Telelr */
int iterated_teller_1000(){
    int i;
    for(i = 1; i <= 1000; i++){
        iterated_teller(i);
    }
    return 0;
}

int premier(int n){
    int i = 0;
    for (i = 0; i < (n + 1); i++) {
        if (teller(i) == i){
            printf("%d\n", i);
        }
    }
    return 0;
}

int deficient(int n){
    int i = 0;
    for (i = 0; i < (n + 1); i++) {
        if (sigma_v1(i) < 2*i){
            printf("%d est déficient\n", i);
        }
    }
    return 0;
}

