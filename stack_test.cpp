#include "stack.h"
#include <iostream>

using namespace std;


int main() {
  Stack<int> a;
  cout << "Created stack"  << endl;
  a.push(1);
  a.pop();
  cout << "Popped once" << endl;
  a.push(2);
  cout << a.top() << endl;
  a.pop();
  cout << "Popped twice" << endl;
  a.pop();

  cout << "Past the error" << endl;


}