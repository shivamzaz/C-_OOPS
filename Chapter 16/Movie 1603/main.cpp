#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int grade;
    string fileName;
    char cont = 'y';
    cout << "Enter a file name: ";
    getline(cin, fileName);
    ofstream outFile(fileName.c_str(), ios::app);
    if (!outFile) {
        cout << "Could not open file." << endl;
        exit(1);
    }
    do {
        cout << "Enter a grade: ";
        cin >> grade;
        outFile << grade << endl;
        cout << "Enter another grade? (y/n) ";
        cin >> cont;
    } while (cont == 'y');
    outFile.close();
    return 0;
}
