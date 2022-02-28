#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    int next_age;
    cout << "Please enter your age: " ;
    cin >> age;
    next_age = age + 1;
    cout << "Next year you will be " << next_age << " old.\n";
    cout << "Thank you for using my program!" << endl;
    return 0;

}

