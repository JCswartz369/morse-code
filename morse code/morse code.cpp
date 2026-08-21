#include <iostream>
using namespace std;


int main()
{
	string morseCode;
	char letter;
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	string morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

	cout << "Type a letter to convert to morse code: " << endl;
	cin >> letter;


		for (int i = 0; i < 26; i++) {

			if (letter == alphabet[i]) {
				cout << morse[i] << endl;

			}

		}

	
}