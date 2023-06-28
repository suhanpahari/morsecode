#include <iostream>
#include <string>
#include <map>

// Morse code dictionary
std::map<char, std::string> morseCodeDict = {
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {'0', "-----"},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    {' ', " "}
};

// Function to convert a character to Morse code
std::string charToMorse(char c) {
    if (morseCodeDict.find(c) != morseCodeDict.end()) {
        return morseCodeDict[c];
    }
    return "";
}

// Function to convert a string to Morse code
std::string stringToMorse(const std::string& text) {
    std::string morseCode;
    for (char c : text) {
        morseCode += charToMorse(std::toupper(c)) + " ";
    }
    return morseCode;
}

int main() {
    std::string text;
    std::cout << "Enter a message: ";
    std::getline(std::cin, text);

    std::string morseCode = stringToMorse(text);
    std::cout << "Morse Code: " << morseCode << std::endl;

    return 0;
}