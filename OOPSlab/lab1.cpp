// A program to read the matrix of size mxn from keyboard and display the same using functions..
#include <iostream>
using namespace std;

// A function to take matrix element input from the user..
int **getMatrix(int, int);
// A function to print matrix elements..
void printMatrix(int **, int, int);

int **getMatrix(int row, int column) /*It takes 2 arguments rows and cols and returns 
 a pointer to a pointer.The pointer to a pointer serves as a 2D array which is
 allocated dynamically in heap memory*/
{
  int **arr = new int *[row]; /*Dynamic array of pointer of size "row" is allocated and
  linked to pointer to pointer "arr" */
  for (int i = 0; i < row; i++)
  {
    arr[i] = new int[column]; /* Dynamic array of size "column" is allocated and is linked
                                 to pointer to pointer "arr" for every iteration of rows*/
  }
  // Simple logic to get input using linked "arr" pointer to pointer.
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      cout << "Enter element at position [" << i << "][" << j << "] >> ";
      cin >> arr[i][j];
    }
  }
  return arr; // pointer to pointer is returned.
}

// A function to print the matrix input by user.
void printMatrix(int **Array, int row, int col) /*A simple function that takes
   3 arguments pointer to pointer , row and column and prints the content of 
   allocated matrix .*/
{
  cout << "Matrix : \n";
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << Array[i][j] << " ";
    }
    cout << "\n";
  }
}
// Driver function.
int main(void)
{
  int m, n; // Two variables m and n in stack to input size of a matrix;
  cout << "Enter m : ";
  cin >> m;
  cout << "Enter n : ";
  cin >> n;
  printMatrix(getMatrix(m, n), m, n); // getMatrix function is called with 
                                      // arguments as m and n;
  // then pointer to pointer returned by getMatrix is passed as one of an 
  //argument in printMatrix with size m & n;
  return 0;
}