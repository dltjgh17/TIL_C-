#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long left = 1;
    long long right = n;

    while (left <= right) {
        // (left + right) / 2 대신 overflow-safe 방식
        long long mid = left + (right - left) / 2;

        // mid*mid > n 비교를 나눗셈으로 대체 (overflow 방지)
        if (mid > n / mid) {
            right = mid - 1;
        } else {
            long long sq = mid * mid;  // 여기서는 안전(이미 mid <= n/mid 보장)
            if (sq == n) {
                long long next = mid + 1;
                return next * next;    // next^2은 long long 범위 내
            }
            left = mid + 1;
        }
    }
    return -1;
}
