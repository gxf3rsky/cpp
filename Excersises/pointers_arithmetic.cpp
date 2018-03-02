#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{

  double * p = new double[4];

  double * const ptr = p;

  p[0] = 1.2;
  p[1] = 2.2;
  p[2] = 3.3;
  p[3] = 4.4;

  cout << "[" << &p[0] << "]" << endl;
  p++;

  cout << "[" << &p[0] << "]" << endl;
  p++;

  cout << "[" << &p[0] << "]" << endl;
  p++;
  
  cout << "[" << &p[0] << "]" << endl;
  // p++;


  // cout << *p++ << endl;

  // cout << *p++ << endl;




  delete [] ptr;







  // delete [] p;

  return 0;
}