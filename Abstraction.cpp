#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Smartphone
{
    string type, brand, IMEI;
    int manfacID;

public:
    void makeCall()
    {
        cout << "Calling..\n";
    }
    virtual void TakeASelfie() = 0;
    virtual void AppStore() = 0;
};

class Android : public Smartphone
{
    void TakeASelfie()
    {
        cout << "Android took a selfie...\n";
    }
    void AppStore()
    {
        cout << "Google play store...\n";
    }
};
class iOS : public Smartphone
{
    void TakeASelfie()
    {
        cout << "Apple cam took a selfie...\n";
    }
    void AppStore()
    {
        cout << "Apple app store...\n";
    }
};
/*Abstraction is one of the most important Object-Oriented Programming principles that
 confuses many beginners. The idea of abstraction is to show only the most important 
 and essential information while hiding the unimportant and complex details.

There are many examples of abstraction in real life:
- When you drive a car, you don't need to know how the internal components of the car 
work in order to be able to drive it. All of that complexity is hidden behind simple 
procedures that make the process of driving a car easier.

The same rule applies in programming. When we make a class that has a lot of 
functionalities, we can hide the inner details and complex logic related to these 
functionalities behind a simple interface that will make it easy for other developers 
to use our class, without having to know how those functionalities are implemented.
*/

int main()
{
    //user does not need to know how Android or how Apple implements Selfies
    //Android developer does not need to know how Selfie() is implemented in iOS
    Smartphone *s1 = new Android();
    Smartphone *s2 = new iOS();
    s1->TakeASelfie();
    s2->TakeASelfie();
    s1->makeCall();
    s2->AppStore();
    return 0;
}