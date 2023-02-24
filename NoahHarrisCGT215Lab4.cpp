// NoahHarrisCGT215Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	int factorial;
	int iteration;
	int temp = 1;
		cout << "Please enter a positive integer: ";
		cin >> factorial;
	//checks to see if factorial is positive
		if (factorial < 0) {
			cout << "I said a positive integer, not a negative integer";
		}
		//checks to see if factorial is non-zero
		else if (factorial == 0) {
			cout << "0 doesn't really work for factorials";
		}
		else if (factorial > 0) {
			cout << factorial << "! = ";
			for (iteration = 1; iteration <= factorial; iteration++) {
				temp *= iteration;
				cout << iteration << "*";
			}
			cout << "=" << temp << endl;
		}
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
	int start;
	int difference;
	int elements;
	int instances;
	int sum = 0;

	cout << "Please enter the difference between the numbers in series: ";
	cin >> difference;
	cout << "Please enter the number the program will start from: ";
	cin >> start;
	cout << "Please enter the number of elements you want in the series: ";
	cin >> elements;
	if (elements <= 0) {
		cout << "A series isn't a series without at least one element. Please enter a positive integer.";
	}
	else if (elements > 0) {
		cout << start;
		for (instances = 1; instances < elements; ++instances) {
			sum = sum + start;
			start = (start + difference);
			cout << "+" << start;
		}
		sum = sum + start;
		cout << "=" << sum << endl;
	}
}
void geometric() {
	// I recommend writing your geometric series code here
	int start;
	int multiplier;
	int elements;
	int instances;
	int sum = 0;

	cout << "Please enter the number the program will start from: ";
	cin >> start;
	cout << "Please enter the number you want to multiply by: ";
	cin >> multiplier;
	cout << "Please enter the number of elements you want in the series: ";
	cin >> elements;
	if (elements <= 0) {
		cout << "A series isn't a series without at least one element. Please enter a positive integer.";
	}
	else if (elements > 0) {
		cout << start;
		for (instances = 1; instances < elements; ++instances) {
			sum = sum + start;
			start = start * multiplier;
			cout << "+" << start;
		}
		sum = sum + start;
		cout << "=" << sum << " ";
	}
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
