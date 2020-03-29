#include "Givotnie.h"
#include "Mlecopitaushee.h"
#include "Chelovek.h"
#include "Dolphin.h"
#include "Reptilia.h"
#include "Crocodile.h"
#include <iostream>

using namespace std;

int main()
{
	TGivotnie newGivotnoe;
	newGivotnoe.SetCvet(10);
	newGivotnoe.SetKolvokonechnostei(2);
	cout << "Kolvokonechnoste= " << newGivotnoe.GetKolvokonechnostei() << endl;
	TMlecopitaushee newMleco;
	newMleco.SetSherst(true);
	newMleco.SetCvet(4);
	newMleco.SetKolvokonechnostei(4);
	cout << "newMleco says" << newMleco.Golos() << endl;
	TChelovek Vasya;
	cout << "Vasya skazal " << Vasya.Golos() << endl;
	cout << "Vasya na rabote " << Vasya.Rabota() << endl;
	cout << "Kolvokonechnoste= " << Vasya.GetKolvokonechnostei() << endl;
	TDolphin Pasha;
	cout << "Pasha skazal " << Pasha.Golos() << endl;
	cout << "Pasha echo " << Pasha.Echo() << endl;
	cout << "Kolvokonechnoste= " << Pasha.GetKolvokonechnostei() << endl;
	TReptilia newRept;
	newRept.SetShell(true);
	newRept.SetCvet(5);
	newRept.SetKolvokonechnostei(4);
	cout << "newRept says " << newRept.Golos() << endl;
	TCrocodile Gena;
	cout << "Gena says " << Gena.Golos() << endl;
	cout << "Gena have " << Gena.teeth() <<"teeth" << endl;
	TMlecopitaushee** delphinari = 0;
	int kolvoPersonale = 0;
	cout << "kolvoPersonale = " << endl;
	cin >> kolvoPersonale;
	delphinari = new TMlecopitaushee * [kolvoPersonale];
	for (int i=0; i < kolvoPersonale; i++)
	{
		cout << "Which one? " << endl;
		int a;
		cin >> a;
		if (a == 0)
			delphinari[i] = new TDolphin();
		else
			delphinari[i] = new TChelovek();
		cout << "Kolvokonechnoste= " << delphinari[i]->GetKolvokonechnostei() << endl;
		cout << "Sotrudnic " << i<< "govorit"<< delphinari[i]->Golos() << endl;
	}
	return 0;
}
