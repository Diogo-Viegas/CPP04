#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"

void testSubject(void)
{
    std::cout << BOLD "=== 1. SUBJECT TESTS (Polymorphism with Pointers) ===" RESET << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();


    std::cout << "Type of i: " << i->getType() << " " << std::endl;
    std::cout << "Type of j: " << j->getType() << " " << std::endl;
    std::cout << "Sound of i: ";
    i->makeSound(); // Deve dar o som do Cat
    std::cout << "Sound of j: ";
    j->makeSound(); // Deve dar o som do Dog
    std::cout << "Sound of meta: ";
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
}
void testStack(void)
{
        std::cout << BOLD "\n=== 2. DIRECT INSTANTIATION TESTS (Stack) ===" RESET << std::endl;
        Dog dog_stack;
        Cat cat_stack;
        
        std::cout << "dog_stack type: " << dog_stack.getType() << std::endl;
        std::cout << "cat_stack type: " << cat_stack.getType() << std::endl;
        dog_stack.makeSound();
        cat_stack.makeSound();
}
void testCanonical(void)
{
    std::cout << BOLD "\n=== 3. CANONICAL FORM TESTS (Copy and Assignment) ===" RESET << std::endl;

        std::cout <<  "Creating an original Dog..." << std::endl;
        Dog original_dog;
        
        std::cout << "Creating a copy via Copy Constructor..." << std::endl;
        Dog copy_dog(original_dog);
        
        std::cout << "Creating a Dog and testing Assignment Operator..." << std::endl;
        Dog assigned_dog;
        assigned_dog = original_dog;
        
        std::cout << "Checking types and sounds of copies:" << std::endl;
        std::cout << "Copy: " << copy_dog.getType() << " -> "; copy_dog.makeSound();
        std::cout << "Assigned: " << assigned_dog.getType() << " -> "; assigned_dog.makeSound();
}
void testWrong(void)
{

    std::cout << BOLD "\n=== 4. WRONG ANIMAL / WRONG CAT TESTS ===" RESET << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << "Type of wrong_cat: " << wrong_cat->getType() << std::endl;
    
    std::cout << "Sound of wrong_meta: ";
    wrong_meta->makeSound();
    
    std::cout << "Sound of wrong_cat (WrongAnimal* pointer): ";
    wrong_cat->makeSound(); 
    std::cout << "Instantiating WrongCat directly on the Stack to see the difference:" << std::endl;
    WrongCat real_wrong_cat;
    std::cout << "Sound of real_wrong_cat (Direct object): ";
    real_wrong_cat.makeSound();
    delete wrong_meta;
    delete wrong_cat;
}
int main()
{
    testSubject();
    testStack();
    testCanonical();
    testWrong();


    return 0;
}
