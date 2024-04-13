#include <iostream>

using namespace std;

double toCelsius(int fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
  // Define the starting and ending temperatures
  int start_temp = -40;
  int end_temp = 220;
  int increment = 10;

  // Print the Fahrenheit-to-Celsius table header
  cout << "Fahrenheit\tCelsius" << endl;

  // Loop through the temperature range and print each conversion
  for (int temp = start_temp; temp <= end_temp; temp += increment) {
    double celsius = toCelsius(temp);
    cout << temp << "\t\t" << celsius << endl;
  }

  return 0;
}
