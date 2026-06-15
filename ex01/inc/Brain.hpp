#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
class Brain
{

public:
    Brain();
    Brain(const Brain &copy);
    Brain&operator=(const Brain & copy);
    ~Brain();
     std::string _ideas[100];

};
#endif