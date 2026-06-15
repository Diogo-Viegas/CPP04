#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void testSubject(void)
{
    std::cout << "\n=== 3. SUBJECT WITH SIMPLE POINTERS ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j; // Não deve criar leaks
    delete i;

}
void testArray(void)
{
    std::cout << "=== 1. TEST SUBJECT (Animals Array and Destruction) ===" << std::endl;
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

    std::cout << "\n=== 2. DEEP COPY TEST ===" << std::endl;
    {
        std::cout << "Creating original Dog..." << std::endl;
        Dog originalDog;
     
        
        std::cout << "Creating a copy via Copy Constructor..." << std::endl;
        Dog copyDog = originalDog;
        
        std::cout << "Creating a Dog and testing Assignment Operator..." << std::endl;
        Dog assignedDog;
        assignedDog = originalDog;

       
        std::cout << " ==== THOUGHTS ==== " << std::endl;
        std::cout << originalDog.getType() << " thought -> " << originalDog.getIdea(12) << std::endl;
        std::cout << copyDog.getType() << " thought -> " << copyDog.getIdea(34) << std::endl;
        std::cout << assignedDog.getType() << " thought -> " << assignedDog.getIdea(23) << std::endl;

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
        std::cout << originalCat.getType() << " thought -> " << originalCat.getIdea(2) << std::endl;
        std::cout << copyCat.getType() << " thought -> " << copyCat.getIdea(5) << std::endl;
        std::cout << assignedCat.getType() << " thought -> " << assignedCat.getIdea(93) << std::endl;

         std::cout << "\n=== Check Brain Memory Adresses ===" << std::endl;
        std::cout << "Original Brain Address: " << originalCat.getBrain() << std::endl;
        std::cout << "Copy Brain Address:     " << copyCat.getBrain() << std::endl;
        std::cout << "Assigned Brain Addres: " << assignedCat.getBrain() << std::endl;
    }
}
int main()
{

    testSubject();
    testArray();
    testDeepCopy();
    


    return 0;
}