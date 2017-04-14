//******************************************************************************
//
//	CS155: Computer Science I
//	Spring Semester, 2017
//
//	Project # 2
//	Produce a program that will take an inputted date in the form YYYY-MM-DD.
//	The program will take the date and rearrange it to the form MM/DD/YYYY.
//	The progam will also provide an invalid format message if the date that
//	has been inputted does not meet the criteria.
//	
//	Programmed by: Houston Brown
//
//	Due by: Tuesday, February 7, 2017
//
//***************************************************************************

#include <iostream>
#include <iomanip>
using namespace std; 


int main (){
	
	int date;
	int year;
	int day;
	int month;

	cout << "Enter a Date in the Format YYYY-MM-DD: " << endl; 
	std::cout << "\n";
	cin >> date;
	std::cout << "\n";

	if (date < 100000000){ 
        year = date / 10000;
        day = date % 100;
        month = date % 10000;
        month = month / 100;}  
	else{
	cout<< "The Date Entered is in the Incorrect Format."<< endl;}
	if(day > 31){
		cout<< "The Date Entered is in the Incorrect Format."<< endl;} 
	
	else if (month > 12){
		cout << "The Date Entered is in the Incorrect Format."<< endl;}
	
	else{
		cout << "Date: "<< month << "/"<< day << "/" << year <<  endl;}


	
	
	
	
	
	
	
	
	return 0;
}
