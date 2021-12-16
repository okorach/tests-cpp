int main ()
{
   int x, z, a, b, e;
   enum colors { blue = 1, black = 2, red, white, yellow, green, purple }; // NOSONAR
   a = 7;
   b = 3;
   e = 6;
   z = 10;
/* b = a; */
   z = (b == a ? 5 : a*b);
	x = z/a;
#endif
   return 0;
}
