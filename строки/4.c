//Написать программу ввода строки и формирования новой строчки вида: "Строка: <введенная строка>. 
//Длина: <длина строки>". Результат сформированной строки вывести на экран.
//Sample Input:
//hello Balakirev
//Sample Output:
//Строка: hello Balakirev. Длина: 15

#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100];

    printf("Введите строку: ");
    fgets(input_string, sizeof(input_string), stdin);

    if (strlen(input_string) > 0 && input_string[strlen(input_string) - 1] == '\n') {
        input_string[strlen(input_string) - 1] = '\0';
    }

    int length = strlen(input_string);

    char result[150];
    sprintf(result, "Строка: %s. Длина: %d", input_string, length);


    printf("%s\n", result);

    return 0;
}
