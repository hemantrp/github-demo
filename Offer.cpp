#include "Offer.h"
#include<string.h>
#include<iostream>
using namespace std;

//parameterized constructor
Offer::	Offer(string role,string location,float pack,float bond,Date deadline,const Eligibility& eObj,vector<College> cvObj) : 
jobRole(role),jobLocation(location),package(pack),bond(bond),applicationDeadline(deadline),eligibilityCriteria(eObj)  {
	collgeList=cvObj;
}

//Copy constructor
Offer::Offer(Offer& of) {
	jobRole=of.jobRole;
	jobLocation=of.jobLocation;
	package=of.package;
	bond=of.bond;;
	applicationDeadline=of.applicationDeadline;
	eligibilityCriteria=of.eligibilityCriteria;
	collgeList=of.collgeList;
}											

//setter methods
void Offer::setJobRole(string role)
{
	jobRole = role;
}

void Offer::setJobLocation(string location)
{
	jobLocation = location;
}

void Offer::setPackage(float pack)
{
	package = pack;
}

void Offer::setBond(float bond)
{
	bond = bond;
}

void Offer::setDeadline(Date deadline)
{
	applicationDeadline.setDay(deadline.getDay());
	applicationDeadline.setMonth(deadline.getMonth());
	applicationDeadline.setYear(deadline.getYear());
}

void Offer::setEligibility(Eligibility criteria)
{
	eligibilityCriteria = criteria;
}

//getter methods
string Offer::getJobRole()
{
	return jobRole;
}

string Offer::getJobLocation()
{
	return jobLocation;
}

float Offer::getPackage()
{
	return package;
}

float Offer::getBond()
{
	return bond;
}

Date Offer::getDeadline()
{
	return applicationDeadline;
}

Eligibility Offer::getEligibility()
{
	return eligibilityCriteria;
}
