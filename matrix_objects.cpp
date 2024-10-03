// Constructing matrix objects

#include <iostream>
using namespace std;

class matrix
{
    int **p;   //pointer to matrix
    int d1,d2;  //dimensions
    public:
    matrix (int x, int y);

    void get_element(int i, int j, int value)  // for assiging the values
    {
        p[i][j]=value;
    }

    int & put_element(int i, int j)            //printing the matrix value
    {
        return p[i][j];
    }
};

matrix :: matrix(int x, int y)
{
    d1=x;
    d2=y;
    p= new int *[d1];    //creates an array pointer
    for(int i=0;i<d1;i++)
    {
        p[i]=new int[d2];    // creates space for each row
    }
}

int main()
{
    int m,n;
    cout << "Enter the d1 of matrix :";  //get the dimension 1
    cin >> m;
    cout << "Enter the d2 of matrix :";  //get the dimension 2
    cin >> n;
    matrix A(m,n);           //parametarized constructor used for dimension of matrix

    cout << "Enter the element of matrix row by row \n";
    int i,j,value;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> value;
            A.get_element(i,j,value);
        }
    }

    cout << "\nValue at position (1,2): " << A.put_element(1, 2) << endl;
    return 0;

};