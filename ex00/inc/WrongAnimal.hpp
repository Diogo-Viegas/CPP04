#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#define RED     "\033[31m"
#define RESET   "\033[0m"
#define CYAN    "\033[36m"
class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        void makeSound() const;
        std::string getType() const;
        ~WrongAnimal();
};
#endif