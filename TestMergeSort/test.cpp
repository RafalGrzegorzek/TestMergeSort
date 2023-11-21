#include "pch.h"
#include "C:\Users\grzeg\source\repos\TestMergeSort\MergeSort\MergeSort.cpp"


// 1.Czy zachowuje niezmienion¹ tablicê
TEST(MergeSortTest, LeavesSortedArrayUnchanged) {
    
    std::vector<int> input = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> expected_output = { 1, 2, 3, 4, 5, 6 };

    
    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    
    ASSERT_EQ(input, expected_output);
}


// 2.Czy posortuje odwrócon¹
TEST(MergeSortTest, SortsReversedArray) {
    
    std::vector<int> input = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    std::vector<int> expected_output = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    
    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    
    ASSERT_EQ(input, expected_output);
}
// 3.czy posortuje losow¹
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

// 6.Test sprawdza, czy algorytm obs³uguje pust¹ tablicê bez rzucania wyj¹tkiem
TEST(MergeSortTest, HandlesEmptyArray) {
    std::vector<int> input = {};
    std::vector<int> expected_output = {};

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//7.Test sprawdza, czy algorytm nie zmienia tablicy, która zawiera tylko jeden element
TEST(MergeSortTest, LeavesSingleElementArrayUnchanged) {
    std::vector<int> input = { 5 };
    std::vector<int> expected_output = { 5 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//8.Test sprawdza, czy algorytm poprawnie sortuje tablicê z duplikatami liczb
TEST(MergeSortTest, SortsArrayWithDuplicates) {
    std::vector<int> input = { 4, 2, 7, 1, 9, 2, 3 };
    std::vector<int> expected_output = { 1, 2, 2, 3, 4, 7, 9 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//9.Test sprawdza, czy algorytm poprawnie sortuje tablice ujemn¹ z duplikatami
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
//11.Test sprawdza, czy algorytm poprawnie sortuje tablicê zawieraj¹c¹ tylko dwa elementy w kolejnoœci rosn¹cej
TEST(MergeSortTest, SortsTwoElementArrayAscending) {
    std::vector<int> input = { 3, 1 };
    std::vector<int> expected_output = { 1, 3 };

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//12.Test sprawdza, czy algorytm poprawnie sortuje du¿¹ tablicê zawieraj¹c¹ ponad 100 elementów
TEST(MergeSortTest, SortsLargeArray) {
    
    const int arraySize = 105;
    std::vector<int> input = {
        45, 12, 78, 34, 90, 23, 56, 89, 67, 43, 21,
        76, 32, 88, 54, 98, 10, 65, 31, 77, 44, 19,
        87, 55, 29, 99, 11, 66, 42, 18, 75, 33, 80,
        22, 68, 46, 24, 79, 35, 91, 57, 30, 13, 81,
        58, 36, 92, 14, 69, 47, 25, 82, 66, 15, 70,
        48, 26, 83, 37, 93, 16, 71, 49, 27, 84, 38,
        94, 17, 72, 50, 28, 85, 39, 95, 20, 73, 51,
        40, 96, 74, 52, 41, 97, 53, 60, 102, 100, 101,
        104, 103, 106, 110, 109, 108, 107, 112, 115, 113, 114,
        118, 116, 120, 119, 117, 123, 122, 121, 126, 124, 128,
        127, 130, 125, 129, 132, 131, 135, 133, 136, 138, 137
    };

    // posortowana rosn¹co tablica
    std::vector<int> expected_output = input;
    std::sort(expected_output.begin(), expected_output.end());

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}
//13.Test sprawdza, czy algorytm poprawnie sortuje du¿¹ tablicê zawieraj¹c¹ ponad 100 elementów z liczbami ujemnymi, dodatnimi oraz duplikatami
TEST(MergeSortTest, SortsLargeMixedArrayWithDuplicates) {
    
    const int arraySize = 105;
    std::vector<int> input = {
        45, -12, 78, -34, 90, 23, -56, 89, -67, 43, -21,
        76, -32, 88, -54, 98, 10, -65, 31, -77, 44, -19,
        -87, 55, -29, 99, 11, -66, 42, -18, 75, -33, 80,
        22, -68, 46, -24, 79, -35, 91, -57, 30, -13, 81,
        58, -36, 92, -14, 69, -47, 25, -82, 66, -15, 70,
        -48, 26, -83, 37, -93, 16, -71, 49, -27, 84, 38,
        -94, 17, -72, 50, -28, 85, 39, -95, 20, -73, 51,
        40, -96, 74, -52, 41, -97, 53, -60, 102, 100, 101,
        104, 103, 106, 110, 109, 108, 107, 112, 115, 113, 114,
        118, 116, 120, 119, 117, 123, 122, 121, 126, 124, 128,
        127, 130, 125, 129, 132, 131, 135, 133, 136, 138, 137
    };

    std::vector<int> expected_output = input;
    std::sort(expected_output.begin(), expected_output.end());

    MergeSort sorter;
    sorter.sortuj(input, 0, input.size() - 1);

    ASSERT_EQ(input, expected_output);
}