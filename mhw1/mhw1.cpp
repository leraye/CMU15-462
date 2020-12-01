#include <iostream>
using namespace std;

#include "Eigen/Dense"
using namespace Eigen;

int main()
{
   Matrix3f A;
   Vector3f b;
   A << 1.2,3.4,5.6,  7.8,9.0,1.2,  3.4,5.6,7.8;
   b << 36.4, 87.6, 62.8;
   cout << "Here is the matrix A:\n" << A << endl;
   cout << "Here is the vector b:\n" << b << endl;
   Vector3f x = A.colPivHouseholderQr().solve(b);
   cout << "The solution is:\n" << x << endl;
}
