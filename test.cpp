#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int x = 1;
	int y = ++x + ++x + x++;
	cout<<y<<endl;
}
