#include <iostream>
#include <vector>
#include <algorithm>

void input(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter the value of index[" << i << "]: ";
        std::cin >> arr[i];
    }
}

std::vector<int> intersection(const int arr[], const int brr[], int size) {
    std::vector<int> inter;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == brr[j]) {
                inter.push_back(arr[i]);
                break; // Found a match, move to the next element in `arr`
            }
        }
    }

    return inter;
}

void output(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size;
    std::cout << "Enter the size of arrays: ";
    std::cin >> size;

    int* a = new int[size];
    int* b = new int[size];

    std::cout << "Enter values for Matrix A:\n";
    input(a, size);

    std::cout << "Enter values for Matrix B:\n";
    input(b, size);

    std::vector<int> intersect = intersection(a, b, size);

    std::cout << "Intersection of Matrix A and Matrix B:\n";
    output(intersect.data(), intersect.size());

    std::cout << "\n\nMatrix A:\n";
    output(a, size);

    std::cout << "\n\nMatrix B:\n";
    output(b, size);

    delete[] a;
    delete[] b;

    return 0;
}
