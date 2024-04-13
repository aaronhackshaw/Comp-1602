#include <iostream>
#include <fstream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool isValidDate(Date date) {
    int maxDays = 31;
    if (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11) {
        maxDays = 30;
    } else if (date.month == 2) {
        maxDays = 28 + isLeapYear(date.year);
    }
    return date.day > 0 && date.day <= maxDays && date.month > 0 && date.month <= 12;
}

void displayDate(Date date) {
    cout << date.day << "/" << date.month << "/" << date.year << " ";
}

int main() {
    ifstream inputFile("dates.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    Date date;
    while (inputFile >> date.day >> date.month >> date.year) {
        if (date.day == 0) {
            break;
        }

        cout << "Checking date: ";
        displayDate(date);

        if (isValidDate(date)) {
            cout << "is a valid date." << endl;
        } else {
            cout << "is not a valid date." << endl;
        }
    }

    inputFile.close();
    return 0;
}
