#include <iostream>

using namespace std;

int main()
{
    char letterGrade;
    cout << "Enter your letter grade: ";
    cin >> letterGrade;
    switch(letterGrade)
    {
        case 'A':
            cout << "An A is in the range of 90 "
                  <<  "to 100" << endl;
            break;
        case 'B':
            cout << "A B is in the range of "
                 <<   "80 to 89";
            break;
        case 'C':
            cout << "A C is in the range of "
                << "70 to 79";
            break;
        case 'D':
            cout << "A D is in the range of "
                 << "60 to 69";
            break;
        case 'F':
            cout << "A F is in the range of "
                 << "0 to 59";
            break;
        default:
            cout << "Don't recognize input.";
    }
    return 0;
}
