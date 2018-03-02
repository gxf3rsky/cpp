// Template implementation of struct which can be used with - for range based loop.
// This can be done by implementing begin() and end() functions.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
struct X
{
  X(const vector<T> &v) : size(v.size())
  {
      storage = new T[size];

      cout << "X ctr: allocated size: " << size << endl;

      T *ptr = storage;

      for (auto a = v.begin(); a != v.end(); ++a)
        *ptr++ = *a;
   }

  ~X() 
  {
    cout << "X dtr: freed size: " << size << endl;

    delete [] storage;
  };

  const T *begin() const
  {
    return &storage[0];
  }

  const T *end() const
  {
    return &storage[size];
  }

  const int size;

  T *storage;
};



int main(int argc, char **argv)
{
  
  // Int type example.

  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  X<int> x_v1(v1);
  
  for (auto &a : x_v1)
    cout << a << endl;  

  // Char type example.

  vector<char> v2 = {'a','b','c'};  
  X<char> x_v2(v2);

  for (auto &a : x_v2)
    cout << a << endl;

  // String type example.

  std::vector<string> v3 = {"Here", "we", "have", "some", "vector", "of", "strings."};
  X<string> x_v3(v3);

  for (auto &a : x_v3)
    cout << a << endl;

  return 0;
}