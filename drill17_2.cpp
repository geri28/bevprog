#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n){
for(int i=0; i < n; i++)
		os << a[i] <<" ";

os << "\n";


}
void print_vector(const vector<int>& v)
{
	for (int i=0; i<10; i++)
		cout << (v)[i]<< " ";
		cout<<"\n";
}

int main(){
try{
	int a = 7;
	int* p1 = &a;
	cout<<"p1:"<<p1<<" a:"<<a<<"\n";
	
	int* array=new int[7]{10, 20 ,30, 40, 50, 60, 70};
	int* p2 = array;
	cout<<"p2:"<<p2<<"\n";
	cout<<"array elements:\n";
	print_array(cout,array,7);
	
	int* p3 = p2;
	p1=p2;
	p2=p3;
	cout<<"p1:"<<p1<<" p2:"<<p2<<" p3:"<<p3<<"\n";
	cout<<"p1:"<<p1<<" points to array: \n";
	print_array(cout,array,7);
	cout<<"p2:"<<p2<<" points to array: \n";
	print_array(cout,array,7);
	
	delete[] array;

	
	int* array2=new int[10]{10, 20 ,30, 40, 50, 60, 70, 80, 90, 100};
	p1 = array2;
	cout<<"10 size arrays:\n";
	print_array(cout,array2,10);

	int* array3=new int[10];
	p2= array3;
	print_array(cout,array3,10);

	for (int i = 0; i < 10; ++i)
	 	array3[i]=array2[i];

	cout<<"Copied array:\n";
	print_array(cout,array3,10);

	delete[] array2;
	delete[] array3;

	cout<<"10 size vectors:\n";
	vector <int> vector1{10, 20 ,30, 40, 50, 60, 70, 80, 90, 100};
	print_vector(vector1);
	vector <int> vector2(10);
	print_vector(vector2);
	for (int i = 0; i < vector1.size(); ++i)
	 	vector2[i]=vector1[i];

	cout<<"Copied vector:\n";
	print_vector(vector2); 

	return 0;

}

catch(exception& e){
	cerr << e.what() << "\n";
}
}