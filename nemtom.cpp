#include "std_lib_facilities.h"

namespace X {
	int var;
	void print(){
	cout << var;
	}
}
namespace Y {
	int var;
	void print(){
	cout << var;
	}
}
namespace Z {
	int var;
	void print(){
	cout << var;
	}
}

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
}
print();
X::print();
// print Y’s var
// print X’s var
}