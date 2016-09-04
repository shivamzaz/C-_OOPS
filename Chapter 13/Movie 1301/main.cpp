#include <iostream>

using namespace std;

class Name {
    private:
    string first, middle, last;

    public:
    Name(string fname, string mname, string lname) {
        first = fname;
        middle = mname;
        last = lname;
    }

    string toString() {
        return first + " " + middle + " " +last;
    }
};

int main()
{
    Name myName("Michael", "Mason", "McMillan");
    cout << myName.toString() << endl;
    return 0;
}
