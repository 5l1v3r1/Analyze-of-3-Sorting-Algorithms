#include "sorting.h"

int main() {
    /* code */
    const int size = 500000;
    int arr[size];
    int arr2[size];
    int arr3[size];
    clock_t begin, end;
    double time;

    begin = clock();
    for (int i = 1; i <= size; i++){
        arr[i - 1] = i;
        arr2[i - 1] = arr[i - 1];
        arr3[i - 1] = arr[i - 1];
    }
    end = clock();
    time = double(end - begin) / (double)CLOCKS_PER_SEC;
    cout << "***** The time for constructing the arrays: " << time << endl;


    cout << "***** Selection Sort *****" << endl;
    //display(arr, size);
    begin = clock();
    SelectionSort(arr, size);
    end = clock();
    time = double(end - begin) / (double)CLOCKS_PER_SEC;
    cout << "Selection Sort time: " << time << endl;
    //display(arr, size);
    cout << "***** End Selection Sort *****" << endl;


    cout << "***** Merge Sort *****" << endl;
    //display(arr2, size);
    begin = clock();
    MergeSort(arr2, size);
    end = clock();
    time = double(end - begin) / (double)CLOCKS_PER_SEC;
    cout << "Merge Sort time: " << time << endl;
    //display(arr2, size);
    cout << "***** End Merge Sort *****" << endl;


    cout << "***** Quick Sort *****" << endl;
    //display(arr3, size);
    begin = clock();
    QuickSort(arr3, size);
    end = clock();
    time = double(end - begin) / (double)CLOCKS_PER_SEC;
    cout << "Quick Sort time:" << time << endl;
    //display(arr3, size);
    cout << "***** End Quick Sort *****" << endl;

    return 0;
}
