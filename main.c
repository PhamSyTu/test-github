#include<stdio.h>

void sapXepTangDan(int n, float arr[100]) {
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void xuatMang(float arr[100], int n) {
    for (size_t i = 0; i < n; i++)
    {
        printf(" %0.4f ", arr[i]);
    }
}
void nhapMang(float arr[100], int n) {
    printf("Nhap cac gia tri cua mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf_s("%f", &arr[i]);
    }
}

void dem(float arr[100], int n) {
    float a = arr[0];
    int count = 1;
    for (size_t i = 1; i < n; i++)
    {
        if (arr[i] == a) {
            count++;
        }
        else {
            printf("%0.4f  %d\n", a, count);
            a = arr[i];
            count = 1;
        }
    }
    printf("%0.4f  %d\n", a, count);
}
int main() {
    int n;
    printf("Nhap gia tri n: n = "); scanf_s("%d", &n);
    float arr[100];
    nhapMang(arr, n);
    sapXepTangDan(n, arr);
    dem(arr, n);
    return 0;
}