#include <iostream>

using namespace std;

void swap(int &number1, int &number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main()
{
    /*int num1, num2;
    cout << "Enter a value for number 1: ";
    cin >> num1;
    cout << "Enter a number for number 2: ";
    cin >> num2;
    swap(num1, num2);
    cout << "number 1: " << num1 << endl;
    cout << "number 2: " << num2 << endl;
    int number = 1;
    cout << &number << endl;*/
    int number = 1;
    int *ptrNumber = &number;
    cout << ptrNumber << endl;
    cout << *ptrNumber << endl;
    string name = "Jane";
    string *ptrName = &name;
    cout << ptrName << endl;
    cout << *ptrName << endl;
    return 0;
}
