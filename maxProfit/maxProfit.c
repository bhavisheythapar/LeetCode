#include <stdio.h>

int maxProfit (int* prices, int pricesSize) {
    int profit=0;
    for (int i=1;i<pricesSize;i++) {
        if (prices[i]>prices[i-1]) {
            profit=profit+prices[i]-prices[i-1];
        }
    }
    return profit;
}


int main(void) {
    int array1[]={2,5};
    printf("Max profit is: %d\n",maxProfit(array1,2));
    return 0;
}