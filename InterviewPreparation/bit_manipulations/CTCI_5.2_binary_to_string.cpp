#include "../Headers/bit_manipulations.h"

std::string binary_to_string(double n)
{
    std::string res;

    int integral = n;
    double fractional = n - integral;

    while (integral > 0) {
        res = (integral % 2 ? "1" : "0") + res;
        integral /= 2;
    }

    res += ".";

    while (fractional > 0 && res.length() <= 32) {
        fractional *= 2;
        integral = fractional;

        if (integral) {
            res += "1";
            fractional -= integral;
        }
        else {
            res += "0";
        }
    }

    return res;
}

void test_binary_to_string()
{
    std::string res = binary_to_string(2.72);

    std::cout << res << std::endl;
}
