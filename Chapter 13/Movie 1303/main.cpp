#include <iostream>

using namespace std;

class Date
{
  private:
  int month, day, year;

  public:
  // class constructors can be overloaded
  Date(int m, int d, int y) {
      month = m;
      day = d;
      year = y;
  }

  Date(int m, int y) {
      month = m;
      day = 0;
      year = y;
  }
  // default constructor
  Date() {
      month = 0;
      day = 0;
      year = 0;
  }
};

int main()
{
    Date today(3,20,2011);
    Date yesterDay(3,2011);
    Date tomorrow;


    return 0;
}
