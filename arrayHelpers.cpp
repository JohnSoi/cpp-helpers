#include "arrayHelpers.h"

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

inline int getRandomDigit(int delimiter, int minDigit) {
    return rand() % delimiter + minDigit;
}

void inputDoubleArr(int arr[][MAX_SIZE], int column, int row) {
    for (int i = 0; i < column; i++) {
        inputArr(arr[i], row);
    }
}

void printDoubleArr(int arr[][MAX_SIZE], int column, int row) {
    for (int i = 0; i < column; i++) {
        printArr(arr[i], row);
    }
}

void printArr(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    cout << endl;
}

void inputArr(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = getRandomDigit();
    }
}

void getMinMaxValueAndIndexInArr(int arr[], int size) {
    int maxValue = 0;
    int minValue = 0;
    int maxIndex = 0;
    int minIndex = 0;
    maxValue = arr[0];
    minValue = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        } else if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    cout << "Минимальное число с индексом " << minIndex
         << " и значением " << minValue << endl;
    cout << "Максимальное число с индексом " << maxIndex
         << " и значением " << maxValue << endl;
}

void reverseArr(int arr[], int revArr[], int size) {
    for (int i = 0; i < size; i++) {
        revArr[size - i - 1] = arr[i];
    }
}


int linearDoubleSearch(int arr[][MAX_SIZE], int column, int row, int searchValue) {
    for (int i = 0; i < column; i++) {
        int searchInnerArr = linearSearch(arr[i], row, searchValue);
        if (searchInnerArr) {
            return searchInnerArr;
        }
    }

    return NULL;
}

int linearSearch(int arr[], int size, int searchValue) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            return arr[i];
        }
    }

    return NULL;
}

void selectionSort(int arr[], int size) {
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        j = i;
        for (int k = i; k < size; k++) {
            if (arr[j] > arr[k]) {
                j = k;
            }
        }
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void bubbleSort(int arr[], int size) {
    int tmp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = (size - 1); j >= (i + 1); j--) {
            if (arr[j] < arr[j - 1]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }
}

void insertSort(int arr[], int size) {
    int key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }
}


void _merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR) {
    int i = 0;
    int j = 0;
    while (i < lenL || j < lenR) {
        if (i < lenL & j < lenR) {
            if (L[i] <= R[j]) {
                merged[i + j] = L[i];
                i++;
            } else {
                merged[i + j] = R[j];
                j++;
            }
        } else if (i < lenL) {
            merged[i + j] = L[i];
            i++;
        } else if (j < lenR) {
            merged[i + j] = R[j];
            j++;
        }
    }
}


void mergeSort(int arr[], int size) {
    if (size > 1) {
        int middle = size / 2;
        int rem = size - middle;
        int *L = new int[middle];
        int *R = new int[rem];
        for (int i = 0; i < size; i++) {
            if (i < middle) {
                L[i] = arr[i];
            } else {
                R[i - middle] = arr[i];
            }
        }
        mergeSort(L, middle);
        mergeSort(R, rem);
        _merge(arr, size, L, middle, R, rem);
    }
}

bool inArray(int arr[], int size, int neededElement) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == neededElement) {
            return true;
        }
    }

    return false;
}
