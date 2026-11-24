// LeetCode 1672 - Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int richest = 0;
    for (int i = 0; i < accountsSize; i++) {
        int total = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            total += accounts[i][j];
        }
        if (total > richest) richest = total;
    }
    return richest;
}
