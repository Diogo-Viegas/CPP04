#include "Animal.hpp"

Animal::Animal():_type("Default")
{
    std::cout << GREEN "Animal default constructor called" RESET << std::endl;
}
Animal::Animal(const Animal &obj)
{
    std::cout << GREEN "Animal copy constructor called" RESET << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal &obj)
{
    std::cout << GREEN "Animal copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void Animal::makeSound() const
{
    std::cout << GREEN "ANIMAL SOUND !!!! " RESET << std::endl;
}
std::string Animal::getType() const
{
    return (_type);
}
Animal::~Animal()
{
    std::cout << GREEN "Animal default Destructor called" RESET << std::endl;
} 