#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;

    meta->makeSound();
    i->makeSound(); 
    j->makeSound();
    l->makeSound();
    k->makeSound();
    return (0);
}