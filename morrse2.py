morse_code = { 'A':'.-', 'B':'-...', 'C':'-.-.', 'D':'-..', 'E':'.', 'F':'..-.', 'G':'--.', 'H':'....', 'I':'..', 'J':'.---', 'K':'-.-', 'L':'.-..', 'M':'--', 'N':'-.', 'O':'---', 'P':'.--.', 'Q':'--.-', 'R':'.-.', 'S':'...', 'T':'-', 'U':'..-', 'V':'...-', 'W':'.--', 'X':'-..-', 'Y':'-.--', 'Z':'--..', ' ':'/' }

def convert_to_morse(text):
    morse = ""
    for letter in text.upper():
        if letter in morse_code:
            morse += morse_code[letter] + " "
    return morse.strip()

def convert_to_letter(morse):
    text = ""
    for code in morse.split():
        for letter, morse_code in morse_code.items():
            if code == morse_code:
                text += letter
                break
        else:
            continue
    return text

while True:
    choice = input("Enter 'm' to convert letter to Morse code or 'l' to convert Morse code to letter: ")
    if choice == 'm':
        text = input("Enter letter(s) to convert to Morse code: ")
        print("Morse code:", convert_to_morse(text))
    elif choice == 'l':
        morse = input("Enter Morse code to convert to letter(s): ")
        print("Letter(s):", convert_to_letter(morse))
    else:
        print("Invalid choice. Try again.")