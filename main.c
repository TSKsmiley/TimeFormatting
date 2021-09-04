#include <stdio.h>

#define WEEK_SECONDS 604800
#define DAY_SECONDS 86400
#define HOUR_SECONDS 3600
#define MINUTE_SECONDS 60

/* Opgave:
 * Hvis der indlæses 650 sekunder udskrives der 0 uger, 0 dage, 0 timer, 10 minutter og 50 sekunder.
 * Hvis der indlæses 4000 sekunder udskrives der 0 uger, 0 dage, 1 timer, 6 minutter og 40 sekunder.
 * Hvis der indlæses 1000000 sekunder udskrives der 1 uger, 4 dage, 13 timer, 46 minutter og 40 sekunder.
*/

int main() {
    int input, weeks, days, hours, minutes, seconds;
    printf("indtast tid i sekunder: ");
    scanf("%d", &input);

    weeks = input/WEEK_SECONDS;
    days = (input%WEEK_SECONDS)/DAY_SECONDS;
    hours = (input%DAY_SECONDS)/HOUR_SECONDS;
    minutes = (input%HOUR_SECONDS)/MINUTE_SECONDS;
    seconds = (input%MINUTE_SECONDS)%MINUTE_SECONDS;

    printf("%d sekunder er: %d uger, %d dage, %d timer, %d minutter og %d sekunder\n", input, weeks, days, hours, minutes, seconds);
    return 0;
}
