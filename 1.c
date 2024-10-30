/* Задание 1. Ввести пять чисел и вывести наибольшее из них
Нужно напечатать наибольшее число

Данные на входе: Пять целых чисел разделенных пробелом
Данные на выходе: Одно целое числоа %d+%d+%d=%d
*/

#include <stdio.h>
int main(int argc, char **argv)
{
int a,b,c,d,e;
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int max = a > b ? a : b;
 max = max > c ? max : c;
 max = max > d ? max : d;
 max = max > e ? max : e;
 printf("%d",max);
 return 0;
}