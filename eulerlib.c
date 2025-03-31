#include <math.h>

// To find the maximum of two numbers
int max(int a, int b)
{
    if ( a > b ) {
        return a;
    }
    else {
        return b;
    }
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n == 1) {
        return 0; 
    }
    else if (n < 4) {
        return 1; 
    }
    else if (n % 2 == 0) {
        return 0; 
    }
    else if (n < 9) {
        return 1; 
    }
    else if (n % 3 == 0) {
        return 0; 
    }
    int r = (int)floor(sqrt(n));
    int f = 5;
    while (f <= r) {
        if (n % f == 0) {
            return 0; 
        }
        if (n % (f + 2) == 0) {
            return 0; 
        }
        f = f + 6;
    }
    return 1; 
}

// Function to generate the nth prime number
int generateNthPrime(int n) {
    int count = 0;  
    int num = 1;    

    while (count < n) {
        num++; 
        if (isPrime(num)) {
            count++; 
        }
    }

    return num;
}

// Function to find summation
int sumNumber = 0;
int summation(int n) {
    sumNumber += n;
    return sumNumber;
}

// Function to find product
int mulNumber = 1;
int product(int n) {
    mulNumber *= n;
    return mulNumber;
}