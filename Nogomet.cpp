#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct nogomet {
	int sifra_tekme;
	string ekipa1;
	string ekipa2;
	int golek1;
	int golek2;
};

int sifra=0;
nogomet tekma [100];

void unos (nogomet tekma [100],int &sifra) {
	
	if (sifra==0) cout<<"Trenutno nema zapisanih utakmica"<<endl;
	sifra+=1;
	cout<<"Upisite ime prve ekipe: "; cin>>tekma[sifra].ekipa1;
	cout<<"Upisite golove prve ekipe: "; cin>>tekma[sifra].golek1;
	cout<<"Upisite ime druge ekipe: "; cin>>tekma[sifra].ekipa2;
	cout<<"Upisite golove druge ekipe: "; cin>>tekma[sifra].golek2;
	
}

void ispis (nogomet tekma [100], int sifra) {
	cout<<sifra<<endl;
	for (int i=1; i<=sifra; i++) {
	cout<<i<<". "<<tekma[i].ekipa1<<" - "<<tekma[i].ekipa2<<" "<<tekma[i].golek1<<" : "<<tekma[i].golek2<<endl;
	if (tekma[i].golek1>tekma[i].golek2) cout<<tekma[i].ekipa1<<" je pobijedila"<<endl;
    else if (tekma[i].golek2>tekma[i].golek1) cout<<tekma[i].ekipa2<<" je pobijedila"<<endl;
    else cout<<"Utakmica je odigrana neriješeno"<<endl;
    cout<<endl;
 }
}
void ispravak (nogomet tekma [100], int sifra) {
	if (sifra==0) cout<<"Ne postoje podaci o rezultatima"<<endl;
	else{
	  for (int i=1; i<=sifra; i++) {
	  	 cout<<i<<". "<<tekma[i].ekipa1<<" - "<<tekma[i].ekipa2<<" "<<tekma[i].golek1<<" : "<<tekma[i].golek2<<endl;
	  }
	  cout<<endl;
	  int ispravak;
	  cout<<"Upisite sifru: "; cin>>ispravak;
	  if (ispravak<1 || ispravak>sifra) {
	  cout<<"Nepostojeèa šifra"<<endl;
	  }
	  else
	  {
	  cout<<endl;
	  cout<<"Upisite ime prve ekipe: "; cin>>tekma[ispravak].ekipa1;
	  cout<<"Upisite golove prve ekipe: "; cin>>tekma[ispravak].golek1;
	  cout<<"Upisite ime druge ekipe: "; cin>>tekma[ispravak].ekipa2;
	  cout<<"Upisite golove druge ekipe: "; cin>>tekma[ispravak].golek2;
	  }
	  }
	
}

void pretrazivanje (nogomet tekma [], int sifra) {
	string ekipa;
	cout<<"Upisite ime ekipe koja vas zanima: "; cin>>ekipa;
	for (int i =1; i<=sifra;i++)
	{
	if (ekipa==tekma[i].ekipa1 || ekipa==tekma[i].ekipa2) {
		cout<<i<<". "<<tekma[i].ekipa1<<" - "<<tekma[i].ekipa2<<" "<<tekma[i].golek1<<" : "<<tekma[i].golek2<<endl;
	}
	
	}
	
}
    
int main() {
	int izbor;
	
	do {
		cout<<"Izbornik"<<endl;
		cout<<"-----------------"<<endl;
		cout<<"1. Unos podataka o rezultatima"<<endl;
		cout<<"2. Ispravak podatka o rezultatima"<<endl;
		cout<<"3. Pregled rezultata"<<endl;
		cout<<"4. Spremanje rezultata"<<endl;
		cout<<"5. Pretraživanje rezultata"<<endl;
		cout<<"0. Izlaz iz programa"<<endl;
		
		cout<<endl;
		
		cout<<"Izaberite stavku: "; cin>>izbor;
		
		cout<<endl;
		
		switch (izbor) {
			case 1:
				unos (tekma,sifra);
			break;
			
			case 2: 
			  ispravak (tekma, sifra);
			break;
			
			case 3:
			  ispis (tekma, sifra);
			break;
			
			case 4:
			break;
			
			case 5:
				pretrazivanje (tekma, sifra);
			break;
		}
	}
	while (izbor!=0);
	
	cout<<endl;
	
	system ("pause");
	return 0;
}
