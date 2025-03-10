#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int mid = s + (e - s) / 2;
    int leftLen = mid - s + 1;
    int rightLen = e - mid;

    int left[leftLen], right[rightLen];

    int k = s;
    for (int i = 0; i < leftLen; i++) {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < rightLen; i++) {
        right[i] = arr[k];
        k++;
    }

    int i = 0, j = 0;
    k = s;
    while (i < leftLen && j < rightLen) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftLen) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightLen) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int s, int e) {
    if (s >= e) return;

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
