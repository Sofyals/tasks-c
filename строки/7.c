//Напишите программу отображения всех символов с нечетными индексами из введенной строки.
//Sample Input:
//Balakirev
//Sample Output:
//aaie

#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100];

    printf("Введите строку: ");
    fgets(input_string, sizeof(input_string), stdin);

    if (strlen(input_string) > 0 && input_string[strlen(input_string) - 1] == '\n') {
        input_string[strlen(input_string) - 1] = '\0';
    }

    for (int i = 0; i < strlen(input_string); i++) {
        if (i % 2 != 0) {
            printf("%c", input_string[i]);
        }
    }
    printf("\n");

    return 0;
}
