#include <iostream>
using namespace std;

/*C++ Virtual functions are functions defined in the base class and redefined 
in the derived class, whose main purpose is achieving runtime-polymorphism. 
Virtual functions are defined with the "virtual" keyword in the base class.
*/

class Instrument
{
public:
    //using virtual keyword the most derived version of this func will be executed
    //does derived class has its own implementation will be checked??

    virtual void makeSound()
    {
        cout << "Instrument is playing...\n";
    }
};

class Flute : public Instrument
{
public:
    void makeSound()
    {
        cout << "Flute is playing...\n";
    }
};
int main()
{
    Instrument *i = new Flute();
    i->makeSound();
    return 0;
}