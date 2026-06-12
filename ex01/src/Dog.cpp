#include "Dog.hpp"

Dog::Dog():Animal()
{
    std::cout << BLUE "Dog default constructor called" RESET << std::endl;
    _type = "Dog";
}
Dog::Dog(const Dog &obj): Animal()
{
    std::cout << BLUE "Dog copy constructor called" RESET << std::endl;
    *this = obj;
}
Dog& Dog::operator=(const Dog &obj)
{
    std::cout << BLUE "Dog copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << BLUE << _type << " says WOOF" << RESET << std::endl;
}

Dog::~Dog()
{
    std::cout << BLUE "Dog default Destructor called" RESET << std::endl;
} 