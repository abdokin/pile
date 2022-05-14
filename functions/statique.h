#include <stdlib.h>
#include<stdbool.h>  
#ifndef PILE_STATICE
#define PILE_STATICE
const int max_s=100;
// make the struct 
struct pile
{
    int tab[max_s];
    int pointp;// indice du sommet de la pile, indice to the next item ?
};
typedef struct pile * pile_s;
int pile_vide_s(pile_s p){
    if(p->pointp == -1) return 1;
    return 0;
}
int pile_full(pile_s p ){
    if(p->pointp <max_s) return 0;
    return 1;
}
int empiler_s(pile_s p,int x){
    if(pile_vide_s(p)){
        p->tab[0] =x;
        p->pointp = 1;
        return 1;
    }
    else if(pile_full(p)) return 0;
    else {
        p->tab[p->pointp++] = x;
        return 1;
    }
}
int dempiler_s(pile_s p ){
    if(pile_vide_s(p)) return -1;
    p->pointp--;
    return p->tab[p->tab[p->pointp]]; 
}
void vider_pile_s(pile_s p){
    p->pointp = -1;
}
// * Donner l’élément qui se trouve au sommet
int sommet_s(pile_s p){
  if(!pile_vide_s(p))return p->tab[p->pointp-1];
  else return -1;
}
#endif