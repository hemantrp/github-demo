#pragma once

#include<iostream>
#include"Offer.h"
#include<vector>
using namespace std;

class Company
{
private:
	string companyName;
	string companyEmail;
	string phoneNumber;
	vector<Offer> offers;
public:
	Company()=default;									//Default constructor
	Company(string,string,string,vector<Offer>);		//Parameterized constructor
	Company(Company& c);							//Copy constructor

	void setName(string);
	void setEmail(string);
	void setPhoneNumber(string);
	void setOffer(Offer);
	string getName();
	string getEmail();
	string getPhoneNumber();
	vector<Offer> getOffers();

	void setPlacedStudents();
	void showAppliedStudents();

	~Company()=default;									//Destructor
};
