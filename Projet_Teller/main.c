//
//  main.c
//  Projet_Teller
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


/* Annonce des fonctions */
int sigma_v1();
int teller();
int iterated_teller();
int is_prime_v1();
int iterated_teller_1000();
void premier();
void deficient();
void parfait();
void abondant();
void superabondant();
void converg_iterated_teller();
void min_max_iterated_teller();
void record_iterated_teller();
void ancetres();
void solitude();
void test_solitude();
int test_primalite_v2();
void consecutif();
void nombre_ancetres();
void fonction_p();
void fonction_p_record();
void teller_ancetre();


/* Déclaration de la fonction principale et du menu de sélection */
int main(int argc, const char * argv[]) {
    int choix, arg;
    do{
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
    printf("10. Affichers les nombres super-abondants jusqu'à un rang\n");
    printf("11. Affichers le nombre d'itérations avant convergence d'une série\n");
    printf("12. Affichers le min et le max de la suite\n");
    printf("13. Affichers le recordman d'une série\n");
    printf("14. Affichers les ancêtres d'une série\n");
    printf("15. Teste la solitude d'un nombre\n");
    printf("16. Liste les nombres solitaires d'une série\n");
    printf("17. Compte les ancêtres d'un nombre\n");
    printf("18. Lancer la fonction P d'un nombre\n");
    printf("19. Chercher un record de la fonction P\n");
    printf("20. Calculer les ratios teller et ancêtres\n");
    printf("Taper 0 pour quitter le programme\n");
    
    scanf("%d", &choix);
    if (choix == 1){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer la somme des diviseurs de quel nombre ?\n");
        scanf("%d", &arg);
        printf("La somme des diviseurs de %d vaut %d\n", arg, sigma_v1(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
        
    }
    else if (choix == 2){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer teller de quel nombre ?\n");
        scanf("%d", &arg);
        printf("Teller de %d vaut %d\n", arg, teller(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 3){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer teller_iterated de quel nombre ?\n");
        scanf("%d", &arg);
        printf("iterated_teller de %d vaut %d\n", arg, iterated_teller(arg));
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 4){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Sur quel nombre exécute-t-on le test de primalité à partir de la fonction teller ?\n");
        scanf("%d", &arg);
        if (is_prime_v1(arg) == 1) printf("%d est premier\n", arg);
        else printf("%d n'est pas premier\n", arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 5){
        double total_time;
        clock_t start, end;
        printf("Voici les termes de 1 à 1000 de la fonction iterated_Teller");
        start = clock();
        iterated_teller_1000();
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 6){
        double total_time;
        clock_t start, end;
        printf("Afficher les nombres premiers jusqu'à combien ?\n");
        scanf("%d", &arg);
        start = clock();
        premier(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 7){
        double total_time;
        clock_t start, end;
        printf("Afficher les nombres déficients jusqu'à combien ?\n");
        scanf("%d", &arg);
        start = clock();
        deficient(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 8){
        double total_time;
        clock_t start, end;
        printf("Afficher les nombres parfaits jusqu'à combien ?\n");
        scanf("%d", &arg);
        start = clock();
        parfait(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 9){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les nombres abondants jusqu'à combien ?\n");
        scanf("%d", &arg);
        abondant(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 10){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les nombres super-abondants jusqu'à combien ?\n");
        scanf("%d", &arg);
        superabondant(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 11){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher le nombre d'itérations avant convergence de la suite jusqu'à combien ? ?\n");
        scanf("%d", &arg);
        converg_iterated_teller(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 12){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les extremums de la suite jusqu'à combien ?\n");
        scanf("%d", &arg);
        min_max_iterated_teller(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 13){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les recordmans de la suite jusqu'à combien ?\n");
        scanf("%d", &arg);
        record_iterated_teller(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 14){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les ancêtres de la suite jusqu'à combien ?\n");
        scanf("%d", &arg);
        ancetres(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 15){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Quel est le nombre à vérifier ?\n");
        scanf("%d", &arg);
        test_solitude(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 16){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Afficher les solitaires de la suite jusqu'à combien ?\n");
        scanf("%d", &arg);
        solitude(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 17){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer le nombre d'ancêtre de quel nombre ?\n");
        scanf("%d", &arg);
        nombre_ancetres(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 18){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer P de quel nombre ?\n");
        scanf("%d", &arg);
        fonction_p(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 19){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer P jusqu'à quel nombre ?\n");
        scanf("%d", &arg);
        fonction_p_record(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    else if (choix == 20){
        double total_time;
        clock_t start, end;
        start = clock();
        printf("Calculer les ratios jusqu'à quel nombre ?\n");
        scanf("%d", &arg);
        teller_ancetre(arg);
        end = clock();
        total_time = ((double) (end - start))/CLOCKS_PER_SEC;
        printf("\nExécuté en %f secondes\n", total_time);
        sleep(5);
    }
    }while(choix != 0);
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
int teller(int nombre)
{
    int teller = 0;
    
    teller = sigma_v1(nombre) - 1 ;
    
    return sigma_v1(nombre) - 1;
    
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
        return 1;
    }
    else return 0;
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
void premier(int n){
    int i;
    for (i = 0; i < (n + 1); i++){
        if (teller(i) == i) printf("%d\n", i);
    }
}

/* Liste les entiers déficients jusqu'au rang n */
void deficient(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if (sigma_v1(i) < 2*i){
            printf("%d\n", i);
        }
    }
}

/* Liste les entiers parfaits jusqu'au rang n */
void parfait(int n){
    int i;
    for (i = 0; i < (n + 1); i++) {
        if ((sigma_v1(i) - i) == i){
            printf("%d\n", i);
        }
    }
}

/* Liste les entiers abondants jusqu'au rang n */
void abondant(int n){
    int i;
    for (i = 1; i < (n + 1); i++) {
        if (sigma_v1(i) > 2*i){
            printf("%d\n", i);
        }
    }
}

/* List les entiers super abondants jusqu'au rang n*/
void superabondant(int x){
    float m, n, sm, sn;
    int i, anterieur = 1;
    for (i = 1; i < x; i++) {
        m = anterieur;
        n = i;
        sm = sigma_v1(m);
        sn = sigma_v1(i);
        if ((sm / m) < (sn / n)){
            printf("%d\n", i);
            anterieur = i;
        }
    }
}

/* Vérifie le nombre d'itérations avant convergence (tomber sur un nombre premier) */
void converg_iterated_teller(int x){
    int i, s, j;
    for(i = 2; i <= x; i++){
        j = i;
        s = 0;
        while (j != teller(j)){
            j = teller(j);
            s++;
        }
        printf("Il aura fallu %d itération(s) de la fonction teller pour %d avant de converger vers %d\n", s, i, j);
    }
}

/* On calcule successivement le teller d'un nombre, et à chaque "tour", on vérifie si on atteint un maximum ou un minimum*/
void min_max_iterated_teller(int x){
    int i, s, j, min, max;
    for(i = 2; i <= x; i++){
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

/* On cherche le nombre qui atteindra le maximum d'itérations */
void record_iterated_teller(int x){
    int i, s, j, max = 0, i_max = 0;
    for(i = 2; i <= x; i++){
        j = i;
        s = 0;
        while (j != teller(j)){
            j = teller(j);
            s++;
        }
        if(s > max){
            max = s;
            i_max = i;
            printf("Le nouveau recordman de cette série est %d et atteint %d itérations\n", i_max, max);
        }
    }
}

/* Permet de trouver les ancêtres d'un seul nombre*/
int ancetres_unique(int x){
    int s = 0;
    if(x == teller(x)){
        for(int j = 0; j <= x; j++){
            if(iterated_teller(j) == x){
                s++;
            }
        }
    }
    return s;
}

/* Permet de trouver les ancêtres de nombres jusqu'à un rang x*/
void ancetres(int x){
    int i, j, s, max_i = 0, max = 0;
    for(i = 1; i <= x; i++){
        if(i == teller(i)){
            s = 0;
            printf("Les ancêtres de %d sont: ", i);
            for(j = 0; j <= i; j++){
                if(iterated_teller(j) == i){
                    printf("%d ", j);
                    s++;
                }
            }
            if(max < s){
                max = s;
                max_i = i;
            }
            printf("\n");
        }
    }
    printf("%d est le nombre qui a le plus d'ancêtre dans la série avec %d ancêtres\n", max_i, max);
}

/* On vérifie si l'entier x est un nombre solitaire */
void test_solitude(int x){
    int i, s;
    for(i = 0; i <= x; i++){
        if(iterated_teller(x) == i){
            s++;
        }
    }
    if(s == 1) printf("%d est un nombre solitaire\n", x);
    else printf("%d n'est pas un nombre solitaire\n", x);
}

/* On teste chaque nombre de 1 à x pour vérifier si c'est un premier solitaire */
void solitude(int x){
    int i, j, s;
    for(i = 1; i <= x; i++){
        if(i == teller(i)){
            s = 0;
            for(j = 0; j <= i; j++){
                if(iterated_teller(j) == i){
                    s++;
                }
            }
            if(s == 1) printf("%d est un entier premier solitaire\n", i);
        }
    }
}

/* On calcule le nombre d'ancêtre du nombre x avec la somme s */
void nombre_ancetres(int x){
    int i, s;
    if(x == teller(x)){
        s = 0;
        for(i = 0; i <= x; i++){
            if(iterated_teller(i) == x){
                s++;
            }
        }
        printf("Il y a %d ancêtre(s) pour %d\n", s, x);
    }
}


void fonction_p(int x){
    int i, s, max;
    max = 0;
    s = 0;
    for(i = 1; i <= x; i++){
        if(x % i == 0 && i == teller(i)){
            s++;
        }
        if(s > max) max = s;
    }
    printf("Le maximum de diviseurs premiers est %d\n", max);
}

void fonction_p_record(int x){
    int i, a, s, max, max_a;
    max = 0, max_a = 0;
    for (a = 1;a < x; a++){
        s = 0;
        for(i = 1; i <= a / 2; i++){
            if(a % i == 0 && i == teller(i)){
                s++;
            }
            if(s > max)
            {
                max = s;
                max_a = a;
            }
        }
    }
    printf("Le maximum de diviseurs premiers est %d et est atteint la dernière fois pour %d\n", max, max_a);
}
void teller_ancetre(int x){
    double i;
    int c = 1;
    for(i = 1; i <= x; i++){
        // Test: On choisit ici de n'afficher que les nombres premiers, les résultats valant 0 pour les autres nombres
        //if (i == teller(i))
            printf(
                "%d: Ratio Teller %f; ratio ancêtre %f\n",
                c, teller(i) / i, ancetres_unique(i) / i
            );
        c++;
    }
}
