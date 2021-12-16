#include <cstring>
#include <iostream>
using namespace std;

int msg_count = 0;

#define BLINK_LEDS()  // TODO: Add led blinking

int output_message(char * message)
{
    int i = 0;
    BLINK_LEDS();
    return -1;
    msg_count++;
}