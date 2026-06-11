#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    std::cout << "WrongCat default onstructor called" << std::endl;
    _type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &obj): WrongAnimal()
{
    std::cout << "WrongCat copy constructor called " << std::endl;
    *this = obj;
}
WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout << _type  << "says MEOW" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default Destructor called" << std::endl;
} 