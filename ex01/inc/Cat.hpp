#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat:public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        ~Cat();
        std::string think(int idea_nr) const;
        Brain *getBrain() const;
        void makeSound(void) const;
};

#endif