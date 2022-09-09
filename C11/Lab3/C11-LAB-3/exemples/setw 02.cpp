#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	const int MARGE = 5;
	const int C1 = MARGE + 15, C2 = 15, C3 = 15, C4 = 15, C5 = 10; // largeurs des colonnes

	cout << right << "\n\n\n\n";

	// Entête
	cout << setw(C1) << "RANG"	<< setw(C2) << "PAYS"			<< setw(C3) << "CAPITALE"	<< setw(C4) << "POPULATION" << setw(C5) << "ANN\220E"	<< "\n";
	cout << setw(C1) << "----"	<< setw(C2) << "----"			<< setw(C3) << "--------"	<< setw(C4) << "----------" << setw(C5) << "-----"		<< "\n\n";

	// Données
	cout << setw(C1) << 1		<< setw(C2) << "Chine"			<< setw(C3) << "Beijing"	<< setw(C4) << "21,710,000" << setw(C5) << 2017			<< "\n\n";
	cout << setw(C1) << 2		<< setw(C2) << "Inde"			<< setw(C3) << "New Delhi"	<< setw(C4) << "16,787,949" << setw(C5) << 2014			<< "\n\n";
	cout << setw(C1) << 3		<< setw(C2) << "Japon"			<< setw(C3) << "Tokyo"		<< setw(C4) << "13,742,906" << setw(C5) << 2017			<< "\n\n";
	cout << setw(C1) << 4		<< setw(C2) << "Philippines"	<< setw(C3) << "Manille"	<< setw(C4) << "12,877,253" << setw(C5) << 2015			<< "\n\n";
	cout << setw(C1) << 5		<< setw(C2) << "Russie"			<< setw(C3) << "Moscou"		<< setw(C4) << "11,541,000" << setw(C5) << 2011;

	_getch();
}