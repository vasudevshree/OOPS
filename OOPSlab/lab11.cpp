// A program to demonstrate the concept of destructor..
#include <iostream>
using namespace std;

// Class Array to operate on Arrays.
class Array
{
    // Data members --to store Array contents and its size;
    int *arr;
    int size;

public:
    Array() {} // Default constructor.

    Array(int n = 10) // A parameterized constructor to allocate the Array dynamically -with default size 10;
    {
        size = n;                                // update size;
        arr = (int *)malloc(size * sizeof(int)); // Allocate the array;
    }
    // Destructor to free the allocated memory
    ~Array() // Destructor-- No arguments and no return type;
    {
        cout << "\narray Cleared !";
        free(arr); // clear the allocated memory.
    }
    void printArray(void); // Member functions-to print array contents;
    void getArray(void);   // member function -to get the array input;
};

void Array::getArray(void) // getArray() def;
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void Array::printArray(void) // printArray() def;
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// Driver function
int main(void)
{
    Array a(4); // Array of size 4 is alloacted in heap memory;
    cout << "Enter Array of size 4 : ";
    a.getArray(); // get array input;
    cout << "\nArray : ";
    a.printArray(); // print the array input;
    // Destructor is called and memory is cleared;

    return 0;
}