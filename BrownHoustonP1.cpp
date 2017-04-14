//******************************************************************************
//
//	CS155: Computer Science I
//	Spring Semester, 2017
//
//	Project #1
//	Produce a program that calculates a gross box office product for a movie at a cinema
//	and show how many adult tickets and children tickets were sold.Then show the amount the 
//	movie distributor earned as well as the cinemas' net profit.
//
//	Programmed by: Houston Brown
//
//	Due by: Tuesday, January 31, 2017
//
//******************************************************************************

#include <iostream>
#include <iomanip>
using namespace std; 

const int MAX = 80;


int main(){

char Movie[MAX] = "";

double Adult_Tickets;
double Adult_Tickets_Price= 7.50;
double Adult_Total_Cost;

double Children_Tickets;
double Children_Tickets_Price = 4.75;
double Children_Total_Cost;

double Gross_Box_Office_Profit;
double Distributor_Amount; 
double Net_Profit;


cout << "What is the name of the movie? "<< endl;
cin.getline(Movie, 80); 

cout << "How many adult tickets were sold?"<< endl;
cin >> Adult_Tickets; 

cout << "How many children tickets were sold?"<< endl;
cin >> Children_Tickets;

std::cout << "\n";

Adult_Total_Cost = Adult_Tickets * Adult_Tickets_Price;
Children_Total_Cost = Children_Tickets * Children_Tickets_Price;
Gross_Box_Office_Profit = Adult_Total_Cost + Children_Total_Cost ;
Distributor_Amount = Gross_Box_Office_Profit * 0.80;
Net_Profit= Gross_Box_Office_Profit - Distributor_Amount;


cout << Movie << endl;
cout << "Gross Box Office Profit: $" << Gross_Box_Office_Profit<< endl; 
cout << "Distributor Amount: $"<< std::fixed << std::setprecision(2) << Distributor_Amount << endl; 
cout << "Net Profit: $" << Net_Profit << endl;









return 0;
}
