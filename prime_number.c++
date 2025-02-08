/*Write a C++ program to take a positive integer n as input and -
1. Check whether n is a prime number
2. If it is not a prime number, find all its factors
3. If it is prime, find the next prime number greater than n
*/

#include <iostream>
using namespace std;

bool prime(int n) {
    if (n <= 1){
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int nxtPrime(int n) {
    int next ;
    next = n+1;
    while (!prime(next)) {
        next++;
    }
    return next;
}

void Factors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (prime(n)) {
        cout << n << " is a prime number" << endl;
        cout << "The next prime number is " << nxtPrime(n) << endl;
    } 
    
    else {
        cout << n << " is not a prime number" << endl;
        Factors(n);
    }

    return 0;
}
