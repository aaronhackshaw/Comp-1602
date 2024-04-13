#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int collect() {

  int counts[8] = {2, 3, 2, 3, 2, 2, 2, 1};
  char letters[8] = {'W', 'O', 'R', 'L', 'D', 'C', 'U', 'P'};


  srand(time(0));

  int collected = 0;
  while (true) {
    // Simulate opening a bottle cap
    int cap = rand() % 100;


    if (cap < 15) {
      if (counts[0] > 0) {
        counts[0]--;
      }
    } else if (cap < 27) {
      if (counts[1] > 0) {
        counts[1]--;
      }
    } else if (cap < 31) {
      if (counts[2] > 0) {
        counts[2]--;
      }
    } else if (cap < 41) {
      if (counts[3] > 0) {
        counts[3]--;
      }
    } else if (cap < 55) {
      if (counts[4] > 0) {
        counts[4]--;
      }
    } else if (cap < 70) {
      if (counts[5] > 0) {
        counts[5]--;
      }
    } else if (cap < 82) {
      if (counts[6] > 0) {
        counts[6]--;
      }
    } else if (counts[7] > 0) {
      counts[7]--;
    }

    collected++;

    // Check if all characters are collected
    bool completed = true;
    for (int i = 0; i < 8; ++i) {
      if (counts[i] > 0) {
        completed = false;
        break;
      }
    }
    if (completed) break;
  }

  return collected;
}

int main() {
  int total_collected = 0;
  for (int i = 0; i < 20; ++i) {
    int collected = collect();
    total_collected += collected;
    cout << "Simulation " << i + 1 << ": " << collected << " bottle caps" << endl;
  }

  cout << "Average: " << static_cast<double>(total_collected) / 20 << " bottle caps" << endl;

  return 0;
}
