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
int iterated_teller();
int is_prime_v1();
int iterated_teller_1000();
int premier();
int deficient();
int parfait();
int abondant();
int superabondant();



/* Déclaration de la fonction principale */
int main(int argc, const char * argv[]) {
    int choix, arg;
    printf("--- Menu ---\n\n");
    printf("1. Lancer sigma_v1\n");
    printf("2. Lancer teller\n");
    printf("3. Lancer iterated_teller\n");
    printf("4. Lancer is_prime_v1\n");
    printf("5. LAncer iterated_teller(1000)\n");
    scanf("%d", &choix);
    if (choix == 1){
        printf("Calculer la somme des diviseurs de quel nombre ?\n");
        scanf("%d", &arg);
        printf("La somme des diviseurs (sans lui-même) de %d vaut %d\n", arg, sigma_v1(arg));
    }
    else if (choix == 2){
        printf("Calculer teller de quel nombre ?\n");
        scanf("%d", &arg);
        printf("Teller de %d vaut %d\n", arg, teller(arg));
    }
    else if (choix == 3){
        printf("Calculer teller_iterated de quel nombre ?\n");
        scanf("%d", &arg);
        printf("iterated_teller de %d vaut %d\n", arg, iterated_teller(arg));
    }
    else if (choix == 4){
        printf("Sur quel nombre exécute-t-on le test de primalité à partir de la fonction teller ?\n");
        scanf("%d", &arg);
        if (is_prime_v1(arg) == 0) printf("%d est premier\n", arg);
        else printf("%d n'est pas premier\n", arg);
    }
    //int x;
    //printf("nombre");
    //scanf ("%d", &x);
    //return iterated_teller_1000();
    //premier(101);
    //superabondant(50);
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
int iterated_teller(int x){
    int i = x;
    while (i != teller(i)){
        i = teller(i);
    }
    return i;
}

/* Is_Prime_V1 permet de déterminer si un nombre est premier grâce à la fonction Teller */
int is_prime_v1(int x){
    if (teller(x) == x){
        return 0;
    }
    else return 1;
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
    int i;
    for (i = 0; i < (n + 1); i++) {
        if (teller(i) == i){
            printf("%d\n", i);
        }
    }
    return 0;
}

int deficient(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if (sigma_v1(i) < 2*i){
            printf("%d est déficient\n", i);
        }
    }
    return 0;
}

int parfait(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if ((sigma_v1(i) - i) == i){
            printf("%d est parfait\n", i);
        }
    }
    return 0;
}

int abondant(int n){
    int i;
    for (i = 1; i < (n + 1); i++) {
        if (sigma_v1(i) > 2*i){
            printf("%d est abondant\n", i);
        }
    }
    return 0;
}
int sigma_v2(int n){
    int tt = 0;
    int i = 1;
    while (i*i < n){
        if (n%i == 0){
            tt+=(i + n/i);
            i+=1;
        }
        
        if (i*i == n){
            tt+=i;
        }
    }
    return tt;
}

int superabondant(){
    int n = 50;
    int i;
    int m;
    int anterieur = 1;
    for (i = 1; i < (n + 1); i++) {
        m = anterieur;
        if ((sigma_v2(m)/ m) < (sigma_v2(i)/ i)){
            printf("%d est superabondant %d\n", i, m);
            anterieur = i;
        }
        printf("On est à %d %d\n", i, m);
    }
    return 0;
}
