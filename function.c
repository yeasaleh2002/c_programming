
// ### 1) Cube of a Number

#include <stdio.h>

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = cube(number);

    printf("Cube of %d is %d\n", number, result);

    return 0;
}


//### 2) Circle Properties
//```c
#include <stdio.h>
#define PI 3.14159

// Function to calculate diameter, circumference, and area of a circle
void circleProperties(float radius, float *diameter, float *circumference, float *area) {
    *diameter = 2 * radius;
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
}

int main() {
    float radius, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circleProperties(radius, &diameter, &circumference, &area);

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
//```

//### 3) Maximum and Minimum
//```c
#include <stdio.h>

// Function to find maximum between two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find minimum between two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum: %d\n", max(num1, num2));
    printf("Minimum: %d\n", min(num1, num2));

    return 0;
}
//```

//### 4) Even or Odd
//```c
#include <stdio.h>

// Function to check whether a number is even or odd
void evenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    evenOdd(number);

    return 0;
}
//```

//### 5) Prime, Armstrong, or Perfect Number
//```c
#include <stdio.h>
#include <math.h>

// Function to check whether a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // Not prime if divisible
    }
    return 1; // Prime otherwise
}

// Function to check whether a number is Armstrong
int isArmstrong(int num) {
    int originalNum = num, result = 0, n = 0, remainder;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

// Function to check whether a number is perfect
int isPerfect(int num) {
    int sum = 1; // Start with 1 because every number is divisible by 1
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
//```

### 6) Prime Numbers in an Interval
```c
#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0; // Not prime if divisible
    }
    return 1; // Prime otherwise
}

// Function to print prime numbers in a given interval
void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printPrimes(start, end);

    return 0;
}
```

### 7) Strong Numbers in an Interval
```c
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to check whether a number is strong
int isStrong(int num) {
    int originalNum = num, sum = 0, digit;

    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

// Function to print strong numbers in a given interval
void printStrongNumbers(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printStrongNumbers(start

, end);

    return 0;
}
```

### 8) Armstrong Numbers in an Interval
```c
#include <stdio.h>
#include <math.h>

// Function to check whether a number is Armstrong
int isArmstrong(int num) {
    int originalNum = num, result = 0, n = 0, remainder;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

// Function to print Armstrong numbers in a given interval
void printArmstrongNumbers(int start, int end) {
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printArmstrongNumbers(start, end);

    return 0;
}
```

### 9) Perfect Numbers in an Interval
```c
#include <stdio.h>

// Function to check whether a number is perfect
int isPerfect(int num) {
    int sum = 1; // Start with 1 because every number is divisible by 1
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

// Function to print perfect numbers in a given interval
void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    printPerfectNumbers(start, end);

    return 0;
}
```

### 10) Power of a Number using Recursion
```c
#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
```

### 11) Print Natural Numbers using Recursion
```c
#include <stdio.h>

// Function to print natural numbers from 1 to n
void printNaturalNumbers(int n) {
    if (n > 0) {
        printNaturalNumbers(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are: ", n);
    printNaturalNumbers(n);
    printf("\n");

    return 0;
}
```

### 12) Print Even or Odd Numbers in a Range using Recursion
```c
#include <stdio.h>

// Function to print even or odd numbers in a given range
void printEvenOdd(int start, int end, int isEven) {
    if (start <= end) {
        if ((start % 2 == 0 && isEven) || (start % 2 != 0 && !isEven)) {
            printf("%d ", start);
        }
        printEvenOdd(start + 1, end, isEven);
    }
}

int main() {
    int start, end;
    char choice;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Enter 'e' for even or 'o' for odd: ");
    scanf(" %c", &choice);

    if (choice == 'e') {
        printf("Even numbers in the range are: ");
        printEvenOdd(start, end, 1);
    } else if (choice == 'o') {
        printf("Odd numbers in the range are: ");
        printEvenOdd(start, end, 0);
    } else {
        printf("Invalid choice.\n");
    }

    printf("\n");

    return 0;
}
```

### 13) Sum of Natural Numbers using Recursion
```c
#include <stdio.h>

// Function to calculate the sum of natural numbers from 1 to n
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sumOfNaturalNumbers(n));

    return 0;
}
```

### 14) Sum of Even or Odd Numbers in a Range using Recursion
```c
#include <stdio.h>

// Function to calculate the sum of even or odd numbers in a given range
int sumEvenOdd(int start, int end, int isEven) {
    if (start > end) {
        return 0;
    } else {
        if ((start % 2 == 0 && isEven) || (start % 2 != 0 && !isEven)) {
            return start + sumEvenOdd(start + 1, end, isEven);
        } else {
            return sumEvenOdd(start + 1, end, isEven);
        }
    }
}

int main() {
    int start, end;
    char choice;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Enter 'e' for even or 'o' for odd: ");
    scanf(" %c", &choice);

    if (choice == 'e') {
        printf("Sum of even numbers in the range is: %d\n", sumEvenOdd(start, end, 1));
    } else if (choice == 'o') {
        printf("Sum of odd numbers in the range is: %d\n", sumEvenOdd(start, end, 0));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}


### 15) Reverse of a Number using Recursion
```c
#include <stdio.h>

// Function to reverse a number using recursion
int reverseNumber(int num) {
    static int rev = 0;

    if (num == 0)
        return rev;

    rev = rev * 10 + num % 10;
    return reverseNumber(num / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = reverseNumber(number);

    printf("Reverse of %d is %d\n", number, result);

    return 0;
}
```

### 16) Check Palindrome using Recursion
```c
#include <stdio.h>

// Function to check if a number is palindrome using recursion
int isPalindrome(int num, int original) {
    if (num == 0)
        return original;

    original = original * 10 + num % 10;
    return isPalindrome(num / 10, original);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = isPalindrome(number, 0);

    if (result == number)
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
```

### 17) Sum of Digits using Recursion
```c
#include <stdio.h>

// Function to find the sum of digits of a number using recursion
int sumOfDigits(int num) {
    if (num == 0)
        return 0;

    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);

    printf("Sum of digits of %d is %d\n", number, result);

    return 0;
}
```

### 18) Factorial using Recursion
```c
#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = factorial(number);

    printf("Factorial of %d is %d\n", number, result);

    return 0;
}
```

### 19) Nth Fibonacci Term using Recursion
```c
#include <stdio.h>

// Function to calculate the nth Fibonacci term using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int term;

    printf("Enter the value of n: ");
    scanf("%d", &term);

    int result = fibonacci(term);

    printf("The %dth Fibonacci term is %d\n", term, result);

    return 0;
}
```

### 20) GCD of Two Numbers using Recursion
```c
#include <stdio.h>

// Function to calculate the GCD of two numbers using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
```

### 21) LCM of Two Numbers using Recursion
```c
#include <stdio.h>

// Function to calculate the LCM of two numbers using recursion
int lcm(int a, int b) {
    static int multiple = 1;

    if (multiple % a == 0 && multiple % b == 0)
        return multiple;

    multiple++;
    return lcm(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
```

### 22) Display Array Elements using Recursion
```c
#include <stdio.h>

// Function to display all array elements using recursion
void displayArray(int arr[], int size, int index) {
    if (index == size)
        return;

    printf("%d ", arr[index]);
    displayArray(arr, size, index + 1);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Array elements: ");
    displayArray(arr, size, 0);

    return 0;
}
```

### 23) Sum of Array Elements using Recursion
```c
#include <stdio.h>

// Function to find the sum of elements of an array using recursion
int sumOfArray(int arr[], int size) {
    if (size == 0)
        return 0;

    return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int result = sumOfArray(arr, size);

    printf("Sum of array elements: %d\n", result);

    return 0;
}
```

### 24) Maximum and Minimum in Array using Recursion
```c
#include <stdio.h>

// Function to find the maximum element in an array using recursion
int findMax(int arr[], int size) {
    if (size == 1)
        return arr[0];

    int maxInRest = findMax(arr, size - 1);

    return (arr[size - 1] > maxInRest) ? arr[size - 1] : maxInRest;
}

// Function to find the minimum element in an array using recursion
int findMin(int arr[], int size) {
    if (size == 1)
        return arr[0];

    int minInRest = findMin(arr, size - 1);

    return (arr[size - 1] < minInRest) ? arr[size - 1] : minInRest;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf

("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int maxElement = findMax(arr, size);
    int minElement = findMin(arr, size);

    printf("Maximum element: %d\n", maxElement);
    printf("Minimum element: %d\n", minElement);

    return 0;
}
```
