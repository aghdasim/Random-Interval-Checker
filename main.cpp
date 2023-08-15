#include <iostream>
using namespace std;


int main() {
    int num1 = 0 , num2 = 0 ,max = 0, min = 0;
    int i=0, j=0 , k=0;
    int howmany=0;
    int manyOdd=0 , manyEven=0;


    bool equal = false; ///  check the two random numbers are equal

    srand(time(0));

    /// providing two random numbers between 0-100
    num1 = rand() % 100 + 0;
    num2 = rand() % 100 + 0;


    ///finding the biggest and smallest number

    if (num1 > num2) {
        max = num1;
        min = num2;
    }
    else if (num2 > num1) {
        max = num2;
        min = num1;
    }

    else {
        cout << " ========= Two numbers are equal ========= ";
        equal = true;
    }
    cout << min << "  -  " << max <<endl;

    ///if two random numbers are not equal, then To calculate the number of integers in the interval between two random numbers
    if (!equal) {
        for (i = min; i <= max; i++) {
            howmany ++;
        }

        for (j = min; j <= max; j++) { ///calculate how many Even numbers exist in the interval
            if (j % 2 == 0) {
                manyEven++;
            }
        }

        for (k = min; k <= max; k++) { ///calculate how many Odd numbers exist in the interval
            if ( k % 2 != 0) {
                manyOdd++;
            }
        }

        cout << "even(s) : " << manyEven << "   odd(s)  : " <<manyOdd<<endl;




    /// if quantity of Even numbers is more than its Odd numbers, the output is EVEN
        if (manyEven > manyOdd) {
            cout << "\n EVEN";
        }

    /// if quantity of Odd numbers is more than its Odd numbers, the output is ODD
        if (manyEven < manyOdd) {
            cout << "\n ODD";
        }


        int averageOE = (num1 + num2) / 2;

    /// if quantity of odd numbers and even numbers is equal, calculate the average of the two random numbers
        if (manyEven == manyOdd) { //if Evens=Odds , output is the  average of the two random numbers
            cout << manyOdd << "    " << "Average   " << averageOE << endl;
        }
    }



    return 0;
}
