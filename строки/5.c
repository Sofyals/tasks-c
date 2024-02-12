//Написать программу ввода двух слов (через пробел в одну строчку). 
//Определить булевы значения для оператора in проверки вхождения первого слова во второе.
//А также для операторов ==, >, <. Все булевы значения объединить в одну строку через пробел и вывести на экран.
//Sample Input:
//hello python
//Sample Output:
//False False False True

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char word1[50], word2[50];

    printf("Введите два слова через пробел: ");
    scanf("%s %s", word1, word2);

    bool in_check = strstr(word2, word1) != NULL;
    bool equal_check = strcmp(word1, word2) == 0;
    bool greater_check = strcmp(word1, word2) > 0;
    bool less_check = strcmp(word1, word2) < 0;

    printf("%s %s %s %s\n", in_check ? "True" : "False", equal_check ? "True" : "False", greater_check ? "True" : "False", less_check ? "True" : "False");

    return 0;
}
