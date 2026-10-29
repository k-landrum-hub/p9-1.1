/*
* characters and vowels
* 
*By korbin Landrum
* 
* 10/22/26
*/

#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main(void) {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q") break;
		cout << "Vowels: " << countVowel(input) <<  endl; // do something with input
	}
	return 0;
}


int countVowel(string str) {
	int count = 0;

	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'A'|| str[i] == 'e'|| str[i] == 'E'|| str[i] == 'i'|| str[i] == 'I'|| 
			str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
			count++;
		}
	}

	return count;
}