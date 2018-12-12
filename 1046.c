#include <stdio.h>

int main()
{

    int hi, mi, hf, mf, ht, mt;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    ht = hf - hi;
    mt = mf - mi;

    if(ht < 0){
        ht += 24;
    }

    if(mt < 0){
        mt += 60;
        ht -= 1;
    }

    if(ht == 0 && mt == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mt);
    }
    
    return 0;
}