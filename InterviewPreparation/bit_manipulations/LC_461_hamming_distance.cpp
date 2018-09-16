#include "../Headers/bit_manipulations.h"

int hamming_distance(int x, int y)
{
    int xor_ = x ^ y;

    int res = 0;

    while (xor_) {
        if (xor_ & 1) {
            ++res;
        }

        xor_ >>= 1;
    }

    return res;
}
