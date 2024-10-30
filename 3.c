/* Задание 3. Ввести три числа и определить, верно ли, что они вводились в порядке
возрастания.

Данные на входе: Три целых числа
Данные на выходе: Одно слово YES или NO
*/

#include <stdio.h>
int main(int argc, char **argv)
{
int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
printf("%s", a < b & b < c ? "YES" : "NO");
 return 0;
}