#include <stdio.h>

char* encrypt_caesar_cipher (char * text) {
    for (int i = 0; text[i] != '\0' ; i++) {
        if (text[i] == 'X' || text[i] == 'x') {
            if (text[i] == 'x') {
                text[i] = 'a';
            }
            else {
               text[i] = 'A';
            }
        }
        else if (text[i] == 'Y' || text[i] == 'y') {
            if (text[i] == 'y') {
                text[i] = 'b';
            }
            else {
               text[i] = 'B';
            }
        }
        else if (text[i] == 'Z' || text[i] == 'z') {
            if (text[i] == 'z') {
                text[i] = 'c';
            }
            else {
               text[i] = 'C';
            }
        }
        else {
            text[i] = text[i] + 3;
        }
    }
    return text;
}

char* decrypt_caesar_cipher (char * text) {
    for (int i = 0; text[i] != '\0' ; i++) {
        if (text[i] == 'A' || text[i] == 'a') {
            if (text[i] == 'a') {
                text[i] = 'x';
            }
            else {
               text[i] = 'X';
            }
        }
        else if (text[i] == 'B' || text[i] == 'b') {
            if (text[i] == 'b') {
                text[i] = 'y';
            }
            else {
               text[i] = 'Y';
            }
        }
        else if (text[i] == 'C' || text[i] == 'c') {
            if (text[i] == 'c') {
                text[i] = 'z';
            }
            else {
               text[i] = 'Z';
            }
        }
        else {
            text[i] = text[i] - 3;
        }
    }
    return text;
}

int main () {
    int choice = 0;
    char text[1024] = "";
    printf("Write a text...\n");
    scanf("%s", &text);


    printf("\nChoose cipher type: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            encrypt_caesar_cipher(text);
            printf(text);
            break;
        case 2:
            decrypt_caesar_cipher(text);
            printf(text);
            //future cipher types coming soon...
    }
}
