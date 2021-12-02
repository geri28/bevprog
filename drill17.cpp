#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a){
	for(int i=0; i < 10; i++)
		os << a[i] <<" ";

os << "\n";

}

void print_array(ostream& os, int* a, int n){
for(int i=0; i < n; i++)
		os << a[i] <<" ";

os << "\n";


}
void print_vector(vector<int>* v, int n)
{
	for (int i=0; i<n; i++)
		cout << (*v)[i]<< " ";
		cout<<"\n";
}

int main(){
try{
int* array = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	for(int i=0; i < 10; i++){
		cout << array[i] <<" ";
	}

cout << "\n";
delete[] array;

int* array1 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
print_array10(cout,array1);
delete[] array1;

int* array2 = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
print_array(cout,array2,11);
//delete[] array2;

int* array3 = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,};
print_array(cout,array3,20);
delete[] array3;

vector <int> vector1{100,101,102,103,104,105,106,107,108,109};
	vector <int>* p = &vector1;
	print_vector(p,10);
//delete[] p;
	vector <int> vector2{100,101,102,103,104,105,106,107,108,109,110};
	vector <int>* p2 = &vector2;
	print_vector(p2,11);
//delete[] p2;
	vector<int> vector3{100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,};
vector<int>* p3 = &vector3;
print_vector(p3,20);
//delete[] p3;


return 0;
}


catch(exception& e){
	cerr << e.what() << "\n";
return 1;
}
}