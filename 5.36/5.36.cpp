#include <stdio.h>


void towersOfHanoi(int n, int start, int end, int temp) {
    if (n == 1) {
        printf("%d --> %d\n", start, end);
        return;
    }

    towersOfHanoi(n - 1, start, temp, end);

    printf("%d --> %d\n", start, end);

    towersOfHanoi(n - 1, temp, end, start);
}

int main(void) {
    int disks = 3; 
    printf("移動 %d 個圓盤的步驟 (柱子編號 1, 2, 3):\n", disks);
    towersOfHanoi(disks, 1, 3, 2);
    return 0;
}