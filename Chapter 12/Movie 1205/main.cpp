#include <iostream>

using namespace std;

int main()
{
    /*cout << "the size of an integer is " << sizeof(int) << endl;
    cout << "the size of a double is " << sizeof(double) << endl;
    cout << "the size of a string is " << sizeof(string) << endl;
    int num = 1234;
    cout << "the size of num is " << sizeof(num) << endl;
    int *pnum = &num;
    cout << "the size of the pointer pnum is "
         << sizeof(pnum) << endl;
    cout << "the size of the value pointed at "
         << "by pnum is " << sizeof(*pnum) << endl;*/
    int numbers[] = {5,10,15,20,25};
    int size = sizeof(numbers) / sizeof(*numbers);
    cout << sizeof(numbers) << endl;
    cout << sizeof(*numbers) << endl;
    cout << "The number of elements in number is "
         << size << endl;
    return 0;
}
