#include "../Headers/bit_manipulations.h"

int insertion(int n, int m, int i, int j)
{
    int all_ones = ~(0);

    int left = all_ones << (j + 1);
    int right = (1 << i) - 1;

    int mask = left | right;

    int n_cleared = n & mask;
    int m_shifted = m << i;

    return n_cleared | m_shifted;
}

void test_insertion()
{
    bool all_tests_passed = true;

    int res = insertion(2678936, 7, 2, 7);

    if (res != 2678812) {
        all_tests_passed = false;
        std::cout << "Wrong answer for insertion(2678936, 7, 2, 7)" << std::endl;
    }

    res = insertion(2678936, 7, 0, 5);

    if (res != 2678919) {
        all_tests_passed = false;
        std::cout << "Wrong answer for insertion(2678936, 7, 0, 5)" << std::endl;
    }

    if (all_tests_passed) {
        std::cout << "All Tests passed!" << std::endl;
    }
}

