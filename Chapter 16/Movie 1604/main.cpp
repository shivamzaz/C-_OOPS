#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char c;
    ofstream outFile("c:\\data\\chars.txt", ios::out);
    while (cin >> c) {
        outFile.put(c);
    }
    outFile.close();
    return 0;
}
