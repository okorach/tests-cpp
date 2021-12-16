int main ()
{
   int x, z, a, b, e;
#ifdef UNSELECTED_BRANCH
   /* This branch is compiled only if UNSELECTED_BRANCH is defined
    * If UNSELECTED_BRANCH is not defined:
    * - The branch on contribute to the following metrics: Lines, Comments and derivative metrics (comments density etc...)
    * - Some simple issues may still be raised in that branch (semantic ?)
   */
   enum colors { blue = 1, black = 2, red, white, yellow, green, purple };
   a = 7;
   b = 3;
   e = 6;
   z = 10;
/* b = a; */
   z = (b == a ? 5 : a*b);
	x = z/a;
#else
   /* This branch is compiled if UNSELECTED_BRANCH is NOT defined */
   enum colors { blue = 1, black = 2, red, white, yellow, green, purple };
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
