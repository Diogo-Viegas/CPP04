#include "Dog.hpp"

Dog::Dog():Animal()
{
    std::cout << "Dog default onstructor called" << std::endl;
    _type = "Dog";
}
Dog::Dog(const Dog &obj): Animal()
{
    std::cout << "Dog copy constructor called " << std::endl;
    *this = obj;
}
Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << _type << " says WOOF" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog default Destructor called" << std::endl;
} 