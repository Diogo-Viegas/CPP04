#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog:public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        void makeSound() const;
        std::string getIdea(int idea_nr) const;
        Brain * getBrain() const;
        ~Dog();
        
};

#endif