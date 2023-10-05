
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

class WordFreqPair {

public:
	string word;
	int Count;

	WordFreqPair(string newWord, int newCount) {
		word = newWord;
		Count = newCount;
	}

	//~WordFreqPair() {}

};


int main()
{
	
	char buf[1024];
	string filename = "input.txt";
	ifstream myFile(filename);  // filename

	int numberOfWords = 0;
	int numberOfSentences = 0;
	vector<WordFreqPair> wordList;

	

	
	if (myFile.is_open()) {

		while (!myFile.eof()) {
			myFile.getline(buf, 1024);//Extracts characters from the stream as unformatted input and stores them into buf as a c-string 
			//until either the extracted character is '\n', or 1024 characters have been written to buf .
			cout << buf << "\n\n";


			string temp;
			stringstream stream(buf); // buf turned into stream for easier reading of data
			

			while(getline(stream, temp, ' ')) { // seperates buf by space char to seperate words
				
				if (ispunct(temp.back())) { // checks and removes puctuation from end of string

					if (temp.back() == '.' || temp.back() == '!' || temp.back() == '?') {
						numberOfSentences++; // records number of sentence endings
					}

					temp.erase(temp.length()-1);
				}
				
				bool duplicate = false;
				if (!wordList.empty()) {


					for (int i = 0; i < wordList.size() - 1; i++) {
						
						if (wordList[i].word == temp) {
							wordList[i].Count++;

							duplicate = true;
							break;
						}
					}

					if (!duplicate) {
						wordList.push_back(WordFreqPair(temp, 1));
					}


				}
				else {
					wordList.push_back(WordFreqPair(temp, 1));
				}

				numberOfWords++;
			}

		}
		myFile.close();
	}

	cout << "number of sentences is " << numberOfSentences << endl;
	cout << "number of words is " << numberOfWords << endl;
	for (WordFreqPair word : wordList) {
		cout << word.word << "    " << word.Count << endl;
	}


	return 0;
}


