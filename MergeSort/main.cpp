#include "MergeSort.h"
#include <iostream>
#include <vector>

int main() {
    // Wczytaj liczby z klawiatury
    std::cout << "Podaj liczby do posortowania (wpisz 0, aby przerwac): ";
    std::vector<int> lista_do_posortowania;
    int liczba;

    while (std::cin >> liczba && liczba != 0) {
        lista_do_posortowania.push_back(liczba);
    }

    std::cout << "Lista przed posortowaniem:";
    for (int liczba : lista_do_posortowania) {
        std::cout << " " << liczba;
    }
    std::cout << std::endl;

    MergeSort sorter;
    sorter.sortuj(lista_do_posortowania, 0, lista_do_posortowania.size() - 1);

    std::cout << "Lista po posortowaniu:";
    for (int liczba : lista_do_posortowania) {
        std::cout << " " << liczba;
    }
    std::cout << std::endl;

    return 0;
}
