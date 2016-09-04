#include <iostream>

using namespace std;

int main()
{
    const int size = 4;
    int numbers[size] = {5,10,15,20};
    /*for(int i = 0; i < size; ++i)
        cout << numbers[i] << " ";
    int *pnumbers = &numbers[0];
    for(int i = 0; i < size; ++i)
        cout << *(pnumbers+i) << " ";*/
    for(int i = 0; i < size; ++i)
        cout << *(numbers + i) << " ";
    return 0;
}
