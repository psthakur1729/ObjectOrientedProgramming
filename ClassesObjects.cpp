#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class YoutubeChannel //represents template or a blueprint
{
public: //default access specifier is private
    string name;
    string ownerName;
    int subscriberCount;
    vector<string> PublishedVideoTitles;
};

int main()
{
    YoutubeChannel ytChannel; //object an instance of a class
    ytChannel.name = "CodeBeast";
    ytChannel.ownerName = "Prashant Singh Thakur";
    ytChannel.subscriberCount = 10000;
    ytChannel.PublishedVideoTitles = {"C++", "Go tutorial", "OOPS in C++"};
    cout << ytChannel.name << endl;
    cout << ytChannel.ownerName << endl;
    cout << ytChannel.subscriberCount << endl;
    for (auto s : ytChannel.PublishedVideoTitles)
        cout << s << endl;
}