//Напишите программу ввода двух строк 
//(каждая вводится с новой строки) и их объединения в одну строку через пробел. Результат выведите на экран.
//Sample Input:
//hello python
//i love you
//Sample Output:
//hello python i love you

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Введите первую строку: ");
    fgets(str1, sizeof(str1), stdin);

    if (strlen(str1) > 0 && str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';

    printf("Введите вторую строку: ");
    fgets(str2, sizeof(str2), stdin);

    if (strlen(str2) > 0 && str2[strlen(str2) - 1] == '\n')
        str2[strlen(str2) - 1] = '\0';

    strcat(str1, " ");
    strcat(str1, str2);

    printf("Результат: %s\n", str1);

    return 0;
}

