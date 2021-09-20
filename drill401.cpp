#include "std_lib_facilities.h"

int main(){
	double legnagyobb;
	double legkissebb = 0;
	while(1>0){
		cout << "adj meg 2 számot szóközzel elválasztva (ha ki akarsz lépni akkor használd ]) \n";
		double a;
		double b;
		cin >> a >> b; 
		if(a < b && legkissebb == 0){
			legkissebb = a;
			cout << "Eddigi legkisebb számot kérted be:" << a << "\n";
			}else if(b < a && legkissebb == 0){
				legkissebb = b;
				cout << "Eddigi legkisebb számot kérted be:" << b << "\n";
				}
		if(a > legnagyobb && a > b){
			legnagyobb = a;
			cout << "Eddigi legnagyobb számot kérted be: "<< a <<"\n";
			}else if(b > legnagyobb && b > a){
				legnagyobb = b;
				cout << "Eddigi legnagyobb számot kérted be: "<< b <<"\n";
				}if(a < legkissebb && a < b){
					legkissebb = a;
					cout << "Eddigi legkisebb számot kérted be:" << a << "\n";
					}else if(b < legkissebb && b < a){
						legkissebb = b;
						cout << "Eddigi legkisebb számot kérted be:" << b << "\n";
						}
		/*if(a || b == 8){
			break;
			}else{
			cout << "vajon folytatja?";
			}
		cout << "vajon folytatja?";*/
		if(a > b){
			cout << "A kissebb szám: " << b << "\nA nagyobb szám: "<< a <<"\n";
			if(a-b <= 0.01){
				cout <<" Majdnem egyenlő a 2 szám \n";
				}
		}else if(a < b){
			cout << "A kissebb szám: " << a << "\nA nagyobb szám: "<< b <<"\n";
			if(b-a <= 0.01){
				cout << " Majdnem egyenlő a 2 szám \n";
				}
		}else{cout << " A két szám egyenlő \n";}
		
		}
		return 0;
}
