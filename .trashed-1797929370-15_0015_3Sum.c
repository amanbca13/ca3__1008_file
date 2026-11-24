// LeetCode 15 - 3Sum
#include <stdlib.h>

static int compareInts(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int capacity = numsSize * numsSize;
    int** answer = (int**)malloc((capacity > 0 ? capacity : 1) * sizeof(int*));
    *returnColumnSizes = (int*)malloc((capacity > 0 ? capacity : 1) * sizeof(int));
    *returnSize = 0;

    qsort(nums, numsSize, sizeof(int), compareInts);

    for (int i = 0; i < numsSize - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        if (nums[i] > 0) break;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            long sum = (long)nums[i] + nums[left] + nums[right];

            if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            } else {
                int* triplet = (int*)malloc(3 * sizeof(int));
                triplet[0] = nums[i];
                triplet[1] = nums[left];
                triplet[2] = nums[right];

                answer[*returnSize] = triplet;
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right + 1]) right--;
            }
        }
    }
    return answer;
}
