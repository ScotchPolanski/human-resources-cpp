#include "Personal.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	string ID;
	while (ID != "X")
	{
		cout << "=== Um das Programm zu verlassen, druecke X ===\n";
		cout << "\n";
		Personal personal1("Hans", "Nerd", "06325927");
		Personal personal2("Juliane", "Hacker", "19236353");
		Personal personal3("Michael", "Ueberflieger", "73643563");

		cout << personal1.getVorname() << " " << personal1.getNachname() << " " << personal1.getPersonalID() << std::endl;
		cout << personal2.getVorname() << " " << personal2.getNachname() << " " << personal2.getPersonalID() << std::endl;
		cout << personal3.getVorname() << " " << personal3.getNachname() << " " << personal3.getPersonalID() << std::endl;
		cout << "\n";
		cout << "Personalnummer eingeben: \n";
		getline(cin, ID);
		if (ID == personal1.getPersonalID())
		{
			system("cls");
			cout << "----" << personal1.getVorname() << " " << personal1.getNachname() << " " << personal1.getPersonalID() << "----" << endl;
			cout << "\n";
		}
		else if (ID == personal2.getPersonalID())
		{
			system("cls");
			cout << "----" << personal2.getVorname() << " " << personal2.getNachname() << " " << personal2.getPersonalID() << "----" << endl;
			cout << "\n";
		}
		else if (ID == personal3.getPersonalID())
		{
			system("cls");
			cout << "----" << personal3.getVorname() << " " << personal3.getNachname() << " " << personal3.getPersonalID() << "----" << endl;
			cout << "\n";
		}
		else if (ID == "X" || ID == "x")
		{
			return 0;
		}
		else
		{
			cout << "Ungueltige EIngabe!\n";
			cout << "Deine Eingabe war: " << ID;
			cout << "\n";
			Sleep(2000);
			system("cls");
		}
	}
}