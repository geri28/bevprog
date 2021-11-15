#include "std_lib_facilities.h"

void swap_v(int a,int b){
	int temp; 
	temp = a; 
	a=b; 
	b=temp; 
}; 
void swap_r(int& a,int& b){ 
int temp;
temp = a; 
a=b; 
b=temp; 
};
/*void swap_cr(const int& a, const int& b){ 
int temp;
temp = a; 
a=b; 
b=temp; 
};*/ //const értékét nem lehet megváltoztatni így hibát ír ki

int main() {

int x = 7;
int y =9;
swap_r(x,y);
//swap_r(7,9); //nincs mögötte objektum
cout << x << y << "\n";
const int cx = 7;
const int cy = 9;
//swap_v(cx,cy);
//swap_r(7.7,9.9);
//cout << cx << cy <<"\n"; // const miatt nem lehet megváltoztatni
double dx = 7.7;
double dy = 9.9;
//swap_r(dx,dy);
//swap_r(7.7,9.9);
cout << dx << dy <<"\n"; //double miatt nem lehet véghez vinni
}
