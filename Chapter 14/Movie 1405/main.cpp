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

  void operator+(int n) {
      day += n;
  }

  void operator-(int n) {
      day -= n;
  }

  Date &operator+=(int n) {
      day += n;
      return *this;
  }

  Date &operator=(const Date &d) {
      month = d.month;
      day = d.day;
      year = d.year;
      return *this;
  }

  Date &operator++() {
      ++day;
      return *this;
  }

  Date &operator--() {
      --day;
      return *this;
  }

  Date &operator++(int) {
      Date d = *this;
      ++*this;
      return d;
  }

  Date &operator--(int) {
      Date d = *this;
      --*this;
      return d;
  }

};

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

bool operator>(const Date &d1, const Date &d2) {
    if (d1.getYear() > d2.getYear())
        return true;
    else if ((d1.getYear() == d2.getYear()) &&
             (d1.getMonth() > d2.getMonth()))
        return true;
    else if ((d1.getYear() == d2.getYear()) &&
             (d1.getMonth() == d2.getMonth()) &&
             (d1.getDay() > d2.getDay()))
        return true;
    else
        return false;
}

bool operator>=(const Date &d1, const Date &d2) {
    if (d1.getYear() > d2.getYear())
        return true;
    else if ((d1.getYear() == d2.getYear()) &&
             (d1.getMonth() > d2.getMonth()))
        return true;
    else if ((d1.getYear() == d2.getYear()) &&
             (d1.getMonth() == d2.getMonth()) &&
             (d1.getDay() > d2.getDay()))
        return true;
    else if ((d1.getYear() == d2.getYear()) &&
             (d1.getMonth() == d2.getMonth()) &&
             (d1.getDay() == d2.getDay()))
        return true;
    else
        return false;
}

int main()
{
    Date today(3,23,2011);
    cout << today << endl;
    today++;
    cout << today << endl;
    today++;
    cout << today << endl;
    today--;
    cout << today << endl;


    return 0;
}
