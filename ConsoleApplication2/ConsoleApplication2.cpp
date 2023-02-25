#include <iostream>
using namespace std;

int main() {

	const int m = 3, n = 3;
	int A[m][n]{}, i, j;
	int d = 0;
	cout << "enter your numbers" << endl;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> A[i][j];

	d = A[0][0] * ((A[1][1] * A[2][2]) - (A[2][1] * A[1][2])) - A[0][1] * ((A[1][0]) * A[2][2]) - (A[2][0] * A[1][2]) + A[0][2] * ((A[1][0] * A[2][1]));
	cout << "dererminan is " << d;
	
	return 0;
}