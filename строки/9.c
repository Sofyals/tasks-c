//из введенной строки отобразить первые пять символов в обратном порядке. 
//Полагается, что введенная строка имеет минимум пять символов.
//Sample Input:
//abrakadabra
//Sample Output:
//karba

#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100];

    printf("Введите строку: ");
    fgets(input_string, sizeof(input_string), stdin);
    if (strlen(input_string) > 0 && input_string[strlen(input_string) - 1] == '\n') {
        input_string[strlen(input_string) - 1] = '\0';
    }

    for (int i = 4; i >= 0; i--) {
        printf("%c", input_string[i]);
    }
    printf("\n");

    return 0;
}
