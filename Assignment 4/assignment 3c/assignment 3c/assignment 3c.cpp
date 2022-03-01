#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream Numbs;
	int num;
	string filename;
	int numbercount = 0;
	float sum = 0.0f;
	float avg;

	cout << "enter the name of the file" << endl;
	getline(cin, filename);

	Numbs.open("numbers.txt");

	if (Numbs.good())
	{
		while (Numbs >> num)
		{
			numbercount++;
			sum = sum + num;

		}
		avg = sum / numbercount;

		cout << "numbers in file  " << numbercount << endl;
		cout << "sum of number    " << sum << endl;
		cout << "average of numbers is    " << avg << endl;
	}
	else
		cout << "file not found\n";
	Numbs.close();

	return 0;
}

