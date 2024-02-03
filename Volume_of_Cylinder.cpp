#include <iostream>
using namespace std;
int main ()
{
  int rad1, hgt;
  float volcy;
  cout << " enter the radius of the cylinder :\n\a  ";
  cin >> rad1;
  cout << " enter the height of the cylinder :\n\a ";
  cin >> hgt;
  volcy = (3.14 * rad1 * rad1 * hgt);
  cout << " The volume of a cylinder is :\a \n" << volcy << endl;
  cout << endl;
  return 0;
}
