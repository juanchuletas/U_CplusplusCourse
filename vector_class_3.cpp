#include<iostream>
#include<vector>


int main()
{
	//Creating a vector of integers
	std::vector<int> vect;
	//Creating its iterator
	std::vector<int>::iterator iter;

	std::cout<<"Your vector has "<<vect.size()<<" elements\n";

	//Adding 23 to the vector
	vect.assign(1,23);

	for(iter = vect.begin(); iter!=vect.end(); iter++)
		std::cout<<*iter<<" ";
	std::cout<<"\n";


	std::cout<<"Adding four elements to your vector\n";

	vect.push_back(24);
	vect.push_back(25);
	vect.push_back(26);
	vect.push_back(27);


	for(iter = vect.begin(); iter!=vect.end(); iter++)
		std::cout<<*iter<<" ";
	std::cout<<"\n";

	return 0;

}
