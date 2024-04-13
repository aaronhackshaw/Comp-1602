#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Struct to store information about a video game
struct Game {
    string name;
    string genre;
    double rating;
    int ranking;
};

// Function to read data from the file and store it in an array of Game structs
int readData(Game games[]) {
    ifstream file("games.txt");
    int count = 0;

    if (file.is_open()) {
        while (!file.eof()) {
            file >> games[count].name;
            if (games[count].name == "END") {
                break;
            }
            file >> games[count].genre >> games[count].rating >> games[count].ranking;
            count++;
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }

    return count;
}

// Function to display information about a game
void displayGame(Game game) {
    cout << "Name: " << game.name << endl;
    cout << "Genre: " << game.genre << endl;
    cout << "Rating: " << game.rating << endl;
    cout << "Ranking: " << game.ranking << endl;
}

// Function to search for a game by name in the array of Game structs
int searchGame(Game games[], int numGames, string name) {
    for (int i = 0; i < numGames; i++) {
        if (games[i].name == name) {
            return i;
        }
    }
    return -1; // Return -1 if game not found
}

int main() {
    const int MAX_GAMES = 100;
    Game games[MAX_GAMES];
    int numGames = readData(games);

    // Example usage
    string gameName = "Assassin's_Creed_Valhalla";
    int index = searchGame(games, numGames, gameName);
    if (index != -1) {
        cout << "Game found at index " << index << ":" << endl;
        displayGame(games[index]);
    } else {
        cout << "Game not found." << endl;
    }

    return 0;
}
