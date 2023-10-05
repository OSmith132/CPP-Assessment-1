
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	//excise2
	//vector

	/*vector<unsigned> grade{ 100, 98, 15, 30, 25, 70, 82, 66, 78, 40 };
	vector<unsigned> scores(11, 0);

	for (auto i : grade)
	{
		++scores[i / 10];
	}
	string result;
	for (auto j : scores)
		cout << j << "";
	cout << endl;*/

	//excise 3 
	char buf[1024];
	string filename = "input.txt";
	ifstream myFile(filename);  // filename

	int numberOfWords = 0;
	int numberOfSentences = 0;
	vector< pair<string,int>> wordList;

	
	if (myFile.is_open()) {

		while (!myFile.eof()) {
			myFile.getline(buf, 1024);//Extracts characters from the stream as unformatted input and stores them into buf as a c-string 
			//until either the extracted character is '\n', or 1024 characters have been written to buf .
			cout << buf << endl;

			string temp;
			stringstream stream(buf);

			while(getline(stream, temp, ' ')) {

				

				for (int i = 0; i < temp.length() - 1; i++) {
					if (ispunct(temp[i])) {

						if (temp[i] == '.') {
							numberOfSentences++;
						}

						temp.erase(i, 1);
					}
				}

				cout << temp << endl;

				for (pair<string,int> word : wordList) {
					if (word.first == temp) {
						word.second++;
					}
					else {
						cout << "word Second";
						wordList.push_back(make_pair(temp, 1));
					}
				}
				numberOfWords++;
			}

		}
		myFile.close();
	}

	cout << "number of sentences is " << numberOfSentences << endl;
	cout << "number of words is " << numberOfWords << endl;
	for (pair<string,int> word : wordList) {
		cout << word.first << " " << word.second << endl;
	}


	return 0;
}
