//*************************************************************************************************************************
//
//  CS 155: Computer Science I
//  Spring Semester, 2017
//
//  Project # 6
//
//	Program that will keep up with the number of points a certain basketball player makes in a single game.
//	The program will record the events: free throw make/miss, field goal make/miss, and three pointer
//	make/miss.  All of the events recorded will be sent to an output file.  Once the user is finished recording all the points in a given game
//	they can input a 'Q' or a 'q' to end the tallying of points.  Then a table, taken from the output file, 
//	will display the total amount of points the player has earned.  
//
//  Programmed by: Houston Brown
//
//  Due by: Friday, March 24, 2017
//
//**************************************************************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


char		Display_Menu();
void		Record_Event(ofstream& ofile,string message);
void		Generate_Summary(ofstream& ofile, int FT, int FG, int TP, double FTA, double FGA, double TPA, double PFT, double PFG, double PTP);



int main (){							//begin main
		

	ofstream ofile("BrownHouston_MM.txt");
	
	if (ofile.fail()){
		cout << "Error" << endl;
	}

	
	//Declarations of variables
	
	char 		Choice;						//  Character for User's Choice
	string 		message;					//  Message that will be displayed telling what action has taken place
	int			FT = 0;						//	Counters for Actions Taken
	int			FM = 0;
	int 		FG = 0;
	int 		FGM = 0;
	int 		TP = 0;
	int 		TPM = 0;
	int			TPE = 0;
	double		FTA = 0;					// Counters for total attempts of free throws
	double		FGA = 0;					// Counter for total attempts of two pointers
	double 		TPA = 0;					// Counter for total attempts of three pointers
	
	
	ofile << "Michael Jordan"<< endl;
	
	
	
	// Loop that will continue to ask for what action has taken place
	// until the letters Q or q have be inputted, signalling the end of the game
	
	
	while (Choice != 'Q' && Choice != 'q'){				// Begin While Loop 
		
		
		Choice = Display_Menu();						// Call for First Function to display menu of options
	

		if (Choice == 'F'||Choice == 'f'){
		
			FT++;
			TPE++;
		
			message = "Free Throw Made	1 point";
			Record_Event(ofile, message);				// Call for Second Function to send choice to console and file

		}
	
		else if (Choice == 'X'||Choice == 'x'){
		
			FM++;

			message =  "Free Throw Miss" ;
			Record_Event(ofile, message);
		
		}
	
		else if (Choice == 'G'||Choice == 'g'){
		
			FG++;
			TPE = TPE + 2;
		
			message =  "Field Goal Made	2 points";
			Record_Event(ofile, message);
		
		}
	
		else if (Choice == 'Y'||Choice == 'y'){
		
			FGM++;

		
			message = "Field Goal Miss" ;
			Record_Event(ofile, message);
		
		}
	
		else if (Choice == 'T'||Choice == 't'){
		
			TP++;
			TPE = TPE + 3;

		
			message = "Three Pointer Made	3 points" ;
			Record_Event(ofile, message);
		
		}
	
		else if (Choice == 'Z'||Choice == 'z'){
		
			TPM++;


			message = "Three Pointer Miss";
			Record_Event(ofile, message);
			
		}
		
		else if (Choice =='Q'||Choice =='q'){
		
			message = "Game Over" ;
			Record_Event(ofile, message);
		
		}
		
		else{
			cout << "Invalid Input. Please Select a Correct Input" << endl;
		}
		
		cout << endl;
	
}										// End While Loop
	
	
	
	
	FTA = FT + FM;						// Equations for total attempts of all actions
	FGA = FG + FGM;
	TPA = TP + TPM;


	double PFT = (FT / FTA) * 100;		// Equations for Percentages
	double PFG = (FG / FGA) * 100;
	double PTP = (TP / TPA) * 100; 
	
	
	
	
	
	Generate_Summary(ofile,FT, FG, TP, FTA,FGA,TPA,PFT,PFG,PTP);	// Call for FInal Function to show totals, attempts, and percentages

	
	

	
	ofile.close();
	
	return 0;
}




//*******************************************
//Name: Display_Menu
//Purpose: Present a Menu of Actions to be Recorded
//Incoming: char
//Outgoing: N/A
//Return: Character Choice
//*******************************************

char		Display_Menu(){
	
	char Choice;


	// Menu of Actions that can be made
		
	cout << "F - Free Throw Made" << endl;
	cout << "X - Free Throw Miss" << endl;
	cout << "G - Two Point Field Goal Made" << endl;
	cout << "Y - Two Point Field Goal Miss" << endl;
	cout << "T - Three Pointer Made" << endl;
	cout << "Z - Three Pointer Miss" << endl;
	cout << endl;
	
	cout << "Choose an Action" << endl;
	cin >> Choice;
	
	
	

	
	return Choice;

}




//*******************************************
//Name: Record_Event
//Purpose: Determine What Action Has Taken Place
//Incoming: Count 
//Outgoing: Count
//Return: Message of which action has taken place
//*******************************************

void		Record_Event(ofstream& ofile,string message){
						
	ofile << message << endl;
	cout << message << endl;	
		
	
}





//*******************************************
//Name: IsDigit
//Purpose: determine if a character is a digit
//Incoming: char
//Outgoing: N/A
//Return: true if a digit, false if not
//*******************************************

void		Generate_Summary(ofstream& ofile, int FT, int FG, int TP, double FTA, double FGA, double TPA, double PFT, double PFG, double PTP){



	cout << endl;
	cout << "Shot			Makes			Attemps			%Made" << endl;
	
	cout << "Free Throws		"<<FT<<"			"<<FTA<<"			"<< fixed << setprecision(2)<<PFT << "%" << endl;
	cout << "Two Pointers		"<<FG<<"			"<<FGA<<"			"<< fixed << setprecision(2)<<PFG << "%" << endl;
	cout << "Three Pointers		"<< TP <<"			"<< TPA <<"			"<< fixed << setprecision(2)<<PTP << "%" << endl;
	cout << endl;
	

	ofile << "Shot			Makes			Attemps			%Made" << endl;
	
	ofile << "Free Throws			"<<FT<<"				"<<FTA<<"			"<< fixed << setprecision(2)<<PFT << "%" << endl;
	ofile << "Two Pointers		"<<FG<<"			"<<FGA<<"			"<< fixed << setprecision(2)<<PFG << "%" << endl;
	ofile << "Three Pointers		"<< TP <<"			"<< TPA <<"			"<< fixed << setprecision(2)<<PTP << "%" << endl;


}






