// LeetCode 2469 - Convert the Temperature
// Return: [Kelvin, Fahrenheit]
double* convertTemperature(double celsius, int* returnSize) {
    double* answer = (double*)malloc(2 * sizeof(double));
    answer[0] = celsius + 273.15;
    answer[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return answer;
}
// LeetCode provides the required environment; include <stdlib.h> if compiling locally.
