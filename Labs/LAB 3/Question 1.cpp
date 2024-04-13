#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

  int randNum, sunny, rainy, overcast = 0;

  srand(time(0));

  for (int i = 0; i <= 152; i++) {

    randNum = 1 + rand() % 11;

    if (randNum <= 6) {
      sunny++;
    } else if (randNum <= 8) {
      overcast++;
    } else {
      rainy++;
    }
  }

  cout << "It was sunny " << sunny << " times from the first day of August to the last day of September." << endl;
  cout << "It was rainy " << rainy << " times from the first day of August to the last day of September." << endl;
  cout << "It was overcast " << overcast << " times from the first day of August to the last day of September." << endl;

  return 0;
}
