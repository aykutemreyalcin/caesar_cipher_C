#include <stdio.h>
#include <windows.h>

int main()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

    system("cls");
    printf("Welcome to the Caesar Cipher ");

    Sleep(2000);
    system("cls");

    printf("What is the message?");
    char message[200];
    scanf("%s", &alphabet);

    printf("How many shifts do you want?");
    int shift;
    scanf("%d", &shift);




}