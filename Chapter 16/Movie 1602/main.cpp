#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int grade, total, count;
    double average = 0.0;
    count = 0;
    total = 0;
    string fileName;
    cout << "Enter a file name: ";
    getline(cin, fileName);
    ifstream inFile(fileName.c_str(), ios::in);
    if (!inFile) {
        cout << "File not found!" << endl;
        exit(1);
    }

    while(!inFile.eof()) {
        inFile >> grade;
        total += grade;
        ++count;
        cout << grade << endl;
    }
    average = total / count;
    cout << "The average grade is: " << average << endl;
    inFile.close();
    return 0;
}
