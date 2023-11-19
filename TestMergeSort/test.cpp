#include "pch.h"
#include "C:\Users\grzeg\source\repos\TestMergeSort\MergeSort\MergeSort.cpp"


// 1.Czy zachowuje niezmienion� tablic�
TEST(MergeSortTest, LeavesSortedArrayUnchanged) {
    
    std::vector<int> input = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> expected_output = { 1, 2, 3, 4, 5, 6 };

    
    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    
    ASSERT_EQ(input, expected_output);
}


// 2.Czy posortuje odwr�con�
TEST(MergeSortTest, SortsReversedArray) {
    
    std::vector<int> input = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    std::vector<int> expected_output = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    
    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    
    ASSERT_EQ(input, expected_output);
}
// 3.czy posortuje losow�
TEST(MergeSortTest, SortsRandomArray) {
    
    std::vector<int> input = { 7, 4, 2, 9, 3, 1 };
    std::vector<int> expected_output = { 1, 2, 3, 4, 7, 9 };

    
    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    
    ASSERT_EQ(input, expected_output);
}
// 4.czy posortuje ujemne
TEST(MergeSortTest, SortsNegativeNumbersArray) {
    std::vector<int> input = { -4, -2, -7, -1, -9, -3 };
    std::vector<int> expected_output = { -9, -7, -4, -3, -2, -1 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}

// 5.czy posortuje ujemne i dodatnie
TEST(MergeSortTest, SortsMixedNumbersArray) {
    std::vector<int> input = { -4, 2, -7, 1, 9, -3 };
    std::vector<int> expected_output = { -7, -4, -3, 1, 2, 9 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}

// 6.Test sprawdza, czy algorytm obs�uguje pust� tablic� bez rzucania wyj�tkiem
TEST(MergeSortTest, HandlesEmptyArray) {
    std::vector<int> input = {};
    std::vector<int> expected_output = {};

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//7.Test sprawdza, czy algorytm nie zmienia tablicy, kt�ra zawiera tylko jeden element
TEST(MergeSortTest, LeavesSingleElementArrayUnchanged) {
    std::vector<int> input = { 5 };
    std::vector<int> expected_output = { 5 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//8.Test sprawdza, czy algorytm poprawnie sortuje tablic� z duplikatami liczb
TEST(MergeSortTest, SortsArrayWithDuplicates) {
    std::vector<int> input = { 4, 2, 7, 1, 9, 2, 3 };
    std::vector<int> expected_output = { 1, 2, 2, 3, 4, 7, 9 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//9.Test sprawdza, czy algorytm poprawnie sortuje tablice ujemn� z duplikatami
TEST(MergeSortTest, SortsNegativeArrayWithDuplicates) {
    std::vector<int> input = { -4, -2, -7, -1, -9, -2, -3 };
    std::vector<int> expected_output = { -9, -7, -4, -3, -2, -2, -1 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//10.Test sprawdza, czy algorytm poprawnie sortuje tablice z liczbami ujemnymi, dodatnimi oraz duplikatami
TEST(MergeSortTest, SortsMixedArrayWithDuplicates) {
    std::vector<int> input = { -4, 2, -7, 1, 2, 9, -3, 2 };
    std::vector<int> expected_output = { -7, -4, -3, 1, 2, 2, 2, 9 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//11.Test sprawdza, czy algorytm poprawnie sortuje tablic� zawieraj�c� tylko dwa elementy w kolejno�ci rosn�cej
TEST(MergeSortTest, SortsTwoElementArrayAscending) {
    std::vector<int> input = { 3, 1 };
    std::vector<int> expected_output = { 1, 3 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
