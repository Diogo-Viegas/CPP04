#include "Animal.hpp"

Animal::Animal():_type("Default")
{
    std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(const Animal &obj)
{
    std::cout << "Animal constructor called " << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal &obj)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "AU AU" << std::endl;
}
std::string Animal::getType() const
{
    return (_type);
}
Animal::~Animal()
{
    std::cout << "Animal default Destructor called" << std::endl;
} 