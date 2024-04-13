#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char toReplace, replacement;
    string message, encodedMessage;

    // Get user input
    cout << "Enter the character to replace: ";
    cin >> toReplace;
    cout << "Enter the replacement character: ";
    cin >> replacement;

    // Read the message from the file
    ifstream inputFile("message.txt");
    getline(inputFile, message);
    inputFile.close();

    // Replace characters and count replacements
    int replacements = 0;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == toReplace) {
            encodedMessage += replacement;
            replacements++;
        } else {
            encodedMessage += message[i];
        }
    }

    // Write the encoded message to the new file
    ofstream outputFile("encodedMessage.txt");
    outputFile << encodedMessage;
    outputFile.close();

    // Print the results
    cout << "Number of characters replaced: " << replacements << endl;
    cout << "Encoded message:\n" << encodedMessage << endl;

    return 0;
}
