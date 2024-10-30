/* Задание 4. Ввести номер месяца и вывести название времени года.

Данные на входе: Целое число от 1 до 12 - номер месяца.
Данные на выходе: Время года на английском: winter, spring, summer, autumn
*/

#include <stdio.h>
int main(void)
{
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        printf("winter");
        break;
    case 3:
    case 4:
    case 5:
        printf("spring");
        break;
    case 6:
    case 7:
    case 8:
        printf("summer");
        break;
    case 9:
    case 10:
    case 11:
        printf("autumn");
        break;
    
    default:
        printf("invalid input data :(");
    }

    return 0;
}