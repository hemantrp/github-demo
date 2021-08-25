#include<iostream>
#include<string.h>
#include"Company.h"
#include<vector>
using namespace std;

//parameterized constructor
Company::Company(string name,string email,string pnumber,vector<Offer> of) : companyName(name),companyEmail(email),phoneNumber(pnumber) {		
	offers=of;
}

//Copy constructor
Company::Company(Company& c){
	companyName=c.companyName;
	companyEmail=c.companyEmail;
	phoneNumber=c.phoneNumber;
	offers=c.offers;
}


//setter methods
void Company::setName(string name)													
{
	companyName = name;
}

void Company::setEmail(string email)
{
	companyEmail = email;
}

void Company::setPhoneNumber(string pnumber)
{
	phoneNumber = pnumber;
}

void Company::setOffer(Offer of)
{
	offers.push_back(of);
}

//getter methods
string Company::getName()															
{
	return companyName;
}

string Company::getEmail()
{
	return companyEmail;
}

string Company::getPhoneNumber()
{
	return phoneNumber;
}

vector<Offer> Company::getOffers()
{
	return offers;
}
