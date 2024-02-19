//В программе до функции main() объявлен массив с именем marks и типом элементов short. Этот массив скрыт в коде, но он существует. В функции main() вычислите среднее арифметическое значений элементов этого массива и выведите в консоль полученное значение с точностью до сотых.

#include <stdio.h>

int main(void)
{
   int sum = 0;
   int lenght = sizeof(marks)/sizeof(marks[0]);
   for(int i = 0; i < lenght; i++){
           sum += marks[i];
   }
   float average = (float)sum/lenght;
   printf("%.2f", average);

    return 0;
}