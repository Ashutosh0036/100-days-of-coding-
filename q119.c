//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int sum = 0, expectedSum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    expectedSum = (n - 1) * (n - 2) / 2; 
    printf("%d", sum - expectedSum);

    return 0;
}