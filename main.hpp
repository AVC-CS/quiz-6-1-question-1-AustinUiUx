#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
void getTwoValues(int& begin, int& end);
int getNextPrime(int num);
int getPrevPrime(int num);


void getTwoValues(int& begin, int& end) {
    cout << "Enter two integer values (begin end): ";
    cin >> begin >> end;
}


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}


int getNextPrime(int num) {
    while (true) {
        ++num;
        if (isPrime(num)) return num;
    }
}


int getPrevPrime(int num) {
    while (true) {
        --num;
        if (isPrime(num)) return num;
    }
}