#include <iostream>


void insert_sort (int V[], int n)
{

	int key;
	int idx;	
	
	for (int ii = 1; ii < n; ++ii)
	{
		
		key = V[ii];
		
		// Inserisco V[j] nella sequenza ordinata V [1...j-1]  
		
		idx = ii - 1;
		
		while (idx >= 0 && V[idx] > key)
		{
		
			V[idx + 1] = V[idx];
			idx = idx - 1;
		
		}
		
		V[idx + 1] = key;
	
	}

}			
