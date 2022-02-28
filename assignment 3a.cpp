#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i <= 127; i++)
	{
		cout << (char)i << " ";
		if (i % 16 == 0)
			cout << endl;
	}
	return 0;
}
