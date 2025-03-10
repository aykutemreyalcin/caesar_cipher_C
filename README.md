# Caesar Cipher Encryption Program

## Description
This is a simple C program that encrypts a message using the Caesar Cipher method. The program takes an input message and shifts each letter by a specified number of positions in the alphabet. It supports both uppercase and lowercase letters.

## Features
- Encrypts a given message using Caesar Cipher.
- Allows the user to specify the number of shifts.
- Maintains non-alphabetic characters (e.g., numbers, spaces, punctuation) without modification.

## Requirements
- Windows OS (due to usage of `system("cls")` and `Sleep()` functions)
- GCC Compiler or any compatible C compiler

## How to Run
1. Compile the program using GCC:
   ```sh
   gcc -o caesar_cipher caesar_cipher.c
   ```
2. Run the program:
   ```sh
   ./caesar_cipher
   ```
3. Enter the message you want to encrypt.
4. Specify the number of shifts.
5. The program will display the encrypted message.

## Example Usage
```
Welcome to the Caesar Cipher

What is the message?
hello

How many shifts do you want?
3

Original message: hello
Encrypted Message: khoor
```

## Code Explanation
- **finding_element_index()**: This function finds the index of a character in the alphabet array.
- **Main Program Execution**:
  - Asks for user input (message and shift value).
  - Iterates through the message, shifting each character accordingly.
  - Maintains non-alphabetic characters as they are.
  - Outputs the encrypted message.

## Known Issues
- The program currently only handles lowercase letters properly.
- Uppercase letters are not considered separately.
- `scanf("%s", message);` only reads the first word of input, ignoring spaces.

## Future Improvements
- Support for uppercase letters.
- Improve input handling to support full sentences (use `fgets()` instead of `scanf()`).
- Decryption functionality to reverse the encryption process.

## Author
Developed by Aykut

## License
This project is open-source and free to use for educational purposes.

