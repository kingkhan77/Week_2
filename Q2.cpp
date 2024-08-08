#include <iostream>
#include <vector>

using namespace std;
int main() 
{
  int m, n;
  cout << "Enter the number of rows and columns of the matrix: ";
  cin >> m >> n;
  vector<vector<int>> matrix(m, vector<int>(n));
  vector<vector<int>> transpose(n, vector<int>(m));
  cout << "Enter the elements of the matrix:" << endl;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> matrix[i][j];
    }
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      transpose[j][i] = matrix[i][j];
    }
  }
  cout << "Transpose of the matrix:" << endl;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << transpose[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
