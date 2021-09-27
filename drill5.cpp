#include "std_lib_facilities.h"

int main()
{
	try {
	/*	cout << "Success!\n";
		cout << "Success!\n";
		cout << "Success!" << "\n";
		cout << "success!" << "\n";
		int res = 7; 
		vector<int> v(10); 
		v[5] = res; 
		cout << "Success!\n";

		vector<int> n(10); 
		n[5] = 7; 
		if (n[5] == 7) cout << "Success!\n";
		
		if (5 == 5) cout << "Success!\n"; else cout << "Fail!\n";
		
		bool c = true; 
		if (c) cout << "Success!\n"; else cout << "Fail!\n";
		
		string s = "ape"; 
		bool a = false; 
		if (a) cout << "Success!\n"; else cout << "Success!\n";
		
		string k = "ape"; 
		if (k !="fool") cout << "Success!\n";
		
		string l = "ape"; 
		if (l != "fool") cout << "Success!\n";
		
		string j = "ape"; 
		if (j == "fool") cout << "Success!\n"; else cout << "Success!\n";
		
		vector<char> p(5); 
		for (int i=0; i<p.size(); ++i) 
		cout << "Success!\n";
	
		vector<char> o(5); 
		for (int i=0; i<o.size(); ++i) 
		cout << "Success!\n";
		*/
	/*	string u = "Success!\n"; 
		for (int i=0; i<=6; ++i) 
		cout << u[i];
		
		if (true) cout << "Success!\n"; else cout << "Fail!\n";
		
		int x = 2000;
		string c = x;								// nem jóüóóóóóóóó
		if (c == "2000") cout << "Success!\n";
	*/
	
/*	string w = "Success!\\n";
	for (int i=0; i<=10; ++i) 
	cout << w[i];
	cout << "\n";
	
	vector<char> e(5); 
	for (int i=0; i<=e.size(); ++i)
	cout << "Success!\n";
	*/
	int i=0; 
	int j = 9; 
	while (i<10){ 
	i++; 
	if ( j<i ) cout << "Success!\n";
	}
		
		int x = 3; 
		double d = 5/(x-2); 
		if (d != 2*x+0.5) cout << "Success!\n";
//22 feladat jön

		keep_window_open();
	return 0;
		}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
	return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
	return 2;

}
}
