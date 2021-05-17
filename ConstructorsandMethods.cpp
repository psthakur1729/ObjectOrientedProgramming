#include <iostream>
#include <vector>

using namespace std;
//keep the code DRY-dont repeat yourself
class YoutubeChannel
{
public:
    string name;
    string ownerName;
    int subscriberCount;
    vector<string> PublishedVideoTitles;
    YoutubeChannel(string n, string o) //when we create a channel it auto sets these var
    {
        name = n;
        ownerName = o;
        subscriberCount = 0;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Owner:" << ownerName << endl;
        cout << "Total subscribers:" << subscriberCount << endl;
        cout << "Published videos:" << endl;
        for (auto s : PublishedVideoTitles)
            cout << s << endl;
    }
};

int main()
{
    YoutubeChannel ytChannel("CodeBeast", "Prashant Singh Thakur");
    YoutubeChannel ytChannel2("LofiBeats", "Marshmello");
    ytChannel.subscriberCount = 12300;
    ytChannel.PublishedVideoTitles = {"C++", "Go tutorial", "OOPS in C++"};
    ytChannel2.subscriberCount = 1992;
    ytChannel2.PublishedVideoTitles = {"Save your tears", "Starboy", "All I want", "Dancing with your ghost"};
    ytChannel.getInfo();
    cout << endl;
    ytChannel2.getInfo();
}