#include <stdio.h>

void find_even ( int k )
{
	int even_count=0;
	int curr;

	
	scanf("%d",&curr);
	while ( curr != -1 ){
		if ( curr % 2 == 0 ){
			even_count = even_count+1;
			if ( even_count == k ){
				printf ( "%d\n", curr );
				return ;
			}
		}
		scanf ( "%d", &curr );
	}
	

	printf ( "-1\n" );
	return ;
}
int main()
{
	int k;

	scanf("%d",&k);
	find_even(k);

	return 0;
}
