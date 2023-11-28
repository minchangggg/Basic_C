#include <stdio.h>
#include <stdbool.h>

char *day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

typedef struct {
    int date;
    int month;
    int year;
} TIME;

bool checkYear (TIME time)  { // hàm kiểm tra xem đó có phải năm nhuận không
    // Nếu (số năm chia hết cho 400) hoặc (số năm chia hết cho 4 và không chia hết cho 100) , đó là 1 năm nhuận
    return ( (time.year % 400 == 0) || ((time.year % 4 == 0) && (time.year % 100 != 0)) ); 
}

bool checkTime (TIME time) { // hàm kiểm tra xem input có hợp lệ không
    switch (time.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if ( 1 <= time.date && time.date <= 31 ) return true;
            return false; 

        case 2:
            if ( 1 <= time.date && time.date <= 29 ) {
                if (checkYear(time) == false) {
                    if (time.date == 29) return false;
                }
                return true;
            }
            return false;

        case 4: case 6: case 9: case 11:
            if ( 1 <= time.date && time.date <= 30 ) return true;
            return false;

        default: 
            return false;
    }
}

void input (TIME* time) { 
    bool ok = true;
    do {
        printf ("\nEnter date: "); scanf ( "%d", &time->date );
        printf ("\nEnter month: "); scanf ( "%d", &time->month );
        printf ("\nEnter year: "); scanf ( "%d", &time->year );
        if (checkTime(*time) == false) {
            printf("The information is invalid. Please re-enter.");
        }

        else ok = false;
    } while (ok);
}

int calcDay1 (TIME time) { 
    return ((time.date + 2 * time.month + (3 * (time.month + 1)) / 5 + time.year + (time.year / 4)) % 7);
}

void output (TIME time) {
    printf ("It is %s" , day[wecalcDay(time)]);
}

int main (int argc, char *argv[]) {
    TIME time;
    input (&time);
    output (time);
}