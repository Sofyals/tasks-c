//Вводятся два слова (через пробел в одной строке). Длина второго слова меньше первого. 
//Из этих слов выделить символы с нечетными индексами с обрезкой первого слова до длины второго. 
//Сравнить полученные строки между собой на равенство и результат (True или False) вывести на экран. 
//Задачу выполнять без использования условного оператора.
//Sample Input:
//Hello Hell
//Sample Output:
//True

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char first_word[50], second_word[50];
    char extracted_chars[50] = "";
    int i, j;

    printf("Введите два слова через пробел: ");
    scanf("%s %s", first_word, second_word);

    for (i = 0, j = 0; i < strlen(first_word) && j < strlen(second_word); i += 2, j++) {
        extracted_chars[j] = first_word[i];
    }
    extracted_chars[j] = '\0'; 

    bool are_equal = strcmp(extracted_chars, second_word) == 0;

    printf("%s\n", are_equal ? "True" : "False");

    return 0;
}

