#include <stdio.h>

int condition (int day, int month, int year)
{
    if (day < 1 || day > 31){
        printf("wrong day\n");
        return 0;
    } else if (month < 1 || month > 12){
        printf("wrong month1\n");
        return 0;
    } else if (month == 2 && day >29){
        printf("wrong month2\n");
        return 0;
    } else if ((month == 1 || month == 3 || month == 5 || month == 7 || month==8 || month == 10 || month == 12) && day < 31){
        printf("wrong month3\n");
        return 0;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30){
        printf("wrong month4\n");
        return 0;
    } else if (year > 2022)
    {
        printf("Not yet this year\n");
        return 0;
    } else{
        return 1;
    }
}

int dateofbirth (int day, int month, int year){
    int daynow = 18;
    int monthnow = 10;
    int yearnow = 2022;
    int age = 2022 - year;
    if (month > monthnow){
        age = age - 1;
        return age;
    }
    if (month <= monthnow){
        age=age;
        return age;
    }
}

int main()
{
    int day, month, year;

    do
    {
        printf("write day: ");
        scanf("%d", &day);

        printf("write month: ");
        scanf("%d", &month);

        printf("write year: ");
        scanf("%d", &year);

    } while (condition(day,month,year) == 0);

    printf("Your date_of_birth Day %d,Month %d,Year %d\n", day, month, year);
    printf("Your age %d\n", dateofbirth(day, month, year));
    
}