#include <iostream>

using namespace std;

int main()
{
    int gas, miles, mpg;

    cout << "How many gallons can your car hold? ";
    cin >> gas;

    cout << "How many miles can you drive on a full tank? ";
    cin >> miles;
    mpg = miles/gas;

    cout << "MPG is " << mpg << endl;
    return 0;
}
