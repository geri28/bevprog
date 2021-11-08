#include "my.h"
#include "std_lib_facilities.h"

{ int temp; temp = a, a=b; b=temp; }
	
	int x = 7;
	int y =9;
	swap_?(x,y);
	swap_?(7,9);
	const int cx = 7;
	const int cy = 9;
	swap_?(cx,cy);
	swap_?(7.7,9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_?(dx,dy);
	swap_?(7.7,9.9);
	

int main()
{
X::var = 7;
X::print();
// print X’s var
using namespace Y;
var = 9;
print();
// print Y’s var
{
using Z::var;
using Z::print;
var = 11;
print();
// print Z’s var
print();
X::print();
// print Y’s var
// print X’s var
}
