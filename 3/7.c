//В программе ниже объявите функцию с именем is_triangle, которая принимает три целочисленных значения a, b, c и определяет, могут ли длины a, b, c образовывать стороны треугольника. Функция возвращает 1, если a, b, c могут быть длинами треугольника, и 0 - в противном случае. Прочитайте из входного потока три целых числа, записанных в одну строчку через пробел в переменные a, b, c. Вызовите в функции main функцию is_triangle с аргументами a, b, c. Результат сохраните в переменной и выведите ее значение в консоль как одно целое число.
//Напомню, что числа a, b, c могут образовывать длины сторон треугольника, если каждое из них меньше суммы двух остальных.

#include <stdio.h>
int is_triangle(int a, int b, int c) {
    if (a < b + c && b < a + c && c < a + b) {
        return 1; 
    } else {
        return 0; 
    }
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = is_triangle(a, b, c);
    printf("%d", result);

    return 0;
}