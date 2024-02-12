//Вводятся две строки (каждая с новой строчки). Из первой строки выделить все символы с четными индексами, 
//а из второй - с нечетными. Объединить строки через пробел и вывести на экран.
//Sample Input:
//Hello
//Python
//Sample Output:
//Hlo yhn

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char result[200] = "";
    
    printf("Введите первую строку: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Введите вторую строку: ");
    fgets(str2, sizeof(str2), stdin);
    
    if (strlen(str1) > 0 && str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    if (strlen(str2) > 0 && str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    for (int i = 0; i < strlen(str1); i += 2) {
        char c[2] = {str1[i], '\0'};
        strcat(result, c);
    }

    for (int i = 1; i < strlen(str2); i += 2) {
        char c[2] = {str2[i], '\0'};
        strcat(result, c);
    }

    printf("%s\n", result);

    return 0;
}
