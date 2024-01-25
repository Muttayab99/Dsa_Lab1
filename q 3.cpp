#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number of rows: ";
    cin >> a;
    cout << "Enter the number of columns: ";
    cin >> b;
    void inputMatrix(int** arr, int a,int b);
    void displayMatrix(int** arr, int a,int b);
    int sumOfElements(int** arr, int a,int b);
    void rowSum(int** arr, int a,int b);
    void columnSum(int** arr, int a,int b);
    void transpose(int** arr, int a,int b);
    int** matrix = new int* [a];
    for (int i = 0; i < a; ++i)
    {
        matrix[i] = new int[b];
    }
    int option;
    do {
        cout << "(1) Input elements into matrix"<<endl;
        cout << "(2) Display elements of matrix"<<endl;
        cout << "(3) Sum of all elements of matrix"<<endl;
        cout << "(4) Display row-wise sum of matrix"<<endl;
        cout << "(5) Display column-wise sum of matrix"<<endl;
        cout << "(6) Create transpose of matrix"<<endl;
        cout << "(0) Exit"<<endl;
        cout << "Enter your option: ";
        cin >> option;
        if (option == 1)
        {
            inputMatrix(matrix, a, b);
        }
        else if (option == 2)
        {
            displayMatrix(matrix, a, b);
        }
        else if (option == 3)
        {
            cout << "Sum of all elements: " << sumOfElements(matrix, a, b);
        }
        else if (option==4)
        {
            rowSum(matrix, a, b);
        }
        else if (option==5)
        {
            columnSum(matrix, a, b);
        }
        else if (option==6)
        {
            transpose(matrix, a, b);
        }
        else if (option==0)
        {
            cout << "Exit.";
        }
        else
        {
            cout << "Invalid choice";
        }

    } while (option != 0);

  
    for (int i = 0; i <a; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}

void inputMatrix(int** arr, int a,int b)
{
    cout << "Enter elements of the matrix:";
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << "Enter element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> arr[i][j];
        }
    }
}

void displayMatrix(int** arr, int a,int b)
{
    cout << "Matrix elements:";
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int sumOfElements(int** arr, int a,int b)
{
    int sum = 0;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

void rowSum(int** arr, int a,int b)
{
    cout << "Rowwise sum :";
    for (int i = 0; i < a; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < b; ++j)
        {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }
}

void columnSum(int** arr, int a,int b)
{
    cout << "Columnwise sum";
    for (int j = 0; j < a; ++j)
    {
        int colSum = 0;
        for (int i = 0; i < b; ++i)
        {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colSum << endl;
    }
}

void transpose(int** arr, int a,int b)
{
    cout << "Transpose ";
    for (int j = 0; j < a; ++j)
    {
        for (int i = 0; i < b; ++i)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
