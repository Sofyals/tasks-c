//Продолжите программу. Необходимо объявить два массива с именами ar_1 и ar_2, содержащими элементы типа int. Длина массива ar_1 должна быть равна TOTAL, а массива ar_2 - в два раза больше (TOTAL * 2). Затем прочитайте из входного потока пять целых чисел, записанных через пробел, в массив ar_1 значения (по порядку, начиная с первого). После этого скопируйте значения массива ar_1 в массив ar_2. Оставшиеся элементы массива ar_2 должны принимать значение -1.

#define TOTAL   5

int main(void)
{
    int ar_1[TOTAL], ar_2[TOTAL*2];
    for(int i = 0; i < TOTAL; i++) {
        scanf("%d", &ar_1[i]);
    }
    for(int i = 0; i < TOTAL; i++){
        ar_2[i] = ar_1[i];
     }
    for (int i = TOTAL; i < 2 * TOTAL; i++) { 
        ar_2[i] = -1;
    }

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}