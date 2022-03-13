#include <iostream>
using namespace std;

void bubbleSort(int a[], int size) {        //сортировка пузырьком
    int buf;
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                buf = a[j - 1];
                a[j - 1] = a[j];
                a[j] = buf;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {    //заполнение массива
        arr[i] = rand() % 100;
        cout << arr[i] << "\t";
    }
    cout << endl << endl;
    
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {    //вывод массива после сортировки
        cout << arr[i] << "\t";
    }

}
