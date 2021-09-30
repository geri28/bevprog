#include "std_lib_facilities.h"

int main(){
	double legnagyobb;
	double legkissebb = 0;
	double a;
	double b;
	string mertekegyseg1;
	string mertekegyseg2;
	vector<double> szamok;
	int szamlalo = 0;
	cout << ("AAdj meg 2 hosszúságot és hozzájuk a mértékegységet (cm,m,in,ft)\n");	
	while(cin >> a >> mertekegyseg1 >> b >> mertekegyseg2){
		const double cm_per_meter = 100;
		const double cm_per_inch =2.54;
		const double inch_per_ft=12;
		szamlalo = szamlalo+2;
		if(mertekegyseg1 == "ft"){
			a = a * inch_per_ft;
			a = a* cm_per_inch;
			a = a/ cm_per_meter;
		}else if(mertekegyseg1 == "in"){
			a= a * cm_per_inch;
			a= a / cm_per_meter;
		}else if(mertekegyseg1 == "cm"){
			a = a / cm_per_meter;
		}
		 if(mertekegyseg2 == "ft"){
			b = b * inch_per_ft;
			b = b * cm_per_inch;
			b = b / cm_per_meter;
		}else if(mertekegyseg2 == "in"){
			b = b * cm_per_inch;
			b = b / cm_per_meter;
		}else if(mertekegyseg2 == "cm"){
			b = b / cm_per_meter;
		}
		if(mertekegyseg1 == "y" || mertekegyseg2 == "y" || mertekegyseg1 == "yard" || mertekegyseg2 == "yard" || mertekegyseg1 == "meter" || mertekegyseg2 == "meter"  || mertekegyseg1 == "gallon" || mertekegyseg2 == "gallon" )
			cout << "Illegal\n";
		else {if(a < b && legkissebb == 0){
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
		cout << "2 szám összege: " << a+b << "\n";
		szamok.push_back(a);
		szamok.push_back(b);
		sort(szamok);
		cout << "eddig bekért számok:\n";
		for(int i =0; i < szamok.size();++i){
			cout << szamok[i]; 
			if(i+1 < szamok.size()) cout<< " , ";
		}
		}
		cout << "Eddig ennyi számot kértél be: " << szamlalo << "\n" ;
		cout << "\nAdj meg 2 hosszúságot és hozzájuk a mértékegységet (cm,m,in,ft)\n";		
	}
		return 0;
}
