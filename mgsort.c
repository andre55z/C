#include <stdio.h>

void merge(float arr[], int left, int mid, int right);
void mergeSort(float arr[], int left, int right);

int main(void) {
    int tms ;
    printf("\nOla! com quantos elementos vamos trabalhar?\n");
	scanf("%i", &tms);
	float num[tms];
    printf("\nInsira os elementos:\n");
    for (int i = 0; i < tms; i++) {
        scanf("%f", &num[i]);
    }
    mergeSort(num, 0, tms - 1);
    printf("Os elementos ordenados são:\n");
    for (int n = 0; n < tms; n++) {
        printf("%.2f ", num[n]);  
    }
    printf("\n");

    return 0;
}

void merge(float arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    float L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(float arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
