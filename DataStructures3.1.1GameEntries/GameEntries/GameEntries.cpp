#include <iostream>
#include<string>

using namespace std;

class GameEntry {
public:
	GameEntry(const string& n = "", int s = 0);
	string getName() const;
	int getScore() const;
private:
	string name;
	int score;
};



GameEntry::GameEntry(const string& n, int s)
	: name(n), score(s) {}

string GameEntry::getName()const { return name; }
int GameEntry::getScore() const { return score; }



class Scores {
public:
	Scores(int maxEnt = 10);
	~Scores();
	void add(const GameEntry& e);
	GameEntry remove(int i);
	string getNumberName(int m);
	int getNumberScore(int l);
private:
	int maxEntries;
	int numEntries;
	GameEntry* entries;
};



Scores::Scores(int maxEnt) {
	maxEntries = maxEnt;
	entries = new GameEntry[maxEntries];
	numEntries = 0;
}

Scores::~Scores() {
	delete[] entries;
}



void Scores::add(const GameEntry& e) {
	int newScore = e.getScore();
	if (numEntries == maxEntries) {
		if (newScore <= entries[maxEntries - 1].getScore())
			return;
	}
	else numEntries++;

	int i = numEntries - 2;
	while (i >= 0 && newScore > entries[i].getScore())
	{
		entries[i + 1] = entries[i];
		i--;
	}
	entries[i + 1] = e;
}



GameEntry Scores::remove(int i) {
	GameEntry e = entries[i];
	for (int j = i + 1; j < numEntries; j++)
		entries[j - 1] = entries[j];
	numEntries--;
	return e;
}



string Scores::getNumberName(int m) {
	string nameReturn;
	nameReturn = entries[m].getName();

	return nameReturn;
}

int Scores::getNumberScore(int l) {
	int scoreReturn;
	scoreReturn = entries[l].getScore();

	return scoreReturn;
}



int main() {
	Scores scr1;

	scr1.add(GameEntry("CDY", 50));
	scr1.add(GameEntry("ABC", 70));
	scr1.add(GameEntry("DEF", 30));
	scr1.add(GameEntry("GHI", 20));
	scr1.add(GameEntry("JKL", 90));
	scr1.add(GameEntry("MNO", 70));
	scr1.add(GameEntry("PQR", 60));
	scr1.add(GameEntry("STU", 10));
	scr1.add(GameEntry("VWX", 80));
	scr1.add(GameEntry("XYZ", 30));

	for (int i = 0; i < 10; i++) {
		cout << scr1.getNumberName(i);
		cout << "	";
		cout << scr1.getNumberScore(i) << endl;
	}

	return 0;
}