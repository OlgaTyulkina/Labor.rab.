#ifndef _Mlecopitaushee_h_
#define _Mlecopitaushee_h_

#include "Givotnie.h"
class TMlecopitaushee : public TGivotnie
{
protected:
		int pol;
	bool sherst;
	bool pozvonochnik;
public:
	TMlecopitaushee();
	int GetPol();
	bool GetSherst();
	bool GetPozvonochnik();

	void SetSherst(bool s);

	double Moloco();
	const char* Golos(); // Создание указателя на константу
};
#endif
