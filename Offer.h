#pragma once
#include<iostream>
#include"Date.h"
#include"Eligibility.h"
#include"College.h"
#include<vector>
using namespace std;

class Offer {
private:
	string jobRole;
	string jobLocation;
	float package;
	float bond;
	Date applicationDeadline;
	Eligibility eligibilityCriteria;
	vector<College> collgeList;

public:
	Offer()=default;														//Default constructor
	Offer(string,string,float,float,Date,const Eligibility&,vector<College>);		//Parameterized constructor
	Offer(Offer& of);												//Copy constructor

	void setJobRole(string);
	void setJobLocation(string);
	void setPackage(float);
	void setBond(float);
	void setDeadline(Date);
	void setEligibility(Eligibility);
	string getJobRole();
	string getJobLocation();
	float getPackage();
	float getBond();
	Date getDeadline();
	Eligibility getEligibility();

	~Offer()=default;														//Destructor
};