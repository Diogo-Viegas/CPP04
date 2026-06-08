#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // deve emitir o som do gato!
    j->makeSound();
    meta->makeSound();

// ... não esqueça de deletar depois!
    return (0);
}