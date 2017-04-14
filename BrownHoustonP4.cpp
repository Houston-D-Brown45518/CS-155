//*************************************************************************************************************************
//
//  CS 155: Computer Science I
//  Spring Semester, 2017
//
//  Project # 4
//
// 	Program for a vending machine that gives the user 4 options.
//	The user will input the amount of money within the range [45...100] in fives.
//	Then the program will present a menu of 4 items priced at 45, 50, 75, and 100 cents.
//	The user will pay for whichever item in cents.
//	Once the user has selected an item and payed the program will send a message letting them know it has been sent,
//	then present the amount of change due in fives.
//	If the amount entered is outside of the given range the program will terminate with an appropriate message.
//
//  Programmed by: Houston Brown
//
//  Date: 2/28/2017
//
//**************************************************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

const double CG = 0.45;
const double SB = 0.50;
const double DC = 0.75;
const double BW = 1.00;

int main (){
	
	int money;		// initializing variable for money entered
	int choice;		// intiializing variable for user's choice
	int change;		// intiializing variable for change due
	int quarters;	// intiializing variable for quarters back
	int nickels;	// intiializing variable for nickels back
	int dimes;		// intiializing variable for dimes back
	int qr;			// intiializing variable for remainder after forumla of quarters
	int dr;			// intiializing variable for remainder after forumla of dimes
	int nr;			// intiializing variable for remainder after forumla of nickels


	cout << "Please Input an Amount of Money in Cents, Denominations of 5, and Within the Range [45... 100]"<< endl;	// Prompting user for money to input
	cin >> money;
	
	while (money % 5 != 0){													//Loop for when money is not in fives
	
		cout << endl;
	
		cout << "Invalid Input"<< endl;
		cout << endl;
	
		cout << "Input a Number in Denominations of Five"<< endl;
		cin >> money;
	}
		

	while((money >= 45)&&(money <=100)){									// Loop for input

		cout << "----------------Menu----------------"<< endl;				// vending machine options
		cout << "Chewing Gum :		  $0.45"<< endl;
		cout << "Snickers Bar:		 "<< setw(6) << " $0.50"<< endl;
		cout << "Doritos:		 "<< setw(6) << " $0.75"<< endl;
		cout << "Bottled Water:		"<< setw(7) << " $1.00"<< endl;
		
	
		cout << endl;
	
	
		cout << "What Item Would You Like To Buy?(Enter in Cents)"<< endl;	// requesting the user's choice
		cin >> choice;


		change = money - choice;											// equation for change 
	
	
		while (change < 0){													// Loop for when change is negative 
	
			cout << endl;
		
			cout << "Invalid"<< endl;
			cout << endl;
		
			cout << "Make a Valid Selection" << endl;
			cin >> choice;
		
			change = money - choice;
		}
		
	
		if (choice == 45){													//  check to see if the choice is valid
		
			cout << endl;
			cout << "Your Choice is: Chewing Gum"<< endl;
			cout << endl;
		
		}
		
		else if (choice == 50){
		
			cout << endl;
			cout << "Your Choice is: Snickers Bar"<< endl;
			cout << endl;
		
		}
		
		else if (choice == 75){
	
			cout << endl;
			cout << "Your Choice is: Doritos" << endl;
			cout << endl;
		
		}
		
		else if (choice == 100){
		
			cout << endl;
			cout << "Your Choice is: Bottled Water"<< endl;
			cout << endl;

		}
		
	
	
	
		while((choice!=45) && (choice!=50) && (choice!=75) && (choice!=100)){			// Loop for if the user's choice is not valid
		
			cout << "Invalid Input"<< endl;
			cout << endl;
		
			cout << "What Item Would You Like To Buy?(Enter in Cents)"<< endl;
			cin >> choice;			
		}
		
	

		quarters = change / 25;															// Formulas for finding change in the various denominations
		qr = change % 25;
		dimes = qr / 10; 
		dr= qr % 10;
		nickels= dr / 5;
	

		cout << "Your Change is: "<< change<< endl;										// Outputting the results
		cout << endl;
		cout << "Denominations: " <<quarters <<" Quarters "<<  dimes << " Dimes "<< nickels<< " Nickels " <<  endl;
		cout << endl;
	
	
	
		cout << "Please Input an Amount of Money in Cents, and Within the Range [45... 100]"<< endl;
		cin >> money;
		
}
		
	cout << "Goodbye!"<< endl;															// Ending message
	

	return 0;
}

