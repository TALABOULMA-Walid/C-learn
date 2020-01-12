//#include <stdio.h>
//#include <stdlib.h>


#define SECONDS_PER_YEAR ( 365UL * 24UL * 60UL * 60UL )
#define MIN(A,B) ( (B) < (A) ? (B) : (A) )  //better for stability
#define MIN_BIS(A,B)

int main()
{

int a = SECONDS_PER_YEAR;

return 2*a - a -a;
}
