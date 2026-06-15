#include "Dog.hpp"

Dog::Dog():Animal()
{
    std::cout << BLUE "Dog default constructor called" RESET << std::endl;
    _type = "Dog";
    _brain = new Brain();
}
Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << BLUE "Dog deep copy constructor called" RESET << std::endl;
    this->_brain = new Brain(*(copy._brain));
}
Dog& Dog::operator=(const Dog &obj)
{
    std::cout << BLUE "Dog copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
        if(this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*(obj._brain));
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << BLUE << _type << " says WOOF" << RESET << std::endl;
}
std::string Dog::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (_brain->_ideas[idea_nr]);
	else
		return ("Dog brain just have 100 ideas");
}
Brain * Dog::getBrain() const
{
    return (this->_brain);
}
Dog::~Dog()
{
    std::cout << BLUE "Dog default Destructor called" RESET << std::endl;
    delete _brain;
} 