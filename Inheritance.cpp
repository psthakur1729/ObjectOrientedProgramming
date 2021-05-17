#include <iostream>
#include <vector>

using namespace std;
class YoutubeChannel
{
private:
    string name;
    int subscriberCount;
    vector<string> PublishedVideoTitles;

protected:
    string ownerName;

public:
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
        cout << "Videos:" << endl;
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

//we have inherited everything that base class has
class cookingYoutubeTutorial : public YoutubeChannel
{
public:
    cookingYoutubeTutorial(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }
    void newsLetter(string user, string email)
    {
        cout << "Hello " << user << " from " << ownerName << endl;
        cout << "Congratulations we'll be sending you DIY recipes on weekends on your email " << email << "\n";
    }
};

int main()
{
    cookingYoutubeTutorial channel1("Amy's Kitchen", "Amy");
    channel1.publishVideo("Chicken butter masala");
    channel1.publishVideo("Mexican chilli pepper cheese pizza");
    /* channel1.name = "Jack";
    This does not work as A base class's private members are never accessible 
    directly from a derived class, but can be accessed through calls to the public
     and protected members of the base class
    */

    channel1.Subscribe();
    channel1.Subscribe();
    channel1.getInfo();
    channel1.newsLetter("Prashant", "prashantst33@yahoo.in");
    YoutubeChannel sample("Udemy", "Brad");
    //sample does not has newsLetter in it.
}