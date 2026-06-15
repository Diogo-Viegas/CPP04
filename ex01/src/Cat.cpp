#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout << YELLOW "Cat default constructor called" RESET << std::endl;
    _type = "Cat";
    _brain = new Brain();
}
Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << YELLOW "Cat deep copy constructor called" RESET << std::endl;
    this->_brain = new Brain(*(copy._brain));
    this->_type = copy._type;
}
// Cat::Cat(const Cat &copy) : Animal(copy)
// {
//      std::cout << YELLOW "Cat copy constructor called" RESET << std::endl;
//     *this = copy;
// }
Cat& Cat::operator=(const Cat &obj)
{
    std::cout << YELLOW "Cat copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        _type = obj._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*(obj._brain));
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout << YELLOW << _type << " says MEOW" << RESET << std::endl;
}

std::string Cat::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (_brain->_ideas[idea_nr]);
	else
		return ("Cat brain just have 100 ideas");
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}
Cat::~Cat()
{
    std::cout << YELLOW "Cat default Destructor called" RESET << std::endl;
    delete _brain;
} 