#include "std_lib_facilities.h"

int main(){
	double legnagyobb =0 ;
	double legkissebb = 0;
	double a;
	string mertekegyseg1;
	vector<double> szamok;
	int szamlalo = 0;
	cout << ("Adj meg hosszúságot és hozzá a mértékegységet (cm,m,in,ft)\n");	
	while(cin >> a >> mertekegyseg1){
		const double cm_per_meter = 100;
		const double cm_per_inch =2.54;
		const double inch_per_ft=12;
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
		if(mertekegyseg1 == "y" || mertekegyseg1 == "yard" || mertekegyseg1 == "meter" || mertekegyseg1 == "gallon")
			cout << "Illegal\n";
		else {if(a < legkissebb || legkissebb == 0){
			legkissebb = a;
			cout << "Eddigi legkisebb számot kérted be:" << a << "\n";
			}else if(a > legnagyobb){
			legnagyobb = a;
			cout << "Eddigi legnagyobb számot kérted be: "<< a <<"\n";
			}
		/*if(a || b == 8){
			break;
			}else{
			cout << "vajon folytatja?";
			}
		cout << "vajon folytatja?";*/
		szamok.push_back(a);
		szamlalo++;
		}		
		cout << "\nAdj meg  hosszúságot és hozzá a mértékegységet (cm,m,in,ft)\n";		
	}
	sort(szamok);
	double sum = 0;
		cout << "eddig bekért számok:\n";
		for(int i =0; i < szamok.size();++i){
			cout << szamok[i]; 
			if(i+1 < szamok.size()) cout<< " , ";
			sum += szamok[i];
		}
	cout << "\nszámok összege: " << sum <<"\n";
	//cout << "legkisebb szám: " << szamok.begin() << "legnagyobb szám: " szamok.end();
	cout << "Legnagyobb szám: "<< *max_element(szamok.begin(), szamok.end()) << " legkisebb szám: "<< *min_element(szamok.begin(), szamok.end()) <<"\n";
	cout << "Eddig ennyi számot kértél be: " << szamlalo << "\n" ;
		return 0;
}
