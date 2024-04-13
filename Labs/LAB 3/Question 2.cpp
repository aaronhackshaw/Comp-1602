#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

  int randNum, one,two,three,four,five,six,seven,eight = 0;

  srand(time(0));

  for (int i = 0; i <= 1800; i++) {

    randNum = 1 + rand() % 14;

    if (randNum <= 8) {
      two++;
      four++;
      six++;

    } else if (randNum <= 12) {
      one++;
      three++;
      five++;
    } else {
      seven++;
      eight++;
    }
  }

  cout << "It was
  return 0;
}
