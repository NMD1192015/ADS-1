// Sugli array
#include "Sorting/insert_sort.cc"
#include "Sorting/bubble_sort.cc"

// Su liste
#include "Sorting/insertsort.cpp"
#include "Sorting/mergesort.cpp"
#include "Sorting/quicksort.cpp"

// Stampa
#include "stampa.cc"


int main()
{	
	int s;
	int s_v;
	int s_l;
	
	int n = 100;
	int V[n];
	
	std::list<int> List; 
	
	std::cout<<"-- Unsorted --" << std::endl << std::endl;
	
	std::cout<<"-- Vector --"<< std::endl << std::endl;
	
	// Contro-ordina il vettore e la lista  
	
	for (int ii = 0; ii <= n; ++ii)
	{
		if (ii == 0)
		{ 
			V[ii] = n;
		}
		else 
		{	
			V[ii] = V[ii-1] - 1 ;
		} 
		
		List.push_back(V[ii]);

		std::cout<<ii<<" : "<<V[ii]<<std::endl;
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout<<"-- List --"<< std::endl << std::endl;
	
	for (int ii: List)
	{	
		std::cout<<ii<<" , ";
	}
	
	std::cout<<endl;
	
	std::cout << std::endl; 
	std::cout << std::endl;
	std::cout << std::endl; 
	
	std::cout<<"1. Vettori	 2. Liste " << std::endl << std::endl;
	std::cout<<">>> "; std::cin>>s;
	
	if (s == 1)
	{
		system("clear");
		
		std::cout<<" 1. Insertion_Sort		2. Bubble_Sort		3. Merge_Sort" << std::endl;
		std::cout<<" 4. Quick_Sort" << std::endl;
		std::cout<<">>> "; std::cin>>s_v;
		
		system("clear");	
		
		switch(s_v)
		{
			case 1 : {insert_sort(V, n); Stampa_vettore(V, n); break;}
			case 2 : {bubble_sort(V, n); Stampa_vettore(V, n); break;}
		}
	}
	else if(s == 2)
	{
		system("clear");
		
		std::cout<<" 1. Insertion_Sort		2. Bubble_Sort		3. Merge_Sort" << std::endl;
		std::cout<<" 4. Quick_Sort" << std::endl;
		std::cout<<">>> "; std::cin>>s_l;	
		
		system("clear");
		
		switch (s_l)
		{
			case 1 : {insertSort(List); Stampa_lista(List); break;}
			case 3 : {mergeSort (List); Stampa_lista(List); break;}
			case 4 : {quickSort (List); Stampa_lista(List); break;}
			
		}
	}
	
	return 0;
}
