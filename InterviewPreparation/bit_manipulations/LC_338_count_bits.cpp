#include "../Headers/bit_manipulations.h"

std::vector<int> count_bits(int n)
{
    std::vector<int> res(n + 1, 0);
    int offset = 1;

    for (int i = 1; i < res.size(); ++i) {
        if (offset * 2 == i) {
            offset *= 2;
        }

        res[i] = res[i - offset] + 1;
    }
    return res;
}

void test_count_bits()
{
    std::vector<int> res = count_bits(15);

    for (auto n : res) {
        std::cout << n << " - ";
    }

    std::cout << std::endl;
}
