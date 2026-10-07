#include <stdio.h>

int maxProfit(int prices[], int size) {
    if (size < 2) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] - minPrice > maxProfitValue) {
            maxProfitValue = prices[i] - minPrice;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfitValue;
}

int main(void) {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1: %d (Expected: 5)\n", maxProfit(prices1, 6));

    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2: %d (Expected: 0)\n", maxProfit(prices2, 5));

    return 0;
}
