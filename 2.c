/* Задание 2. Ввести пять чисел и вывести наименьшее из них
Нужно напечатать наименьшее число

Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое число
*/

#include <stdio.h>
int main(int argc, char **argv)
{
int a,b,c,d,e;
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int min = a < b ? a : b;
 min = min < c ? min : c;
 min = min < d ? min : d;
 min = min < e ? min : e;
 printf("%d",min);
 return 0;
}

