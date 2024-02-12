//Напишите программу ввода двух слов через пробел. Сформируйте новую строку, продублировав первое слово дважды, 
//а второе - трижды (все слова в результирующей строке должны идти через пробел). Результат выведите на экран.
//Sample Input:
//hello python
//Sample Output:
//hello hello python python python

#include <stdio.h>
#include <string.h>

int main() {
    char word1[50], word2[50];

    printf("Введите два слова через пробел: ");
    scanf("%s %s", word1, word2);

    char result[200];
    sprintf(result, "%s %s %s %s %s", word1, word1, word2, word2, word2);

    printf("Результат: %s\n", result);

    return 0;
}

