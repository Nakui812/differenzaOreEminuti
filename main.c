#include <stdio.h>

int main(void)
{
   int ora,minuti,ora1,minuti1,DiffSecondi,Diffore,Diffminuti;
   printf("inserisci il primo orario : ore e minuti \n");
   scanf("%d %d",&ora, &minuti);
    printf("inserisci il secondo orario : ore e minuti \n");
    scanf("%d %d",&ora1, &minuti1);
 DiffSecondi = ((ora*3600) + (minuti*60))-((ora1*3600) + (minuti1*60));
    Diffore = DiffSecondi/3600;
    DiffSecondi= (Diffore*3600)-DiffSecondi;
    Diffminuti = DiffSecondi/60;
    printf("la differenza in ore e in minuti e' %d %d",Diffore,Diffminuti);

}
