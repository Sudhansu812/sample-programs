#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n = argv[1];
  int first = 0;
  int second = 1;
  int result = 0;

  for (int i = 1; i <= n; ++i)
  {
      result = first + second;
      first = second;
      second = result;
      cout << i << ": " << first;
  }
  return 0;
}
