#include "../Headers/bit_manipulations.h"

#include <algorithm>

int flip_to_win(unsigned int n)
{
    int cur_length = 0;
    int prev_length = 0;
    int max_length = 0;

    while (n) {
        if (n & 1) {
            ++cur_length;
        }
        else {
            prev_length = (n & 2) ? cur_length : 0;
            cur_length = 0;
        }

        max_length = std::max(max_length, cur_length + prev_length + 1);
        n >>= 1;
    }

    return max_length;
}

void test_flip_to_win()
{
    bool all_tests_passed = true;

    int res = flip_to_win(1775);

    if (res != 8) {
        all_tests_passed = false;
        std::cout << "Wrong answer for flip_to_win(1775)";
    }

    res = flip_to_win(2);

    if (res != 2) {
        all_tests_passed = false;
        std::cout << "Wrong answer for flip_to_win(2)";
    }

    if (all_tests_passed) {
        std::cout << "All Tests passed!" << std::endl;
    }
}
