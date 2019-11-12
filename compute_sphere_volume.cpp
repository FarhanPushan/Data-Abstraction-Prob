
#include <iostream> //Enables input output
//using namespace std; //opens the standard namespace



int main()
//Computes the volume of a sphere of a given radius

{
    const double PI = 3.14159;
    double radius;

    std::cout << "Enter the radius of the sphere:";
    std::cin >> radius;

    double volume = 4 *PI*radius*radius*radius/3;
    std::cout << "The volume of a sphere of radius " << radius << " inches is " << volume
    << " cubic inches. \n";      
}