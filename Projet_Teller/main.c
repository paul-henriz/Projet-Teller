//
//  main.c
//  Projet_Teller
//
//  Created by Paul-Henri on 03/11/2016.
//  Copyright © 2016 Test. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int sigma_v1();
int teller();
void iterated_teller();
int is_prime_v1();
int iterated_teller_1000();

int main(int argc, const char * argv[]) {
    //int x;
    //printf("nombre");
    //scanf ("%d", &x);
    return iterated_teller_1000();
}


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
    printf("%d\n", s);
    return s;
}

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
void iterated_teller(int x){
    int i = x;
    while (i != teller(i)){
        i = teller(i);
    }
    printf("H(%d) = %d\n", x, i);
    //return 0;
}
int is_prime_v1(int x){
    if (teller(x) == x){
        printf("%d est premier\n", x);
    }
    else printf("%d n'est pas premier\n", x);
    return 0;
}
int iterated_teller_1000(){
    int i;
    for(i = 1; i <= 1000; i++){
        iterated_teller(i);
    }
    return 0;
}
