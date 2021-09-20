#include "std_lib_facilities.h"

int main(){
	cout << "adj meg az első nevét \n";
	string elsonev;
	cin >> elsonev;
	//cout << "írj egy levelet neki \n";
	//string level;
	//cin >> level;
	cout << "add meg a barátod nevét \n";
	string baratnev;
	cin >> baratnev;
	cout << "add meg a nemét f vagy m ha semleges o \n";
	char neme;
	cin >> neme;
	int age;
	cout << "add meg a korát \n";
	cin >> age;
	if(age <= 0){
		simple_error("viccelsz");
	}if(age >= 110){
		simple_error("viccelsz");
	}
	cout << "Hello " << elsonev <<"\n";
	cout << "How are you? I am fine. I miss you. \n";
	cout << "\n Have you seen " << baratnev << " lately? \n";
	if(neme == 'f'){
		cout << "If you see " << baratnev << " please ask her to call me. \n";
	}if(neme == 'm'){
		cout << "If you see " << baratnev << " please ask him to call me. \n";
	}else{
		cout << "If you see " << baratnev << " please ask them to call me. \n";
		}
	cout << "I hear you just had a birthday and you are " << age << " years old.";
	if(age == 12){
	cout << "Next year you will be \n" << age+1.;
	}if(age == 17){
	 cout << "Next year you will be able to vote. \n";
	}if( age >= 70){
	cout << "I hope you are enjoying retirement. \n";
	}
	
	cout << "Your sincerely \n \n" << elsonev << "\n";
	return 0;
}
