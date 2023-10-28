#include <stdio.h>

unsigned setbits( unsigned x, int p, int n, unsigned y );


	int main()
	{
		int i;
		unsigned x, y;
		int p, n;

		setbits(1,1,1,1);

		for ( i = 0; i < 100000; i++ )
		{
			++x; ++y; ++n; ++p;

				printf("%d %d %d %d %d", x, y, n, p, setbits(1,1,1,1) );
		}	

	}

		unsigned setbits( unsigned x, int p, int n, unsigned y )
		{
			return x & ~(~(~0 << n ) << ( p + 1 - n ) ) | ( y &  ~(~0 << n ) ) << ( p + 1 - n ); 
		}
