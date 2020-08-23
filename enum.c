#include <stdio.h>

enum day{sunday = 1, monday, tuesday = 5, wednesday = -1, thursday, friday, saturday};

enum month{january, february, march};


int main() 
{ 
	enum month myMonth = march;

	printf("%d %d %d %d %d %d %d\n", sunday, monday, tuesday, wednesday, thursday, friday, saturday);
	printf("%d %d %d\n", january, february, march);

	printf("Your month is : %d\n", myMonth);



}