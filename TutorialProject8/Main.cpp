#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{

	ofstream outputFile;
	ifstream inputFile;

/*	outputFile.open("myFile.txt");
	if (outputFile.fail()) {
		perror("myFile.txt");
		return 1;
	}
	outputFile << "Hello World!\n";
	outputFile.close();


	cout << input; */

/*	inputFile.open("myFile.txt");
	if (inputFile.fail()) {
		perror("myFile.txt");
		return 1;
	}

	string input;
//	getline(inputFile, input);
	while (getline(inputFile, input)) {
		cout << input << endl;
	} */


	while (true) {
		int a;
		if (!(cin >> a)) {
			cout << "THAT IS BAD";
			system("PAUSE");
			cin.clear();
			cin.ignore(9999, '\n');

		}
		cout << a;
	}

	system("PAUSE");
	return 0;
}