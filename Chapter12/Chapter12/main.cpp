#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;
/*
void dump(list<string>&I) {
	list<string>::iterator iter = I.begin();

	while (iter != I.end()) {
		cout << *iter << endl;
		iter++;
	}
}
*/
class Word{
private:
	string word;
public:
	Word(string word) {
		this->word = word;
	}
	string getWord() {
		return this->word;
	}
};
void main() {
	map<char, list<Word>> m;

	list<Word> aList;
	list<Word> bList;

	aList.push_back(Word("apple"));
	aList.push_back(Word("avoid"));
	aList.push_back(Word("appear"));

	bList.push_back(Word("bread"));
	bList.push_back(Word("bring"));
	bList.push_back(Word("bow"));

	m['a'] = aList;
	m['b'] = bList;

	map<char, list<Word>>::const_iterator iter = m.begin();

	while (iter != m.end()) {
		cout << iter->first << ":" << endl;

		list<Word> temp = iter -> second;
		list<Word>::const_iterator iter_list = temp.begin();

		while (iter_list != temp.end()) {
			Word word = *iter_list;
			cout << word.getWord() << ",";
			iter_list++;
		}
		cout << "\n===" << endl;
		iter++;
	}
	/*
	map<string, int> m;

	m["seoul"] = 100;
	m["daegu"] = 120;
	m["busan"] = 200;

	cout << "Train to seoul = " << m["seoul"] << "$" << endl;
	cout << "Train to daegu = " << m["daegu"] << "$" << endl;
	cout << "Train to busan = " << m["busan"] << "$" << endl;
	*/
	/*
	list<string> names;
	names.insert(names.begin(), "KonKuk");
	names.insert(names.end(), "University");
	names.insert(names.end(), "SCLAB");
	names.insert(names.end(), "CSY");
	dump(names);
	cout << "===" << endl;
	names.reverse();
	dump(names);
	*/
/*
	vector<int> v;

	v.push_back(10);//맨 뒤에 추가
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);//해당 인덱스값에 값을 끼워넣음.
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
*/
}