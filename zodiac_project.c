/*Cameron Terhune*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void) {
int month;
int day;
	scanf("%d\n", &month);
	scanf("%d\n", &day);
	if(((month ==1 || month==12) && (month==12 && day <=22) && (month==12 && day >=31))) {
		printf("You were born in somewhere between Dec 22-Jan 19. You are a Capricorn.\n");
	}
	if(month ==2) {
		printf("You were born in February. You are an Aquarius.\n");
	}
	if(month ==3) {
		printf("You were born in March. You are a Pisces.\n");
	}
	if(month ==4) {
		printf("You were born in April. You are an Aries.\n");
	}
	if(month ==5) {
		printf("You were born in May. You are a Taurus.\n");
	}
	if(month ==6) {
		printf("You were born in June. You are a Gemini.\n");
	}
	if(month ==7) {
		printf("You were born in July. You are a Cancer.\n");
	}
	if(month ==8) {
		printf("You were born in August. You are a Leo.\n");
	}
	if(month ==9) {
		printf("You were born in September. You are a Virgo.\n");
	}
	if(month ==10) {
		printf("You were born in October. You are a Libra.\n");
	}
	if(month ==11) {
		printf("You were born in November. You are a Scorpio.\n");
	}
return 0;
}
