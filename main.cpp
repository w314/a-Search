#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::cout;
using std::vector;
using std::ifstream;
using std::string;


void PrintBoard(vector<vector<int>> board) {
	for(vector<int> row : board) {
		for(int cell : row) {
			cout << cell;
		}
		cout << "\n";
	}
	cout << "\n";
}

int main() {

	string path = "./1.board";
	ifstream my_file(path); 

	if(my_file) {
		string line;
		while(getline(my_file, line)) {
			cout << line << "\n";
		}
	}
	vector<vector<int>> board {
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0}
	};

	PrintBoard(board);
}