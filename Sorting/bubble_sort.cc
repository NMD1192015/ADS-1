#include <iostream>

void bubble_sort(int V[], int n)
{
	int i, tmp;
	int flag_swap;
	
	i = 0;
	flag_swap = 1;
	
	while ((flag_swap == 1) && (i < n-1))
	{
		flag_swap = 0;
		
		for(int jj = 0; jj < n; ++jj)
		{
			if (V[jj] > V[jj+1])
			{
				flag_swap = 1;
				tmp = V[jj];
				V[jj] = V[jj+1];
				V[jj+1] = tmp;
			} 
		}
		
		i++;
	}
}		
