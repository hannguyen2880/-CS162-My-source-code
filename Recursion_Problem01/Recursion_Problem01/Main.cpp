#include <iostream>
using namespace std;

const int dx[] = { 1, -1, 0, 0 };
const int dy[] = { 0, 0, 1, -1 };
const int inf = 2e9;
void input2DArray(int**& arr, int& n);
void delete2DArr(int**& arr, int& n);
bool inBoard(int x, int y, int& n);
void process(int curx, int cury, int goalx, int goaly, int** board, int& n, bool** visited, int curans, int& ans, bool& found);

int main() {
	int** board;
	cout << "The size of your board: ";
	int n;
	cin >> n;
	cout << "The board:\n";
	input2DArray(board, n);

	int startx, starty, goalx, goaly;
	cout << "Input your current position and your goal: ";
	cin >> startx >> starty >> goalx >> goaly;

	bool found = false;
	bool** visited = new bool* [n];
	for (int i = 0; i < n; ++i) visited[i] = new bool[n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) visited[i][j] = false;
	}
	int ans = inf;
	process(startx, starty, goalx, goaly, board, n, visited, board[startx][starty], ans, found);
	if (!found) cout << "Cannot find any ways.\n";
	else cout << ans;
	return 0;
}

bool inBoard(int x, int y, int& n) {
	return (x < n && x >= 0 && y < n && y >= 0);
}
void input2DArray(int**& arr, int& n) {
	arr = new int* [n];
	for (int i = 0; i < n; ++i) arr[i] = new int[n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cin >> arr[i][j];
	}
}

void delete2DArr(int**& arr, int& n) {
	for (int i = 0; i < n; ++i) delete[] arr[i];
	delete[] arr;
}

void process(int curx, int cury, int goalx, int goaly, int** board, int& n, bool** visited, int curans, int& ans, bool& found) {
	if (curx == goalx && cury == goaly) {
		if (ans > curans) ans = curans;
		found = true;
		return;
	}

	for (int i = 0; i < 4; ++i) {
		int nextx = curx + dx[i];
		int nexty = cury + dy[i];
		if (!inBoard(nextx, nexty, n)) continue;
		if (visited[nextx][nexty] || !board[nextx][nexty]) continue;

		visited[nextx][nexty] = true;
		curans += board[nextx][nexty];
		
		process(nextx, nexty, goalx, goaly, board, n, visited, curans, ans, found);

		visited[nextx][nexty] = false;
		curans -= board[nextx][nexty];
	}
}