#include <iostream>

using namespace std;

int daysInMonth(int year, int month) {
  if (month < 1 || month > 12) {
    return -1;
  }

  int days = 31;  // Assume 31 days initially

  if (month == 4 || month == 6 || month == 9 || month == 11) {
    days = 30;  // Adjust for months with 30 days
  } else if (month == 2) {
    // Check for leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
      days = 29;  // Leap year, February has 29 days
    } else {
      days = 28;  // Not a leap year, February has 28 days
    }
  }

  return days;
}

int main() {
  int year = 2024;

  for (int month = 1; month <= 12; ++month) {
    int days = daysInMonth(year, month);
    if (days == -1) {
      cout << "Invalid month: " << month << endl;
    } else {
      cout << "Month " << month << ": " << days << " days" << endl;
    }
  }

  return 0;
}
