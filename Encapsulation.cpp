#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class YoutubeChannel
{
private:
    string name;
    string ownerName;
    int subscriberCount;
    vector<string> PublishedVideoTitles;

public:
    //we create public methods to access the private var
    YoutubeChannel(string n, string o)
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
    void Subscribe()
    {
        subscriberCount++;
    }
    void Unsubscribe()
    {
        if (subscriberCount > 0)
            subscriberCount--;
    }
    void publishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YoutubeChannel ytChannel("CodeBeast", "Prashant Singh Thakur");
    YoutubeChannel ytChannel2("LofiBeats", "Marshmello");
    ytChannel.getInfo();
    cout << endl;
    ytChannel2.getInfo();
}