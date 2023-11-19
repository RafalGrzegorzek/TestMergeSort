#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort {
public:
    void sortuj(std::vector<int>& lista, int lewy, int prawy);

private:
    void scalaj(std::vector<int>& lista, int lewy, int srodek, int prawy);
};

#endif // MERGESORT_H

