/*Write a program that performs the following operations on an array -
1. Accept an integer array from the user (size determined at runtime)
2. Reverse the array and display it
3. Find and display the second largest and second smallest elements in the array
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Entered Array:";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Array in reversed form: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int temp;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int small = arr[0], large = arr[n - 1], scnd_small = -1, scnd_large = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > small) {
            scnd_small = arr[i];
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < large) {
            scnd_large = arr[i];
            break;
        }
    }
    
    cout << "Second smallest element: " << scnd_small << endl;
    cout << "Second largest element: " << scnd_large << endl;
    
    return 0;
}
