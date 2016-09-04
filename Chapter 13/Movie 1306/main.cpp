#include <iostream>

using namespace std;

class Time
{
    private:
    int hours, minutes, seconds;

    public:
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time(int h, int m) {
        hours = h;
        minutes = m;
        seconds = 0;
    }

    Time(int m) {
        hours = 0;
        minutes = m;
        seconds = 0;
    }

    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void setHours(int h) {
        if (hours <= 23)
            hours = h;
        else
            hours = 0;
    }

    void setMinutes(int m) {
        if (minutes <= 59)
            minutes = m;
        else
            minutes = 0;
    }

    void setSeconds(int s) {
        if (seconds <= 59)
            seconds = s;
        else
            seconds = 0;
    }

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    void showTime() {
        if (seconds > 0)
            cout << hours << ":"
                << minutes << ":"
                << seconds;
        else
            cout << hours << ":"
                << minutes;
    }

    void increment(int n) {
        minutes += n;
        if (minutes > 59) {
            ++hours;
            minutes -= 60;
        }
    }

    void operator+(int n) {
        minutes += n;
    }

    Time &operator+=(int n) {
        minutes += n;
        return *this;
    }
};

istream &operator>>(istream &input, Time &t) {
    int hours, minutes, seconds;
    char colon1, colon2;
    input >> hours >> colon1 >> minutes >> colon2 >> seconds;
    t = Time(hours, minutes, seconds);
    return input;
}

ostream &operator<<(ostream &output, const Time &t) {
    if (t.getSeconds() > 0)
        return output << t.getHours() << ":"
                      << t.getMinutes() << ":"
                      << t.getSeconds();
    else
        return output << t.getHours() << ":"
                      << t.getMinutes();
}

bool operator==(const Time &t1, const Time &t2) {
    return ((t1.getHours() == t2.getHours()) &&
        (t1.getMinutes() == t2.getMinutes()) &&
        (t1.getSeconds() == t2.getSeconds()));
}


int main()
{
    cout << "Enter a time (h:m:s): ";
    Time theTime;
    cin >> theTime;
    cout << theTime;
    cout << endl;
    Time newTime;
    cout << "Enter a new time (h:m:s): ";
    cin >> newTime;
    cout << newTime << endl;
    if (newTime == theTime)
        cout << "Same time" << endl;
    else
        cout << "Different time" << endl;
    return 0;
}
