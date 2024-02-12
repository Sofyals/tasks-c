//Напишите программу отображения последних трех символов из введенной строки. Будем полагать, что строка гарантированно длиной не менее трех символов.
//Sample Input:
//Balakirev
//Sample Output:
//rev

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

    printf("%s\n", input_string + (length - 3));

    return 0;
}
