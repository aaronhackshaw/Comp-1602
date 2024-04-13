#include <iostream>
#include <fstream>

using namespace std;

const int DAYS_IN_YEAR = 365;
const int DAYS_IN_MONTH = 31;

int temperatures[DAYS_IN_YEAR]; // Use a plain array

int main() {
  // Read temperature data
  ifstream inputFile("temperature.txt");
  for (int i = 0; i < DAYS_IN_YEAR; ++i) {
    inputFile >> temperatures[i];
  }
  inputFile.close();

  // a) Count days with no temperature measurement
  int missing_days = 0;
  for (int i = 0; i < DAYS_IN_YEAR; ++i) {
    if (temperatures[i] == 0) {
      missing_days++;
    }
  }
  cout << "Number of days with missing temperature measurements: " << missing_days << endl;

  // b) Calculate average temperature for January and December
  int jan_total = 0, dec_total = 0;
  for (int i = 0; i < DAYS_IN_MONTH; ++i) {
    jan_total += temperatures[i];
    dec_total += temperatures[DAYS_IN_YEAR - 1 - i];
  }
  float jan_avg = static_cast<float>(jan_total) / DAYS_IN_MONTH;
  float dec_avg = static_cast<float>(dec_total) / DAYS_IN_MONTH;
  cout << "Average temperature in January: " << jan_avg << endl;
  cout << "Average temperature in December: " << dec_avg << endl;

  // c) Display temperature for each weekend
  cout << "Weekend Temperatures:" << endl;
  for (int i = 0; i < DAYS_IN_YEAR; i += 7) {
    if (i + 6 < DAYS_IN_YEAR) { // avoid out-of-bounds access
      cout << "- Saturday: " << temperatures[i] << endl;
      cout << "- Sunday: " << temperatures[i + 1] << endl;
    }
  }

  return 0;
}
