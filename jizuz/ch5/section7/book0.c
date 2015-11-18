#include <stdio.h>


// /|\PROGRESS: FINISHED

// here we'll work with multidimensional arrays
// the code is pretty self-explanatory, so just read it :)

// a map of days in a month which depends on if a year is a leap year or not
static int day_tab[2][13] = {
	[0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31],
	[0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
};

int day_of_year(int year, int month, int day) {
	// set day of year from month and day
	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0; // this returns either a 0 or a 1
	for (i = 1; i < month; i++)
		day += day_tab[leap][i];
	return day;
}

int month_day(int year, int yearday, int *pmonth, int *pday) { // set month, day from day of year
	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 1; yearday > day_tab[leap][i]; i++)
		yearday -= day_tab[leap][i];
	*pmonth = i;
	*pday = yearday;
}

int main(int argc, char *argv[])
{
        // awesome code goes here:


        return 0;
}

