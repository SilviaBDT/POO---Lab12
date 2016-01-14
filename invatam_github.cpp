#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "The number of coffee you had today is: " << endl;
  cin >> n;
  if(n <= 3)
	  cout << "You're on the good way";
  else 
	 cout << "You need another one";
  return 0;
}