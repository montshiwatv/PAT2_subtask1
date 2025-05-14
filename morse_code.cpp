#include <iostream>
#include <map>
#include <string>
#include <cctype> // for toupper

using namespace std;

// Morse code map
map<char, string> morseCode = {
    {'A', ".-"},   {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
    {'E', "."},    {'F', "..-."}, {'G', "--."},  {'H', "...."},
    {'I', ".."},   {'J', ".---"}, {'K', "-.-"},  {'L', ".-.."},
    {'M', "--"},   {'N', "-."},   {'O', "---"},  {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"},
    {'U', "..-"},  {'V', "...-"}, {'W', ".--"},  {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
    {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
    {'8', "---.."}, {'9', "----."},
    {' ', " / "}
};

string toMorse(const string& message) {
    string result;
    for (char ch : message) {
        char upperCh = toupper(ch);
        if (morseCode.find(upperCh) != morseCode.end()) {
            result += morseCode[upperCh] + " ";
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a message to convert to Morse code: ";
    getline(cin, input);

    string morse = toMorse(input);
    cout << "Morse Code: " << morse << endl;

    return 0;
}

