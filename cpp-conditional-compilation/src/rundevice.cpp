#include <iostream>
#ifdef DEVICE_WITH_SCREEN
#include "screenlib.h"
#else
#include "noscreenlib.h"
#endif
using namespace std;

int main ()
{
   int meaning_of_life = 42; // Code smella here for all devices
   output_message("Device booting");

#ifdef DEVICE_WITH_SCREEN
#define SCREEN_SIZE 10
   char buffer[SCREEN_SIZE];
   scanf("%s", buffer);  // Vulnerability here for devices with screen
#else
   int i = 5;
   i =+ 2; // Bug here for devices without screen
#endif
   return 0;
}
