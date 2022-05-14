#include <stdlib.h>
#include<stdbool.h>  
#include <stdio.h>
#ifndef PILE_DYNAMIQUE
#define PILE_DYNAMIQUE
const int  MAX=100;

// make the struct 
struct element
{
    int v;
    struct element * next;
};
typedef struct element * pile_d;
// * ensemble vide ?
int pile_vide(pile_d p){
    if(p == NULL) return  1;
    return 0;
}
// * éventuellement ensemble plein ?
int pile_plein(pile_d p,int max){
  int occ=0;
    while (p !=NULL)
    {
      occ ++;p =p->next;
    }
    if(occ >= max) return  1;
    return 0;
}
// * Ajouter un élément (empiler)
void empiler(pile_d *tp,int x){
    pile_d nv =(pile_d)malloc(sizeof(pile_d)),p=*tp;
    nv->v = x;
    nv->next =p;
    (*tp) = nv;
}
// * Retirer le 1er élément (dépiler)
int dempiler(pile_d *p ){
  if(pile_vide(*p)) return -1;
  pile_d tmp =(*p);int v =tmp->v;
  tmp =tmp->next;
  return v;
}
// * Donner l’élément qui se trouve au sommet
int sommet(pile_d p){
  if(!pile_vide(p))return p->v;
  else return -1;
}
// * Eventuellement, vider la pile
void vide(pile_d p){
  free(p);
}

#endif