// rememb-o-matic
#include<iostream>
#include <new>
using namespace std;

int main ()
{
  int i, n;
  int * p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p = new (nothrow) int[i];
  if (p==nullptr)
    cout << "Error: Memory could not be allocated ";
  else
  {
    for (n=0; n<i; n++)
    {
    cout << "Enter number: ";
    cin >> p[n];
  }
  cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete [] p;
  }
  cout << "to the remb-o-matic." << endl;
  return 0;
}
