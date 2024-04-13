#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time difference(Time time1, Time time2) {
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int differenceSeconds = abs(totalSeconds2 - totalSeconds1);

    Time differenceTime;
    differenceTime.hours = differenceSeconds / 3600;
    differenceSeconds %= 3600;
    differenceTime.minutes = differenceSeconds / 60;
    differenceSeconds %= 60;
    differenceTime.seconds = differenceSeconds;

    return differenceTime;
}

int main() {
    Time time1, time2, differenceTime;

    cout << "Enter the first time (hh:mm:ss): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    cout << "Enter the second time (hh:mm:ss): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    differenceTime = difference(time1, time2);

    cout << "The difference between the two times is: " << differenceTime.hours << ":" << differenceTime.minutes << ":" << differenceTime.seconds << endl;

    return 0;
}
