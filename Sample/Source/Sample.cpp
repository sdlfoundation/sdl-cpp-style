#include <iostream>
#include <sdl-utils/Types.h>
#include <unordered_map>

u64 _fib(u64 n, std::unordered_map<u64, u64>& dp) {
    if (n <= 1)
        return n;

    if (dp.contains(n))
        return dp[n];

    dp[n - 1] = _fib(n - 1, dp);
    dp[n - 2] = _fib(n - 2, dp);

    return dp[n - 1] + dp[n - 2];
}

inline u64 fib(u64 n) {
    std::unordered_map<u64, u64> dp = {};
    return _fib(n, dp);
}

s32 main() {
    while (true) {
        std::cout << "Enter number: ";

        u64 n;
        std::cin >> n;

        u64 result = fib(n);

        std::cout << "Result: " << std::to_string(result) << std::endl;
    }

    return 0;
}
