#include <iostream>

int main(){

    //simple printing
    std::cout << "I like pizza!" << "\n";
    std::cout << "It's really good" << "\n";

    int x;
    x = 30;
    int y = 6;
    int sum = x+y;
    double age = 25.5;
    std::cout << sum <<"\n";

    //char
    char a = 'a';
    std::cout << a << "\n";

    //string
    std::string name = "Bro rocks";
    std::cout << name << "\n";
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old \n";

    //const
    double pi = 3.14;
    double radius = 10;
    double circumference = 2*pi*radius;

    std::cout << "The circumference is " << circumference << "\n";

    const double PI = 3.14159;
    double circumference_2 = 2*PI*radius;

    std::cout << "The circumference is " << circumference_2 << "\n";

    return 0;
}