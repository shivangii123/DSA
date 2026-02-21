#include <iostream>
using namespace std;

int MatrixSearch(int** arr, int T, int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == T) {
                return i * n + j;  // encode position
            }
        }
    }
    return -1; // not found
}

int main() {
    int m, n, T;

    cout << "Enter m and n: ";
    cin >> m >> n;

    cout << "Enter element to search: ";
    cin >> T;

    int** arr = new int*[m];
    for(int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = MatrixSearch(arr, T, m, n);

    if(ans == -1) {
        cout << "Element not found !!";
    } else {
        int row = ans / n;
        int col = ans % n;
        cout << "Element found at index: (" << row << ", " << col << ")";
    }

    for(int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}