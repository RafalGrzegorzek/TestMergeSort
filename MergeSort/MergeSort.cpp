#include "MergeSort.h"

void MergeSort::sortuj(std::vector<int>& lista, int lewy, int prawy) {
    if (lewy < prawy) {
        int srodek = lewy + (prawy - lewy) / 2;
        sortuj(lista, lewy, srodek);
        sortuj(lista, srodek + 1, prawy);
        scalaj(lista, lewy, srodek, prawy);
    }
}

void MergeSort::scalaj(std::vector<int>& lista, int lewy, int srodek, int prawy) {
    int n1 = srodek - lewy + 1;
    int n2 = prawy - srodek;

    std::vector<int> lewa_czesc(lista.begin() + lewy, lista.begin() + lewy + n1);
    std::vector<int> prawa_czesc(lista.begin() + srodek + 1, lista.begin() + srodek + 1 + n2);

    int i = 0, j = 0, k = lewy;

    while (i < n1 && j < n2) {
        if (lewa_czesc[i] <= prawa_czesc[j]) {
            lista[k] = lewa_czesc[i];
            i++;
        }
        else {
            lista[k] = prawa_czesc[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        lista[k] = lewa_czesc[i];
        i++;
        k++;
    }

    while (j < n2) {
        lista[k] = prawa_czesc[j];
        j++;
        k++;
    }
}
