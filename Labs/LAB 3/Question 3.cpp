#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  const int probabilities[8] = {5, 3, 12, 5, 25, 30, 13, 7};
  const int totalProbability = 100;

  int totalRuns = 0;
  int runsBreakdown[7] = {0};
  int dotBalls = 0;
  int ballsFaced = 0;


  while (totalRuns < 50 && rand() % totalProbability < probabilities[7]) {

    int outcome = 0;
    int randomNumber = rand() % totalProbability;
    for (int i = 0; i < 7; ++i) {
      if (randomNumber < probabilities[i]) {
        outcome = i + 1;
        break;
      }
      randomNumber -= probabilities[i];
    }


    totalRuns += outcome;
    runsBreakdown[outcome] += 1;
    dotBalls += (outcome == 0);
    ballsFaced++;
  }


  cout << "Runs scored: " << totalRuns << endl;
  cout << "Runs breakdown:" << endl;
  for (int i = 1; i <= 6; ++i) {
    cout << i << "s: " << runsBreakdown[i] << endl;
  }
  cout << "Dot balls: " << dotBalls << endl;
  cout << "Balls faced: " << ballsFaced << endl;

  return 0;
}
