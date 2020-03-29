#include "Mlecopitaushee.h"

TMlecopitaushee::TMlecopitaushee()
{
	pol = 0;
	sherst = 0;
	pozvonochnik = 0;
}
int TMlecopitaushee::GetPol()
{
return pol;
}
bool TMlecopitaushee::GetSherst()
{
	return sherst;
}
bool TMlecopitaushee::GetPozvonochnik()
{
	return pozvonochnik;
}
void TMlecopitaushee::SetSherst(bool s)
{
	sherst = s;
}
double TMlecopitaushee::Moloco()
{
	return 0.0;
}
 const char* TMlecopitaushee::Golos()
{
	return "AAA";
}
