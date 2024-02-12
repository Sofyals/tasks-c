//Вводятся два слова (через пробел в одной строке). Длина первого слова меньше второго. 
//Необходимо обрезать второе слово до длины первого и отобразить обрезанное слово на экране.
//Sample Input:
//Hello Balakirev
//Sample Output:
//Balak

#include <stdio.h>
#include <string.h>

int main() {
    char first_word[50], second_word[50];

    printf("Введите два слова через пробел: ");
    scanf("%s %s", first_word, second_word);

    int first_word_length = strlen(first_word);

    second_word[first_word_length] = '\0';

    printf("%s\n", second_word);

    return 0;
}
