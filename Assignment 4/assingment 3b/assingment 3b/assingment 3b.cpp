#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    const int MIN = 0;
    const int MAX = 999;
    int choice;
    int n1, n2;
    int sum, sub, multp;
    float divd, userResult;
    int result;

    do
    {
        unsigned seed = time(0);
        srand(seed);
        n1 = MIN + rand() % MAX;
        n2 = MIN + rand() % MAX;

        cout << " Math Tutor Calculator" << endl;
        cout << " 1. Addition Questions" << endl;
        cout << " 2. Subtraction Questions" << endl;
        cout << " 3. Multiplication Questions" << endl;
        cout << " 4. Division Questions" << endl;
        cout << " 5. Quit" << endl << endl;
        cout << " Enter your choice (1-5):" << endl;


        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            switch (choice)
            {
            case 1:
                cout << "Please enter your result.\n";
                cout << " " << n1 << endl;
                cout << "+";
                cout << n2 << endl;
                cout << "-----\n";

                cin >> result;
                sum = n1 + n2;

                if (result == sum)
                    cout << "Yes! You have the right answer.\n";
                else
                {
                    cout << "Oops! Please try again.\n";
                    cout << sum << endl;
                }

                break;

            case 2:

                cout << "Please enter your result.\n";
                cout << " " << n1 << endl;
                cout << "-";
                cout << n2 << endl;
                cout << "-----\n";

                cin >> result;
                sub = n1 - n2;

                if (result == sub)
                    cout << "Yes! You have the right answer.\n";
                else
                {
                    cout << "Oops! Please try again.\n";
                    cout << sub << endl;
                }
                break;

            case 3:

                cout << "Please enter your result.\n";
                cout << " " << n1 << endl;
                cout << "*";
                cout << n2 << endl;
                cout << "-----\n";

                cin >> result;
                multp = n1 * n2;

                if (result == multp)
                    cout << "Yes! You have the right answer.\n";
                else
                {
                    cout << "Oops! Please try again.\n";
                    cout << multp << endl;
                }
                break;

            case 4:

                cout << "Please enter your result.\n";
                cout << " " << n1 << endl;
                cout << "/";
                cout << n2 << endl;
                cout << "-----\n";

                cin >> userResult;
                divd = n1 / n2;

                if (fabs(userResult - divd) < 0.001)
                    cout << "Yes! You have the right answer.\n";
                else
                {
                    cout << "Oops! Please try again.\n";
                    cout << divd << endl;
                }
                break;

            case 5:
                cout << "Goodbye!\n";
                break;

            }

        }
        else
        {
            cout << "please select a valid choice from 1-5";
        }
    }
    while (choice != 5);
    
   return 0;

}


