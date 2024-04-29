#include <stdio.h>

typedef struct timeStamp{
    int date;
    int month;
    int year;

}time;

int main() {
    time today;
    int d,m,y;
    printf("Enter date: ");
    scanf("%d",&d);
    printf("Enter month: ");
    scanf("%d",&m);
    printf("Enter year: ");
    scanf("%d",&y);
    
    today.date = d;
    today.month = m;
    today.year = y;
    printf("Date you entered is: %d/%d/%d",today.date,today.month,today.year);

    return 0;
}

