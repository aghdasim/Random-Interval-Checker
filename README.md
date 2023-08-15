# Random Interval Checker

This C++ program generates two random numbers within a specified range and determines whether the interval formed by these numbers is even or odd. It calculates the number of even and odd numbers in the interval and provides appropriate output based on the calculations.

## Introduction

Random values play a crucial role in various applications, including testing algorithm performance and implementing random algorithms. This program generates two random numbers between A and B, where A and B are provided by the user. It then creates an interval with a smaller random number as the lower bound and a larger random number as the upper bound. The program determines whether the interval is even or odd based on the count of even and odd numbers within the interval.

## Getting Started

To run the program, follow these steps:

1. Compile the source code using a C++ compiler (e.g., g++).
2. Execute the compiled executable.
3. Enter two integer values A and B, separated by a space, to define the range.

## Usage

Upon running the program and providing the required input, the following output will be displayed:

1. The generated interval (lower bound - upper bound).
2. Whether the interval is even or odd.
3. If the number of even and odd numbers is equal, the average of the two random numbers.

## Sample Inputs and Outputs

**Input :**
```
120 100
```
**Output :**
```
100 - 120
EVEN
```



## Code Overview

The program is implemented in C++ and performs the following steps:

1. Generates two random numbers between A and B.
2. Determines the smaller and larger numbers among the generated random numbers.
3. Calculates the count of even and odd numbers within the interval.
4. Compares the counts to determine whether the interval is even, odd, or has an equal count of even and odd numbers.
5. Prints the interval, even/odd status, and average if applicable.

## Code Explanation

The C++ source code is provided in the `main.cpp` file. It uses basic arithmetic and control structures to achieve the desired functionality. The code snippet provided in your initial message appears to be the implementation of the program. It includes the necessary logic to generate random numbers, determine the interval boundaries, count even and odd numbers, and display the appropriate outputs.

## Conclusion

This C++ program demonstrates the generation of random intervals and the identification of even or odd characteristics within those intervals. By utilizing random values and basic programming concepts, the program provides insights into the distribution of even and odd numbers within a given range.

Feel free to modify and enhance the code as needed to suit your preferences and requirements.