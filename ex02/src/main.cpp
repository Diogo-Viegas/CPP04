#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include <iostream>
void testArray(void)
{
    std::cout << BOLD "=== 2. TEST SUBJECT (Animals Array and Destruction) ===" RESET << std::endl;
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\n--- Deleting as Animals ---" << std::endl;
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
}
void testDeepCopy(void)
{

    std::cout << BOLD "\n=== 3. DEEP COPY TEST ===" RESET << std::endl;
    {
        std::cout << "Creating original Dog..." << std::endl;
        Dog originalDog;
     
        
        std::cout << "Creating a copy via Copy Constructor..." << std::endl;
        Dog copyDog = originalDog;
        
        std::cout << "Creating a Dog and testing Assignment Operator..." << std::endl;
        Dog assignedDog;
        assignedDog = originalDog;

       
        std::cout << " ==== THOUGHTS ==== " << std::endl;
        std::cout << originalDog.getType() << " thought -> " << originalDog.think(12) << std::endl;
        std::cout << copyDog.getType() << " thought -> " << copyDog.think(34) << std::endl;
        std::cout << assignedDog.getType() << " thought -> " << assignedDog.think(23) << std::endl;

         std::cout << "\n=== Check Brain Memory Adresses ===" << std::endl;
        std::cout << "Original Brain Address: " << originalDog.getBrain() << std::endl;
        std::cout << "Copy Brain Address:     " << copyDog.getBrain() << std::endl;
        std::cout << "Assigned Brain Addres: " << assignedDog.getBrain() << std::endl;
        //cat
    
        std::cout << "Creating original Cat..." << std::endl;
        Cat originalCat;
     
        
        std::cout << "Creating a copy via Copy Constructor..." << std::endl;
        Cat copyCat= originalCat;
        
        std::cout << "Creating a Cat and testing Assignment Operator..." << std::endl;
        Cat assignedCat;
        assignedCat = originalCat;

       
        std::cout << " ==== THOUGHTS ==== " << std::endl;
        std::cout << originalCat.getType() << " thought -> " << originalCat.think(2) << std::endl;
        std::cout << copyCat.getType() << " thought -> " << copyCat.think(5) << std::endl;
        std::cout << assignedCat.getType() << " thought -> " << assignedCat.think(93) << std::endl;

         std::cout << "\n=== Check Brain Memory Adresses ===" << std::endl;
        std::cout << "Original Brain Address: " << originalCat.getBrain() << std::endl;
        std::cout << "Copy Brain Address:     " << copyCat.getBrain() << std::endl;
        std::cout << "Assigned Brain Addres: " << assignedCat.getBrain() << std::endl;
    }
}
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
    testArray();
    testDeepCopy();
    return 0;
}
