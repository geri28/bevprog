#include "std_lib_facilities.h"

int main()
{
	try {
	/*	
//1
		cout << "Success!\n";
//2
		cout << "Success!\n";
//3
		cout << "Success!" << "\n";
//4
		cout << "success!" << "\n";
//5
		int res = 7; 
		vector<int> v(10); 
		v[5] = res; 
		cout << "Success!\n";
//6
		vector<int> n(10); 
		n[5] = 7; 
		if (n[5] == 7) cout << "Success!\n";
//7		
		if (5 == 5) cout << "Success!\n"; else cout << "Fail!\n";
//8		
		bool c = true; 
		if (c) cout << "Success!\n"; else cout << "Fail!\n";
//9		
		string s = "ape"; 
		bool a = false; 
		if (a) cout << "Success!\n"; else cout << "Success!\n";
//10		
		string k = "ape"; 
		if (k !="fool") cout << "Success!\n";
//11		
		string l = "ape"; 
		if (l != "fool") cout << "Success!\n";
//12		
		string j = "ape"; 
		if (j == "fool") cout << "Success!\n"; else cout << "Success!\n";
//13		
		vector<char> p(5); 
		for (int i=0; i<p.size(); ++i) 
		cout << "Success!\n";
//14	
		vector<char> o(5); 
		for (int i=0; i<o.size(); ++i) 
		cout << "Success!\n";
		*/
//15		
	/*	string u = "Success!\n"; 
		for (int i=0; i<=6; ++i) 
		cout << u[i];
//16		
		if (true) cout << "Success!\n"; else cout << "Fail!\n";
//17		
		int x = 2000;
		string c = to_string(x);								// nem jóüóóóóóóóó
		if (c == "2000") cout << "Success!\n";
	*/
//18	
/*	string w = "Success!\\n";
	for (int i=0; i<=10; ++i) 
	cout << w[i];
	cout << "\n";
//19	
	vector<char> e(5); 
	for (int i=0; i<=e.size(); ++i)
	cout << "Success!\n";
	*/
//20
	/*	int i=0; 
	int j = 9; 
	while (i<10){ 
	i++; 
	if ( j<i ) cout << "Success!\n";
	}
 */
//21
	/*	int x = 3; 
		double d = 5/(x-2); 
		if (d != 2*x+0.5) cout << "Success!\n";
	*/	
//22 feladat jön
/*
	char test[] = "Success\\n";
	vector<char> s; 
	for (int i=0; i<=10; ++i) {
	s.push_back(test[i]);
	cout << s[i];}
	cout << "\n";
//23
	int i=0;
	int j=0; 
	while (i<10) 
	{
	++i; 
	if (j<i) cout << "Success!\n";
}
//24
 */
	double x = 4; 
	double d = 5/(x-2); 
	if (d = 2*x+0.5) cout << "Success!\n";
//25
	cout << "Success!\n";

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
