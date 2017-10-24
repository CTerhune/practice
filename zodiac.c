/*Cameron Terhune*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void) {
int month,day;
	scanf("%d", &month);
	scanf("%d", &day);
	if((month ==1 && day <=19 && day >=1) || (month==12 && day >=22 && day<=31)) {
		printf("You were born in somewhere between Dec 22-Jan 19. You are a Capricorn.\n");
	} else if((month ==2 && day <=18 && day >=1) || (month==1 && day >=20 && day <=31)) {
		printf("You were born somehwere between Jan 20-Feb 18. You are an Aquarius.\n");
	} else if((month ==3 && day <=20 && day >=1) || (month==2 && day >=19 && day <=28)) {
		printf("You were born somewhere between Feb 19-March 20. You are a Pisces.\n");
	} else if((month ==4 && day <=19 && day <=1) || (month==3 && day >=21 && day <=31)) {
		printf("You were born somewhere between March 21-April 19. You are an Aries.\n");
	} else if((month ==5 && day <=20 && day <=1) || (month==4 && day >=20 && day <=31)) {
		printf("You were born somewhere between April 20-May 20. You are a Taurus.\n");
	} else if((month ==6 && day <=20 && day <=1) || (month==5 && day >=21 && day <=31)) {
		printf("You were born somewhere between May 21-June 20. You are a Gemini.\n");
	} else if((month ==7 && day <=22 && day >=1) || (month==6 && day >=21 && day <=30)) {
		printf("You were born somewhere between June 21-July 22. You are a Cancer.\n");
	} else if((month ==8 && day <=23 && day >=1) || (month==7 && day >=23 && day <=31)) {
		printf("You were born somewhere between July 23-August 23. You are a Leo.\n");
	} else if((month ==9 && day <=22 && day >=1) || (month==8 && day >=24 && day <=31)) {
		printf("You were born somewhere between August 24-September 22. You are a Virgo.\n");
	} else if((month ==10 && day <=22 && day >=1) || (month==9 && day >=23 && day <=31)) {
		printf("You were born somewhere between September 23-October 22. You are a Libra.\n");
	} else if((month ==11 && day <=21 && day >=1) || (month==10 && day >=23 && day <=31)) {
		printf("You were born somewhere between October 23-November 21. You are a Scorpio.\n");
	} else if((month ==12 && day <=21 && day >=1) || (month ==11 &&day >=22 && day <=30)) {
		printf("You were born somewhere between November 22-December 21. You are a Sagittarius.\n");

	}
        	srand(getpid());
	        int numb1 = rand() % 59;
        	int numb2 = numb1 + 1;
	        int numb3 = rand() % 59 + 1;
        	int numb4 = rand() % 59 +1;
       		printf("Today's winning numbers are %d, %d, and %d. Have a great day!\n", numb2, numb3, numb4);	
	        return 0;
}
