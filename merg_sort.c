#include<stdio.h>

void merge(int arr[], int s, int mid, int e){
    int n1 = mid - s +1;
    int n2 = e - mid;

    int l[n1], r[n2];

    for (int i = 0; i< n1; i++) {
        l[i] = arr[s + i];
    }

    for (int j = 0; j < n2; j++) {
        r[j]  = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = s;

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            arr[k] = l[i];
            i++;
        }
        else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k++] = l[i++];
    }
    
    while (j < n2) {
        arr[k++] = r[j++];
    }
}

void mergeSort(int arr[], int s , int e) {
    if (s < e) {
        int mid = (s + e)/2;

        mergeSort(arr, s, mid);

        mergeSort(arr, mid + 1, e);

        merge(arr, s, mid , e);
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[5] = {1, 6, 8, 4, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size-1);

    displayArray(arr, size);

}