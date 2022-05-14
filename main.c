#include <stdio.h>
#include <stdlib.h>

#include "functions/statique.h"
#include "functions/dynamique.h"


// THE MAIN FUNCTION

int main(){
    pile_d p =(pile_d)malloc(sizeof(pile_d));
    pile_s p_s =(pile_s)malloc(sizeof(pile_s));

    for (int i = 0; i < MAX-1; i++)
    {
        // empiler(&p,i);
        empiler_s(p_s,i);
    }
    // for (int i = 0; i < MAX-1; i++) {
    //     printf("%d ->",dempiler(&p));

    //         if(!pile_vide(p)){
    //                  p = p->next;
    //         }
    //     }
    for (int i = 0; i < MAX-1; i++)
    {
        printf("%d ->",dempiler_s(p_s));
    }
    
    // printf("\n vide?:%d",pile_vide(p));
    printf("\n vide?:%d",pile_vide_s(p_s));

    // printf("\n  plien? :%d",pile_full(p_s));
    printf("\n  plien? :%d",pile_plein(p,MAX));


    return 0;
}