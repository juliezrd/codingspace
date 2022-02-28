#include <iostream>

using namespace std;

int main()
{
    int classA, classB, classC, income;

    cout << "How many Class A tickets were sold? ";
    cin >> classA;

    cout << "How many Class B tickets were sold? ";
    cin >> classB;

    cout << "How many Class C tickets were sold? ";
    cin >> classC;
    income = classA*15 + classB*12 + classC*9;

    cout << "Total income is  " << income << endl;
    return 0;
}

