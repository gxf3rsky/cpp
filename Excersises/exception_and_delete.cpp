#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char *arv[])
{
  char *mem = new char[1];

  throw std::runtime_error("some error");

  delete [] mem;

  return 0;
}