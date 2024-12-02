#include <stdio.h>
int calcDiffInnerElements(int** list, int l);
int main ( int argc, char argv[]) 
{
				int a[][5] = {{1,2,3,4,5},{4,5,6}};
				calcDiffInnerElements(a[5],5);
				return 1;
}
int calcDiffInnerElements(int** list, int l)
{
				for ( int i = 0 ; i < l; i ++ ) 
								for (int j = 0 ; j < l ; j ++)
												printf("%i ", list[i][j]);
}
