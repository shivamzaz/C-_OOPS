#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int num = 111;
    do {
        sum += num;
        ++num;
    } while (num < 11);
    cout << sum << endl;
    return 0;
}
