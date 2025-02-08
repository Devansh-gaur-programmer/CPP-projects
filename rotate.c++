//Rotate a square matrix 90 degrees clockwise.

#include <iostream>
using namespace std;

void matrix(int n, int** arr) {
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Entered Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void rotatematrix(int n, int** arr) {
    int** rotated = new int*[n];
    for (int i = 0; i < n; i++){
        rotated[i] = new int[n];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            rotated[j][n - 1 - i] = arr[i][j];
        }
    }
    
    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cout << rotated[i][j] << "\t";
        }
        cout << endl;
    }
    

}

int main() {
    int n;
    cout << "Enter the matrix size: ";
    cin >> n;
    
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];
    
    matrix(n, arr);
    rotatematrix(n, arr);
    return 0;
}