#include <iostream> // To use cin/cout
using namespace std;

int main()
{
	int inputInt, copyInt, numEvenDigits, digit, sum = 0;
	string inputStr;

	cout << "Even Digits Algorithm" << endl
		<< "By Forrest Moulin" << endl << endl
		<< "Please enter an integer that is larger than 10,000."
		<< endl << endl;

	cin >> inputInt;

	// Loop until the input is greater than 10,000
	while (inputInt <= 10000)
	{
		cout << endl << "You entered " << inputInt << ", which is not "
			<< "greater than 10,000." << endl
			<< "Please enter an integer that is larger than 10,000:"
			<< endl << endl;
		cin >> inputInt;
	}

	copyInt = inputInt; // In case using input after algorithm

	cout << endl << "Thank you! Your integer is "
		<< inputInt << "." << endl
		<< "Now, let's calculate the sum of any even digits "
		<< "within your integer..." << endl << endl;

	// Loop until input is reduced to 0
	while (inputInt != 0)
	{
		// Find the last digit in the integer
		// Remainder of the modulus of 10 will be the last digit
		digit = inputInt % 10;
		
		// If the digit is even
		if (digit % 2 == 0)
		{
			// Add that digit to the even sum
			sum += digit;
		}
		// Remove last digit by dividing the integer by 10
		inputInt /= 10;
	}

	cout << "The sum of the even digits " << endl
		<< "within the integer is "
		<< sum << "." << endl;
}

/*
* CONSOLE OUTPUT # 1
* Even Digits Algorithm
* By Forrest Moulin
*
* Please enter an integer that is larger than 10,000.
*
* 0
*
* You entered 0, which is not greater than 10,000.
* Please enter an integer that is larger than 10,000:
*
* 44440000
*
* Thank you! Your integer is 44440000.
* Now, let's calculate the sum of any even digits within your integer...
*
* The sum of the even digits
* within the integer is 16.
*
* CONSOLE OUTPUT # 2
* Even Digits Algorithm
* By Forrest Moulin
* 
* Please enter an integer that is larger than 10,000.
* 
* 13579
* 
* Thank you! Your integer is 13579.
* Now, let's calculate the sum of any even digits within your integer...
* 
* The sum of the even digits
* within the integer is 0.
*/
