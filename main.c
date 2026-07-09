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
            //future cipher types coming soon...
    }
}
