 #include <iostream>
 #include <string>
#include <iomanip>
 #include <sstream>

 
 int main ()
 {
     double n_length,n_width;
     std::string s_length,s_width;
     std::cout<<"Enter the length of a room\n";
     std::getline(std::cin,s_length);
     std::cout<<"Enter the width of a room\n";
     std::getline(std::cin,s_width);
     
     std::stringstream(s_length)>>n_length;
     std::stringstream(s_width)>>n_width;
     
     std::cout<<"The area of the room is: "<<std::fixed<<std::setprecision(6)<<n_length*n_width<<std::endl;

     return 0;
 }
