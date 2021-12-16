#include <iostream>

using namespace std;

#define NBR_MEN 500
#define NBR_WOMEN 500

#define NBR_ADULTS 100
#define NBR_MINORS 50

int main ()
{
    if (NBR_MEN == NBR_WOMEN) {
        printf("It's 50/50 between men and women");
    } else {
        printf("Not the same nbr of men than women");
    }

    if (NBR_ADULTS == NBR_MINORS) {
        printf("It's 50/50 between adults and minors");
    } else {
        printf("Not the same nbr of adults and minors");
    }
}
