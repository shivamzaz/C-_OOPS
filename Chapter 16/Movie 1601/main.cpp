#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile("c:\\data\\grades.txt", ios::out);
    int grade;
    for(int i = 1; i < 6; ++i) {
        cout << "Enter a grade: ";
        cin >> grade;
        outFile << grade << endl;
    }
    outFile.close();
    cout << "All finished. " << endl;
    return 0;
}
