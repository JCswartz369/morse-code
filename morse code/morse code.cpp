#include <iostream>
using namespace std;


int main()
{
	string morseCode;
	string word;
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	string morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

	cout << "Type to convert to morse code (lower case only): " << endl;
	cin >> word;


		for (int i = 0; i < word.length(); i++) {

			for (int j = 0 ;j<26;j++){
				if (word[i] == alphabet[j]) {
					morseCode += morse[j] + " ";
					cout << word[i] << ": "<<morse[j] << endl;
					
				}
			}
		}
		cout << "Morse code: " << morseCode << endl;

}
