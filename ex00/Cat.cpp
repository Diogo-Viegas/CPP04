#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout << "Cat default onstructor called" << std::endl;
    _type = "Cat";
}
Cat::Cat(const Cat &obj): Animal()
{
    std::cout << "Cat copy constructor called " << std::endl;
    *this = obj;
}
Cat& Cat::operator=(const Cat &obj)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout << _type  << "says MEOW" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat default Destructor called" << std::endl;
} 