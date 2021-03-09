#ifndef Personal_H
#define Personal_H
#include <string>

class Personal
{
public:
	Personal(std::string Vorname_, std::string Nachname_, std::string PersonalID_)
	{
		Vorname = Vorname_;
		Nachname = Nachname_;
		PersonalID = PersonalID_;
	}

	// ==== Get Methoden ====

	std::string getVorname() { return Vorname; }
	std::string getNachname() { return Nachname; }
	std::string getPersonalID() { return PersonalID; }


private:
	std::string Vorname;
	std::string Nachname;
	std::string PersonalID;
};


#endif