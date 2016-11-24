//
//  main.c
//  Projet_Teller
//
//  Created by Paul-Henri on 03/11/2016.
//  Copyright © 2016 Paul-Henri Zimmerlin. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Annonce des fonctions */
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
void converg_iterated_teller();
void min_max_iterated_teller();
void record_iterated_teller();



/* Déclaration de la fonction principale et du menu de sélection */
int main(int argc, const char * argv[]) {
    int choix, arg;
    printf("--- Menu ---\n\n");
    printf("1. Lancer sigma_v1\n");
    printf("2. Lancer teller\n");
    printf("3. Lancer iterated_teller\n");
    printf("4. Lancer is_prime_v1\n");
    printf("5. Lancer iterated_teller(1000)\n");
    printf("6. Affichers les nombres premiers jusqu'à un rang\n");
    printf("7. Affichers les nombres deficients jusqu'à un rang\n");
    printf("8. Affichers les nombres parfaits jusqu'à un rang\n");
    printf("9. Affichers les nombres abondants jusqu'à un rang\n");
    printf("10. Affichers les nombres abondants jusqu'à un rang\n");
    printf("11. Affichers le min et le max de la suite\n");
    printf("12. Affichers le recordmen d'une série\n");

    scanf("%d", &choix);
    if (choix == 1){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer la somme des diviseurs de quel nombre ?\n");
        scanf("%d", &arg);
        printf("La somme des diviseurs (sans lui-même) de %d vaut %d\n", arg, sigma_v1(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
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
    else if (choix == 5){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Voici les termes de 1 à 1000 de la fonction iterated_Teller");
        iterated_teller_1000();
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
    }
    else if (choix == 6){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les nombres premiers jusqu'à combien ?\n");
        scanf("%d", &arg);
        printf("%d", premier(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
    }
    else if (choix == 7){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les nombres déficients jusqu'à combien ?\n");
        scanf("%d", &arg);
        printf("%d", deficient(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
    }
    else if (choix == 8){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les nombres parfaits jusqu'à combien ?\n");
        scanf("%d", &arg);
        printf("%d", parfait(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
    }
    else if (choix == 9){
        printf("Afficher les nombres abondants jusqu'à combien ?\n");
        scanf("%d", &arg);
        printf("%d", abondant(arg));
    }
    else if (choix == 10){
        printf("Afficher le nombre d'itérations avant convergence de la suite jusqu'à combien ? ?\n");
        scanf("%d", &arg);
        converg_iterated_teller(arg);
    }
    else if (choix == 11){
        printf("Afficher les extremums de la suite jusqu'à combien ?\n");
        scanf("%d", &arg);
        min_max_iterated_teller(arg);
    }
    else if (choix == 12){
        printf("Afficher les recordmens de la suite jusqu'à combien ?\n");
        scanf("%d", &arg);
        record_iterated_teller(arg);
    }
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

/* Calcule les termes de 1 à 1000 de la fonction Teller */
int iterated_teller_1000(){
    int i;
    for(i = 1; i <= 1000; i++){
        printf("H(%d) = %d\n", i, iterated_teller(i));
    }
    return 0;
}

/* Liste les entiers premiers jusqu'au rang n */
int premier(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if (teller(i) == i){
            printf("%d\n", i);
        }
    }
    return 0;
}

/* Liste les entiers déficients jusqu'au rang n */
int deficient(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if (sigma_v1(i) < 2*i){
            printf("%d\n", i);
        }
    }
    return 0;
}

/* Liste les entiers parfaits jusqu'au rang n */
int parfait(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if ((sigma_v1(i) - i) == i){
            printf("%d\n", i);
        }
    }
    return 0;
}

/* Liste les entiers abondants jusqu'au rang n */
int abondant(int n){
    double total_time;
    clock_t start, end;
    start = clock();
    int i;
    for (i = 1; i < (n + 1); i++) {
        if (sigma_v1(i) > 2*i){
            printf("%d\n", i);
        }
    }
    end = clock();
    total_time = ((double) (end - start))/CLOCKS_PER_SEC;
    printf("\nExécuté en %f secondes\n", total_time);
    return 0;
}

void converg_iterated_teller(int x){
    int i, s, j;
    for(i = 1; i <= x; i++){
        j = i;
        s = 0;
        while (j != teller(j)){
            j = teller(j);
            s++;
        }
        printf("Il aura fallu %d itération de la fonction teller pour %d avant de converger vers %d\n", s, i, j);
    }
}
void min_max_iterated_teller(int x){
    int i, s, j, min, max;
    for(i = 1; i <= x; i++){
        j = i;
        s = 0;
        max = teller(i), min = teller(i);
        while (j != teller(j)){
            j = teller(j);
            if(j > max) max = j;
            if(j < min) min = j;
        }
        printf("Pour %d, la fonction iterated_teller atteint %d pour maximum et %d pour minimum\n", i, max, min);
    }
}
void record_iterated_teller(int x){
    int i, s, j, max = 0, i_max = 0;
    for(i = 1; i <= x; i++){
        j = i;
        s = 0;
        while (j != teller(j)){
            j = teller(j);
            s++;
        }
        if(s > max){
            max = s;
            i_max = i;
            printf("Le nouveau recordmen de cette série est %d et atteint %d itérations\n", i_max, max);
        }
    }
}
/**
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
*/

