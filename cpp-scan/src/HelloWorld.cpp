#include<iostream>

using namespace std;

int main ()
{
   cout << "Hello Yacine";
#ifdef COMPILER_OPTION_A
   cout << "Hello World!";
   return 0;
	int i = 0;
#else
	cout << "Hello compiler B";
	return;
#endif
}
