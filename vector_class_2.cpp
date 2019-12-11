#include<iostream>
#include<vector>


int main()
{
	//Declaringthe vector 
	std::vector<int> vect;
	//Creating the iterator for the vector
	std::vector<int>::iterator iter;

	std::cout<<"The vector has "<<vect.size()<<" elements\n";

	std::cout<<"Adding four elements to the vector\n";
	//Assigning the value of 3 to 4 elements of the vector
	//
	vect.assign(4,3);
	std::cout<<"The vector has "<<vect.size()<<" elements\n";

	//Printing the contents of vector
	//
	std::cout<<"Vector has these elements\n";
	for(iter = vect.begin(); iter!=vect.end(); iter++)
		std::cout<<*iter<<" ";
	std::cout<<"\n";

	return 0;





}
