#include "Givotnie.h"

TGivotnie::TGivotnie()
{
	cvet = 0;
	kolvokonechnostei = 0;
	kolvosystems = 1;
}
int TGivotnie::GetCvet()
{
	return cvet;
}
int TGivotnie::GetKolvokonechnostei()
{
	return kolvokonechnostei;
}
int TGivotnie::GetKolvosystems()
{
	return kolvosystems;
}
void TGivotnie::SetKolvokonechnostei(int k)
{
	if (k > 0 && k < 10)
		kolvokonechnostei = k;
}
void TGivotnie::SetCvet(int c)
{
	cvet = c;
}
 const char* TGivotnie::Golos()
{
	return "";
}
