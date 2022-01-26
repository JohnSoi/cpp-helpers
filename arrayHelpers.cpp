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

