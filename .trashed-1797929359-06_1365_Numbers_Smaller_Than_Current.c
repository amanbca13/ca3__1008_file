// LeetCode 1365 - How Many Numbers Are Smaller Than the Current Number
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        answer[i] = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] < nums[i]) answer[i]++;
        }
    }
    return answer;
}
// Include <stdlib.h> if compiling locally.
