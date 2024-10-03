/*Write the c++ program for minimum value of y,
  where y=(x1^2)+(4*x2)-(3*x3)
    10<x1<20
    200<x2<500
    1000<x3<2000*/

#include <iostream>
using namespace std;
int main()
{
    int min=INT_MAX ,y;
    for(int i=10;i<=20;i++)
    {
        for(int j=200;j<=500;j++)
        {
            for(int k=1000;k<=2000;k++)
            {
                y=(i*i) + (4*j) - (3*k);
                if(y<min)
                {
                    min=y;
                }

            }
        }
    }
    cout << min << endl;
    return 0;
}


