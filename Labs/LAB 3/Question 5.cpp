#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGuessingGame() {

  srand(time(0));

  int answer = rand() % 1000 + 1;
  int guesses = 0;

  while (guesses < 10) {
    int guess;
    cout << "Guess a number between 1 and 1000 (or enter 0 to see the answer): ";
    cin >> guess;

    if (guess == 0) {
      cout << "The answer was: " << answer << endl;
      return;
    }

    guesses++;

    if (guess == answer) {
      cout << " You guessed the number in " << guesses << " tries." << endl;
      return;
    } else if (guess > answer) {
      cout << "Lower" << endl;
    } else {
      cout << "Higher" << endl;
    }
  }

  cout << "you ran out of guesses. The answer was: " << answer << endl;
}

int main() {
  playGuessingGame();
  return 0;
}
