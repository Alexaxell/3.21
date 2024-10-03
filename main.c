#include <stdio.h>
int bisestile(int anno) {
    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
int data_valida(int giorno, int mese, int anno) {
    if (mese < 1 || mese > 12) {
        return 0;
    }
    if (mese == 4 || mese == 6 || mese == 9 || mese == 11) {
        if (giorno < 1 || giorno > 30) {
            return 0;
        }
    } else if (mese == 2) {
        if (bisestile(anno)) {
            if (giorno < 1 || giorno > 29) {
                return 0;
            }
        } else {
            if (giorno < 1 || giorno > 28) {
                return 0;
            }
        }
    } else {
        if (giorno < 1 || giorno > 31) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int giorno, mese, anno;
    printf("Inserisci il giorno (GG): ");
    scanf("%d", &giorno);
    printf("Inserisci il mese (MM): ");
    scanf("%d", &mese);
    printf("Inserisci l'anno (AAAA): ");
    scanf("%d", &anno);
    if (data_valida(giorno, mese, anno)) {
        printf("La data è corretta.\n");
    } else {
        printf("La data non è corretta.\n");
    }

    return 0;
}
