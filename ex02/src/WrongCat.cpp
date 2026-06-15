#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    std::cout << CYAN << "WrongCat default constructor called" << RESET << std::endl;
    _type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &obj): WrongAnimal()
{
    std::cout << CYAN << "WrongCat copy constructor called " << RESET << std::endl;
    *this = obj;
}
WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    std::cout << CYAN << "WrongCat copy assignment operator called" << RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout << CYAN << _type  << "says MEOW" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << CYAN << "WrongCat default Destructor called" << RESET << std::endl;
} 