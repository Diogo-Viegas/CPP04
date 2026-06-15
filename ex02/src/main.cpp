#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include <iostream>

void testAbstractClassBehavior(void)
{
    std::cout << BOLD << "\n=======================================================" << RESET << std::endl;
    std::cout << BOLD << "  TEST 1: ABSTRACT CLASS & POLYMORPHISM VERIFICATION   " << RESET << std::endl;
    std::cout << BOLD << "=======================================================" << RESET << std::endl;

    // If you uncomment the line below, the program MUST FAIL to compile.
    //const Animal* testAbstract = new Animal(); 
    
    std::cout << GREEN << "Creating instances of concrete derived classes via Base Pointer..." << RESET << std::endl;
    const Animal* dogPointer = new Dog();
    const Animal* catPointer = new Cat();

    std::cout << GREEN << "\nTesting virtual function overrides (makeSound):" << RESET << std::endl;
    std::cout << "Dog Pointer: ";
    dogPointer->makeSound();
    std::cout << "Cat Pointer: ";
    catPointer->makeSound();

    std::cout << GREEN << "\nCleaning up memory allocated on the heap:" << RESET << std::endl;
    delete dogPointer;
    delete catPointer;
}


int main()
{
    testAbstractClassBehavior();

    return 0;
}
