#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("Default")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal constructor called " << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal SOUND !!!! " << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (_type);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default Destructor called" << std::endl;
} 