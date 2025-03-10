#include <stdio.h>
#include <windows.h>
#include <string.h>

int finding_element_index(char key, char array[])
{
    for (int i = 0; i < strlen(array); i++)
    {
        if (array[i] == key)
        {
            return i;
        } 
    }
    return -1;
}

int main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    system("cls");
    printf("Welcome to the Caesar Cipher ");

    Sleep(2000);
    system("cls");

    printf("What is the message?\n");
    char message[100];
    scanf("%s", message);

    system("cls");

    printf("How many shifts do you want?\n");
    int shift;
    scanf("%d", &shift);
    system("cls");

    printf("Original message: %s\n", message);
    char cyripted_message[100] = "";

    for (int i = 0; i < strlen(message); i++)
    {
        int index = finding_element_index(message[i], alphabet);
        if (index == -1) {
            char temp[2] = {message[i], '\0'};
            strcat(cyripted_message, temp);
        } else {
            int new_index = index + shift;
            char new_letter = alphabet[new_index];

            char temp[2] = {new_letter, '\0'};
            strcat(cyripted_message, temp);
        }
    }

    printf("Encrypted Message: %s\n", cyripted_message);
    
    return 0;
}
