#include <iostream>
#include <list>
using namespace std;

/*The word "polymorphism" means to have many forms.
Polymorphism usually occurs when we have multiple classes that are
 related by inheritance. Because of this, two derived classes can 
 define a method that has the same name, but the different implementation (behavior)
 
 If you ask a question like "What is a set?" in the forum topic "Tennis", you'll get
  one answer and if the forum topic is "Data structures" you'll get an entirely 
  different answer. That's because the people who read these two topics process the 
  same question in different ways. This is basically what polymorphism does!*/

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
    void Subscribe()
    {
        SubscribersCount++;
    }
    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
    void checkAnalytics()
    {
        if (ContentQuality < 5)
            cout << Name << " has a poor content quality.\n";
        else
            cout << Name << " has a great content.\n";
    }
};

class CookingYouTubeChannel : public YouTubeChannel
{
public:
    CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        ContentQuality++;
    }
};
class MusicYouTubeChannel : public YouTubeChannel
{
public:
    MusicYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName)
    {
    }
    void Practice()
    {
        cout << OwnerName << " is practicing music, learning new songs, experimenting with chords..." << endl;
        ContentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cookingYT("Amy's Kitchen", "Amy");
    MusicYouTubeChannel musicYT("Mike's world", "Mike");
    cookingYT.Practice();
    cookingYT.Practice();
    musicYT.Practice();
    musicYT.Practice();
    musicYT.Practice();
    musicYT.Practice();
    musicYT.Practice();
    YouTubeChannel *yt1 = &cookingYT;
    YouTubeChannel *yt2 = &musicYT;
    yt1->checkAnalytics();
    yt2->checkAnalytics();
}