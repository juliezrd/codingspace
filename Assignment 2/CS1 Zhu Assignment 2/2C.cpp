#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function
#include <iomanip>
using namespace std;

int main()
{
	// Constants
	const int MIN = 50;
	const int MAX = 450;

	// Get the system time.
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);

	// Generate two random numbers.
	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;

	// Display the addition problem.
	cout << setw(5) << num1 << endl
         << "+" << setw(4) << num2 << endl
         << "-----\n\n";

	// Wait for the user to press the Enter key.
	cout << "Press Enter to see the answer . . .\n";
	cin.get();

	// Calculate the sum.
	int sum = num1 + num2;

	// Display the answer to the addition problem.
	cout << setw(5) << num1 << endl
         << "+" << setw(4) << num2 << endl
         << "-----\n"
         << setw(5) << sum << endl << endl;
	return 0;
}

