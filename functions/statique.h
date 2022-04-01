#include <stdlib.h>
#include<stdbool.h>  
#ifndef PILE_STATICE
#define PILE_STATICE
const int  MAX=100;
// make the struct 
struct pile
{
    int tab[MAX];
    int pointp;// indice du sommet de la pile, indice to the next item ?
};
typedef struct pile * pile_s;
bool pile_vide(pile_s p){
    if(p->pointp == -1) return true;
    return false;
}
int pile_full(pile_s p ){
    if(p->pointp <=MAX) return false;
    return true;
}
bool empiler(pile_s p,int x){
    if(pile_vide(p)){
        p->tab[0] =x;
        p->pointp = 1;
        return true;
    }
    if(pile_full(p)) return false;
    p->tab[p->pointp++] = x;
    return true;
}
int dempiler(pile_s p ){
    if(pile_vide(p)) return -1;
    p->pointp--;
    return p->tab[p->tab[p->pointp]]; 
}

#endif