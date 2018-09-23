#include "../Headers/dynamic_programming.h"
#include <map>

int triple_step_helper(int n, std::map<int, int>& memo)
{
    int count = 0;

    if (memo.find(n) == memo.end()) {
        if (n < 0)
            return 0;

        if (n == 0)
            return 1;

        memo[n] = triple_step_helper(n - 1, memo) + triple_step_helper(n - 2, memo);
    }

    return memo[n];
}

int triple_step(int n)
{
    std::map<int, int> memo;

    return triple_step_helper(n, memo);
}

void test_triple_step()
{
    bool passed = true;

    int res = triple_step(3);
}
