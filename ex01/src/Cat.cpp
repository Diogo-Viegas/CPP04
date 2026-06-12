#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout << YELLOW "Cat default constructor called" RESET << std::endl;
    _type = "Cat";
    _brain = new Brain();
}
Cat::Cat(const Cat &obj): Animal()
{
    std::cout << YELLOW "Cat copy constructor called" RESET << std::endl;
    *this = obj;
}
Cat& Cat::operator=(const Cat &obj)
{
    std::cout << YELLOW "Cat copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout << YELLOW << _type << " says MEOW" << RESET << std::endl;
}

Cat::~Cat()
{
    std::cout << YELLOW "Cat default Destructor called" RESET << std::endl;
    delete _brain;
} 