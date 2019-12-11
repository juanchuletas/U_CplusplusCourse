#include<iostream>
#include<string>
#include <sstream>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    
    std::cin>>givenInt;
    std::cin>>givenFloat;
    std::cin>>givenDouble;
    //We need to use cin.ignore so cin will ignore
   //the characters in the buffer leftover
   //from the givenDouble
    std::cin.ignore();
    std::cin>>givenChar;
    std::cin.ignore();
    std::getline(std::cin,givenString);
    
    
    std::cout<<"The value of intVal is = "<<givenInt<<"\n";
    std::cout<<"The addressof intVal is = "<<&givenInt<<"\n";
    
    std::cout<<"The value of stringVal is = "<<givenString<<"\n";
    std::cout<<"The addressof stringVal is = "<<&givenString<<"\n";
    
    
    return 0;
}
