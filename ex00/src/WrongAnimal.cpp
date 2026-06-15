#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("Default")
{
    std::cout << RED "WrongAnimal default constructor called" RESET << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << RED "WrongAnimal copy constructor called" RESET << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << RED "WrongAnimal copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << RED << _type << " says WRONG ANIMAL SOUND !!!! " << RESET << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (_type);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << RED "WrongAnimal default Destructor called" RESET<< std::endl;
} 