#include <iostream>
#include <vector>


int main()
{
	//Creating a vector of integers
	std::vector<int> vectorInts;
	std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

	//Changing the size of the vector
	vectorInts.resize(6);
	std::cout<<"vectorInts now has "<<vectorInts.size()<<" elements\n";


	return 0;
}
