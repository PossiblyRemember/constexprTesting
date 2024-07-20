#include <iostream>
#include <fstream>
#include <string>
using namespace std;

constexpr void loop(ofstream* file) {
	constexpr ofstream *file << "new";
	unsigned int m = 10000000;
	for (unsigned int ri = 0; ri < m; ri++) {
		for (unsigned int i = 0; i < ri + 1; i++) {

		}
		cout << "\n";
	}
}

int main(){
	ofstream outfile ("newFile.txt");
	ofstream *ofptr = &outfile;
	loop(ofptr);
}

