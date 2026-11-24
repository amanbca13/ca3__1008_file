// LeetCode 1929 - Concatenation of Array
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int newSize = numsSize * 2;
    int* answer = (int*)malloc(newSize * sizeof(int));
    *returnSize = newSize;

    for (int i = 0; i < numsSize; i++) {
        answer[i] = nums[i];
        answer[i + numsSize] = nums[i];
    }
    return answer;
}
