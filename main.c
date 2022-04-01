#include <stdio.h>
#include "functions/statique.h"

// THE MAIN FUNCTION

int main(){
    pile_s p;
    p->pointp =-1;
    for (int i = 0; i < MAX-1; i++)
    {
        printf("%d\n",i);
        if(!empiler(p,i)) exit(-1);
    }
    for (int i = 0; i < MAX-1; i++) printf("%d ->",dempiler(p));
    printf("%d",pile_vide(p));
    printf("%d",pile_full(p));

    return 0;
}