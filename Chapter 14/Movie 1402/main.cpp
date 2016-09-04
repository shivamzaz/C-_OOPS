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

  bool operator==(const Date &d) {
      return ((month == d.month) &&
              (day == d.day) &&
              (year == d.year));
  }

}; return input;

//non-member functions

istream &operator>>(istream &input, Date &d) {
    int month, day, year;
    char slash1, slash2;
    input >> month >> slash1 >> day
        >> slash2 >> year;
    d = Date(month, day, year);
    return input;
}

ostream &operator<<(ostream &output, const Date &d) {
    return output << d.getMonth() << "/"
                << d.getDay() << "/"
                << d.getYear();
}

int main()
{
    Date today;
    cout << "Enter a date (mm/dd/yyyy): ";
    cin >> today;
    cout << "Today is: ";
    cout << today << endl;
    return 0;
}
