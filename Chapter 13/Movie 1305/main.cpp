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

  void setDate(int m, int d, int y) {
      month = m;
      day = d;
      year = y;
  }

  void setMonth(int m) {
      if (m < 1 || m > 12)
         cout << "Bad month value";
      else
         month = m;
  }

  void setDay(int d) {
      day = d;
  }

  void setYear(int y) {
      year = y;
  }

  int getMonth() const {
      return month;
  }

  int getDay() const {
      return day;
  }

  int getYear() const {
      return year;
  }

  void displayDate() {
      cout << month << "/"
           << day << "/"
           << year;
  }

  void addDay(int n) {
      day += n;
  }

  void addMonth(int n) {
      month += n;
  }

  bool equals(Date dt) {
      if ((month == dt.month) &&
          (day == dt.day) &&
          (year == dt.year))
          return true;
      else
          return false;
  }

};



int main()
{
    Date today(3,20,2011);
    today.displayDate();
    cout << endl;
    today.addDay(5);
    today.displayDate();
    cout << endl;
    today.addMonth(2);
    today.displayDate();
    cout << endl;
    Date tomorrow = today;
    //tomorrow.addDay(1);
    if (tomorrow == today)
        cout << "The same day" << endl;
    else
        cout <<"A different day" << endl;
    return 0;
}
