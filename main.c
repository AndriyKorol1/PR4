#include <stdio.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, count = 0;
    printf("������ ���������� ����� n: ");
    scanf("%d", &n);

    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    printf("ʳ������ ����� ������� ����� %d: %d\n", n, count);
    return 0;
}
