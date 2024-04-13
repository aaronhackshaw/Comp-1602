#include <iostream>
#include <string>

using namespace std;

// Define a struct called Game to store information about a video game
struct Game {
    string name;
    string genre;
    double userRating;
    int salesRanking;
};

// Function to display all the information stored about the game
void displayGame(Game *game) {
    cout << "Name: " << game->name << endl;
    cout << "Genre: " << game->genre << endl;
    cout << "User Rating: " << game->userRating << "/10" << endl;
    cout << "Sales Ranking: " << game->salesRanking << "/10" << endl;
}

// Function to update the user rating of the game
void updateUserRating(Game *game, double userRating) {
    game->userRating = userRating;
}

// Function to swap the values stored at two addresses
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // Create memory for a Game struct using the new operator
    Game *game = new Game;

    // Request data for the struct from the user
    cout << "Enter the name of the video game: ";
    getline(cin, game->name);
    cout << "Enter the genre of the video game: ";
    getline(cin, game->genre);
    cout << "Enter the user rating of the video game (out of 10): ";
    cin >> game->userRating;
    cout << "Enter the sales ranking of the video game (from 1 to 10): ";
    cin >> game->salesRanking;

    // Display the data stored about the Game struct
    cout << "\nInformation about the video game:\n";
    displayGame(game);

    // Request the user to enter a new value for userRating
    double newUserRating;
    cout << "\nEnter a new value for user rating: ";
    cin >> newUserRating;

    // Update the Game struct with the new user rating
    updateUserRating(game, newUserRating);

    // Display the updated data stored about the Game struct
    cout << "\nUpdated information about the video game:\n";
    displayGame(game);

    // Free the allocated memory
    delete game;

    return 0;
}
