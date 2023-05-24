#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* morseCode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "/", NULL};
char* letters[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", " ", NULL};

char* convertToMorse(char* letter) {
    char* morse = "";
    int i, index;
    for (i = 0; i < strlen(letter); i++) {
        index = toupper(letter[i]) - 'A';
        if (index < 0 || index > 26) {
            continue;
        }
        morse = strcat(morse, morseCode[index]);
        morse = strcat(morse, "/");
    }
    return morse;
}

char* convertToLetter(char* morse) {
    char* letter = "";
    char* code;
    int i, j;
    code = strtok(morse, "/");
    while (code != NULL) {
        for (i = 0; i < 27; i++) {
            if (strcmp(code, morseCode[i]) == 0) {
                letter = strcat(letter, letters[i]);
                break;
            }
        }
        code = strtok(NULL, "/");
    }
    return letter;
}

int main() {
    char input[100];
    printf("Enter 'm' to convert letter to Morse code or 'l' to convert Morse code to letter: ");
    scanf("%s", input);
    if (strcmp(input, "m") == 0) {
        printf("Enter letter(s) to convert to Morse code: ");
        scanf("%s", input);
        printf("Morse code: %s\n", convertToMorse(input));
    } else if (strcmp(input, "l") == 0) {
        printf("Enter Morse code to convert to letter(s): ");
        scanf("%s", input);
        printf("Letter(s): %s\n", convertToLetter(input));
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
