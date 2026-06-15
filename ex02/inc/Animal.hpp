#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"
class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        virtual void makeSound() const = 0;
        std::string getType() const;
        virtual ~Animal();
};
#endif