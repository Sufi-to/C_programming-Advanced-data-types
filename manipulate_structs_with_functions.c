#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void readDate(struct date *nowptr) {
    scanf("%d%d%d", &((*nowptr).year), &((*nowptr).month), &((*nowptr).day));
}

void printDate(struct date now) {
    printf("%02d/%02d/%4d\n", now.month, now.day, now.year);
}

struct date advanceDay(struct date today){
    int day = today.day;
    if (day == 28 && today.month==2){
        today.month = today.month + 1;
        return today;
    }else if(day ==30 && ((today.month == 4) | (today.month==6) | (today.month ==9) | (today.month ==11) )){
        today.month = today.month +1;
        today.day = 1;
        return today;
    }else if(day ==31 &&((today.month == 1) | (today.month==3) | (today.month ==5) | (today.month ==7) | (today.month == 8) | (today.month==10) )){
        today.month = today.month +1;
        return today;
    }else if(day == 31 && today.month==12){
        today.year = today.year +1;
        today.month = 1;
        today.day = 1;
        return today;
    }else {
        day = day +1;
        return today;
    }
}



