// Morse code dictionary
const morseCodeDictionary = {
    "A": ".-", "B": "-...", "C": "-.-.", "D": "-..", "E": ".", "F": "..-.", "G": "--.", "H": "....", "I": "..",
    "J": ".---", "K": "-.-", "L": ".-..", "M": "--", "N": "-.", "O": "---", "P": ".--.", "Q": "--.-", "R": ".-.",
    "S": "...", "T": "-", "U": "..-", "V": "...-", "W": ".--", "X": "-..-", "Y": "-.--", "Z": "--..",
    "0": "-----", "1": ".----", "2": "..---", "3": "...--", "4": "....-", "5": ".....", "6": "-....", "7": "--...",
    "8": "---..", "9": "----.", " ": "/"
  };

  // Reverse the dictionary for Morse to text conversion
  const reverseMorseCodeDictionary = {};
  for (const key in morseCodeDictionary) {
    const morseCode = morseCodeDictionary[key];
    reverseMorseCodeDictionary[morseCode] = key;
  }

  // Function to convert text to Morse code
  function convertToMorse() {
    const inputText = document.getElementById("inputText").value.toUpperCase();
    const outputText = inputText.split("").map(char => morseCodeDictionary[char] || char).join(" ");
    document.getElementById("outputText").value = outputText;
  }

  // Function to convert Morse code to text
  function convertToText() {
    const inputText = document.getElementById("inputText").value.trim();
    const outputText = inputText.split(" ").map(code => reverseMorseCodeDictionary[code] || code).join("");
    document.getElementById("outputText").value = outputText;
  }