#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << BOLD << animal->getType() << RESET << std::endl;
    std::cout << BOLD << dog->getType() << RESET << std::endl;
    std::cout << BOLD << cat->getType() << RESET << std::endl;
    std::cout << BOLD << wrongAnimal->getType() << RESET << std::endl;
    std::cout << BOLD << wrongCat->getType() << RESET << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    wrongAnimal->makeSound();
    wrongCat->makeSound();

    delete animal;
    delete dog;
    delete cat;
    delete wrongAnimal;
    delete wrongCat;
    return (0);
}