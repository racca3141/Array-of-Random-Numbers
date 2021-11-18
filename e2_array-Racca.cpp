// Emerson Racca
// 11/10/2021	
// Exam 2 - Array of Random Numbers

/*
Array practice

A. In the main program, declare an array that can hold 50 random real numbers between 5 and 6.  Populate this array programmatically in a for loop.

B. Create a regular c-type function that takes in this array and prints the results rounded to two decimal places and tabbed nicely without end lines.

C. Create another c-type function that takes in this array and returns the average of all the random values. Display the average in the main.

Turn in one source file (.cpp) with these two functions nicely separated.  Example output below.



5.30   5.01    5.09    5.36    5.15    5.17    5.99    5.45   5.12    5.00    5.01

5.38   5.53    5.57    5.60    5.61    5.17    5.66    5.45    5.35   5.06    5.61

5.78   5.80    5.52    5.30    5.88    5.73    5.96    5.93    5.54   5.14    5.46    5.24    5.86    5.21

Average: 5.47

*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

void printArray(double n[], int s);
double average(double n[], int s);

int main(void) {
	cout << fixed << setprecision(2);

	srand((unsigned int) time(0)); // unsigned to clear compiler warning.

	const int size = 50;
	double myNum[size];

	cout << "Array of Random Numbers\n\n";

	for (int i = 0; i < size; i++) {
		myNum[i] = 5.0 + 1.0 * rand()/RAND_MAX; // 5.0 <= value <= 6.0 . Check if inclusive allowed.
	}

	printArray(myNum, size);

	cout << endl << endl;

	cout << "Average: " << average(myNum, size) << endl << endl;

	return 0;
}


void printArray(double n[], int s) {
	int c = 0;
	for (int i = 0; i < s; i++) {
		// Display requirement.
		if (c >= 10) {
			c = 0;
			cout << "\n\n"; // to satify not using endln.
		}
		cout << n[i] << "\t";
		c++;
	}
}


double average(double n[], int s) {
	double temp = 0;
	for (int i = 0; i < s; i++)
		temp = temp + n[i];
	return (temp / s);
}