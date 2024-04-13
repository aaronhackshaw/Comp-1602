#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void getMessage(const char haystack[], char message[]) {
    const char* start = strchr(haystack, '<');
    const char* end = strchr(haystack, '>');
    if (start && end && start < end) {
        strncpy(message, start + 1, end - start - 1);
        message[end - start - 1] = '\0';
    } else {
        strcpy(message, "No message found.");
    }
}

int main() {
    const int MAX_LENGTH = 1000; // Assuming maximum length of haystack
    char haystack[MAX_LENGTH];
    char message[MAX_LENGTH];

    ifstream inputFile("input.txt");
    inputFile.getline(haystack, MAX_LENGTH);

    getMessage(haystack, message);
    cout << "Message: " << message << endl;

    return 0;
}
