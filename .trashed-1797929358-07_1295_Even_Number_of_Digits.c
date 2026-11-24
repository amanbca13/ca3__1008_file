// LeetCode 1295 - Find Numbers with Even Number of Digits
int findNumbers(int* nums, int numsSize) {
    int answer = 0;
    for (int i = 0; i < numsSize; i++) {
        int number = nums[i];
        int digits = 0;
        do {
            digits++;
            number /= 10;
        } while (number != 0);

        if (digits % 2 == 0) answer++;
    }
    return answer;
}
