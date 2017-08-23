#include <iostream>
#include <list>


void Stampa_lista(std::list<int> &list)
{
	std::cout<<"-- Sorted -- "<< std::endl << std::endl;

	for (int ii: list)
	{	
		std::cout<<ii<<" , ";
	}
	
	std::cout<<endl;
}


void Stampa_vettore(int V[], int n)
{
	std::cout<<"-- Sorted -- "<< std::endl << std::endl;
	
	for (int ii=0; ii<n; ++ii)
	{
		std::cout<<ii<<" : "<<V[ii]<<std::endl;
	}
}
