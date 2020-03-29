#ifndef _Givotnie_h_
#define _Givotnie_h_

class TGivotnie
{
protected:
	int cvet;
	int kolvokonechnostei;
	int kolvosystems;
public:
	TGivotnie();
	int GetCvet();
	int GetKolvokonechnostei();
	int GetKolvosystems();
	
	void SetKolvokonechnostei(int k);
	void SetCvet(int c);
	const char* Golos();
};
#endif
