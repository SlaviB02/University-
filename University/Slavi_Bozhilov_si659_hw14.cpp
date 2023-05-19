#include <iostream>
#include<string>
#include <map>
#include <algorithm>
#include <fstream>
using namespace std;
class SongClip {
    string name;
    string performer;
    int recordingYear;
    int uploadYear;
public:
    SongClip(string n = "Thunderstruck", string p="AC/DC",int r_year=1989,int u_year=1990) :name(n), performer(p),recordingYear(r_year),uploadYear(u_year) {}
    string getName() const {
        return name;
    }
    string getPerformer() const {
        return performer;
    }
    int getRecordingYear()const {
        return recordingYear;
    }
    int getUploadYear()const {
        return uploadYear;
    }
    string toString()const {
        return "Song " + name + " by " + performer + " recorded in " + to_string(recordingYear) + " uploaded in " + to_string(uploadYear);
    }
    bool operator<(const SongClip& second)  const {
        return this->recordingYear < second.recordingYear;
    }
    bool operator>(const SongClip& second)const {
        return !(*this < second);
    }
};
void print(map<SongClip, int> myList) {
    for (auto a_pair : myList) {
        cout << a_pair.first.toString() << " ---> " << a_pair.second << endl;
    }
    cout << endl;
}

int main()
{
    map<SongClip, int> myPlayList{
        {SongClip(),4000},
        {SongClip("Sorry","Justin Bieber",2020,2021),5000},
        {SongClip("Hotline","Drake",2015,2016),10000}
    };
    print(myPlayList);
    pair<SongClip, int>Song1{SongClip("MockingBird","Eminem",2000,2002),60000 };
    pair<SongClip, int>Song2{SongClip("SpaceBound","Eminem",2005,2007),100000 };
    myPlayList.insert(Song1);
    myPlayList.insert(Song2);
    print(myPlayList);
    auto it1 = myPlayList.begin();
    advance(it1, 1);
    myPlayList.erase(it1);
    print(myPlayList);
    auto it2 = myPlayList.end();
    advance(it2, -2);
    it2->second +=10;
    print(myPlayList);
    ofstream fout("file.dat");
    for (auto a_pair : myPlayList) {
        fout << a_pair.first.toString() << " ---> " << a_pair.second << endl;
    }
    fout.close();
    string songName; 
    cout << "Song Name?" << endl;
    cin >> songName;

    auto it3 = find_if(myPlayList.begin(), myPlayList.end(), [songName](const pair<SongClip, int>& p)
        {return p.first.getName() == songName; });
    if (it3 != myPlayList.end()) {
        cout << it3->first.toString()<< endl;
    }
}
