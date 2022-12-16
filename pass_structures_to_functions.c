#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date *ptr){
    scanf("%d", &(*ptr).year);
    scanf("%d", &(*ptr).month);
    scanf("%d", &(*ptr).day);
    
    
}
void printDate(struct date today){
    
    printf("%d/%02d/%02d", today.month, today.day, today.year);
    
}