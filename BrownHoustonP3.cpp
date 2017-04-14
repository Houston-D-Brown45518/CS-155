//******************************************************************************************************
//
//	CS155: Computer Science
//	Spring Semester, 2017
//
//	Project #3 
//	Produce a program for Leo's Pizza Parlor that will help take customer's orders.
//	The program will determine what type of pizza the customer wants, how many beverages and salads 
//	they want if any at all.  Then it will display all of their decisions along with a running total
//	of everything they wish to purchase in an invoice.  
//
//	Programmed by: Houston Brown
//
//	Due by: Tuesday, Feburary 14, 2017
//
//
//*******************************************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

const double CP = 7.25;
const double ML = 12.75;
const double CCCP = 9.50;
const double BP = 1.25;
const double SP = 2.75;


int main(){
	
	int pizza_number;
	int number_of_beverages;
	int number_of_salads;
	double beverage_total;
	double salad_total;
	double total ;
	
	cout << "Welcome to Leo's Pizza Parlor!" << endl;
	std::cout << "\n";

	cout << "What type of pizza would you like to purchase? "<< endl;
	std::cout << "\n";
	
	cout << "1.) Cheese Pizza $7.25"<< endl;
	cout << "2.) Meatlover's Pizza $12.75" << endl;
	cout << "3.)Chocolate Chip Cookie Pizza $9.50 "<< endl;
	cout << "Select your pizza (1-3)" << endl;
	
	std::cout << "\n";
	cin >> pizza_number;
	std:: cout << "\n";
	
	if (pizza_number <= 0 || pizza_number > 3){
		cout << "Invalid Number"<< endl;
		return 0;
	}
	else


	
	cout << "How many beverages would you like to order?"<< endl;
	cin >> number_of_beverages;
	std:: cout << "\n";	
	
	if (number_of_beverages <=0){
		cout<< "" << endl;	
	}
	
	else if (number_of_beverages > 0){
		beverage_total= number_of_beverages* BP;}
		
		


	cout << "How many salads would you like to order?"<< endl;
	cin >> number_of_salads;
	std:: cout << "\n";
	
	if (number_of_salads <=0){
		cout << "" << endl;
	}
	
	else if (number_of_salads > 0 ){
		salad_total = number_of_salads * SP;}
	
	
	total= salad_total + beverage_total + CP  ;
	
	
	

	
	cout << "------------INVOICE------------"<< endl;
	std:: cout << "\n";
	
	
	
	if (pizza_number== 1){
		cout<< "Cheese Pizza "<< setw(23) << "$ " << fixed << setprecision(2) << CP << endl;
		total= salad_total + beverage_total + CP  ;	
	}
	else if (pizza_number == 2){
		cout << "Meatlover's Pizza "<< setw(17) << "$ " << fixed << setprecision(2) << ML<< endl;
		total= salad_total + beverage_total + ML  ;	
	}
	else if (pizza_number == 3){
		cout << "Chocolate Chip Cookie Pizza "<< setw(8) << "$ " << fixed << setprecision(2) << CCCP << endl;
		total= salad_total + beverage_total + CCCP  ;
	}

	



	if (number_of_beverages == 0){
		
	}
	else if (number_of_beverages > 0){
	cout << number_of_beverages << " Beverage(s)	"<<  fixed << setprecision(2) << setw(20) << "$ " << beverage_total << endl;
	}
	
	
	
	
	
	if (number_of_salads == 0){
		
	}
	else if (number_of_salads > 0 ){
	cout << number_of_salads << " Salad(s)	"<< fixed << setprecision(2) << setw(20) << "$ " << salad_total << endl;
	
	}





	cout << "Total Due: " << setw(24) << "$ " << total << endl;
	
	return 0;
}
