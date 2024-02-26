//Продолжите программу, в которой объявляется структура с идентификатором tag_vector и целочисленными полями x, y, z типа short. В функции main объявите переменную этой структуры с именем vector. Заполните поля x, y, z значениями, прочитанными из входного потока, идущими в одну строчку через пробел.

#include <stdio.h>
struct tag_vector {
    short x;
    short y;
    short z;
};

int main(void)
{
    struct tag_vector vector;
    scanf("%hd %hd %hd", &vector.x, &vector.y, &vector.z);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}