#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

	vector<vector<int>> board {
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 1, 0, 0, 0, 0},
		{0, 0, 0, 0, 1, 0}
	};

	cout << board.size() << " x " << board[0].size() << "\n";

	for(int i = 0; i < board[0].size(); i++) {
		cout << board[0][i];
	}

	cout << "\n";

	for(int i: board[0]) {
		cout << i;
	}

	cout << "\n" << "\n";

	for(vector<int> row : board) {
		for(int i : row) {
			cout << i;
		}
		cout << "\n";
	}

	cout << "\n";
}