#include <iostream>

using std::cout;
using std::endl;
using std::string;

/*Abstract class in C++ is a class that has at least one pure virtual function. 
The classes which inherit the abstract class must provide a definition for the pure 
virtual functions, otherwise, they would be abstract themselves and you wouldn't be
 able to instantiate them.
The main purpose of an abstract class is to provide an appropriate base class from 
which other classes can inherit.

Pure virtual functions in C++ (abstract function) in C++ is a virtual function for
 which we don't write implementation in the base class, but we only declare it. 
 In order to declare a pure virtual function, you need to assign 0 in the declaration
*/

//An abstract class
class Instrument
{
private:
    string name;
    string musicType;

public:
    //pure virtual function
    virtual void makeSound() = 0;
};

/*
if we try to keep the makeSound() undefined in derived class we get an error:
object of abstract class type "Guitar" is not allowed: -- pure virtual function 
"Instrument::makeSound" has no overriderC/C++(322)
*/

class Guitar : public Instrument
{
    void makeSound()
    {
        cout << "Guitar is playing...\n";
    }
};
class Flute : public Instrument
{
    void makeSound()
    {
        cout << "Flute is playing...\n";
    }
};

int main()
{
    Instrument *i = new Guitar();
    i->makeSound();
    return 0;
}