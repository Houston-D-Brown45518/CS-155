//**********************************************************************************************
//
//  CS 155: Computer Science I
//  Spring Semester, 2017
//
//  Project # 4
//
//	This program will calculates the area and perimeter of triangles.
//	The program will start by taking the lengths of all three sides of however
//	many triangles that are in the text document.  It will then calculate
//	the semiperimeter, the perimeter, and the area.  Finally the program will
//	display the lengths of the three sides, the perimeter, the area, and the number
//	of triangles processed.  The numbers will be rounded to two decimal places.
//
//  Programmed by: Houston Brown
//
//  Date: 3/9/2017
//
//**********************************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;



//********************************************************************************
// Function for Semi_Perimeter, Perimeter, and Area
//********************************************************************************

double CalcSP(double side_1, double side_2, double side_3);
double CalcP (double SemiPer);
double CalcArea(double SemiPer, double side_1, double side_2, double side_3);


//********************************************************************************
// Driver
//********************************************************************************


int main (){


// Opening files

	
	ifstream infile;
	infile.open("project5.txt");
	
	if (infile.fail()){
		cout << "File Not Found" << endl;
		exit (1);	
	}
	
// Code	

	double side_1;		// varibales for the three sides and the number of triangles processed
	double side_2;
	double side_3;
	int num_of_tri;

	
	
	cout << "Side 1		Side 2		Side 3		Perimeter	  Area" <<  endl;


	while(infile.good()){			// loop for processing triangles
	
		infile >> side_1;
		infile >> side_2;
		infile >> side_3;
		
		double SemiPer = CalcSP(side_1,side_2,side_3);
		double Per = CalcP(SemiPer);
		double area = CalcArea(SemiPer,side_1,side_2,side_3);
	
		cout << fixed << setprecision(2)<< side_1 << "		" << fixed << setprecision(2)<< side_2 << "		" << fixed << setprecision(2)<< side_3 << "		"<< fixed << setprecision(2) << Per << "		"<<fixed << setprecision(2) << area <<endl;
		cout << endl;
		
		num_of_tri++;
	}
	

	cout << "Number of Triangles Processed: "<< num_of_tri << endl;






// Closing Files

    infile.close();

	
	
	return 0;
}


//********************************************************************************
// Function Definition Implementations
//********************************************************************************

//********************************************************************************
// Name : CalcSP
// Purpose: Takes all three sides of the triangle and adds them all
//          together then divides them by two 
// Incoming Information : Sides 1, 2, and 3 as doubles
// Outgoing Information : N/A 
// return Value: Semi-Perimeter as a double
//********************************************************************************

double CalcSP(double side_1, double side_2, double side_3){

	double SemiPer;
	SemiPer = ((side_1 + side_2 + side_3)/2);
	return SemiPer;

}



//********************************************************************************
// Name : Perimeter
// Purpose: Takes in the Semi-Perimeter and multiplies it by 2
//           
// Incoming Information : Semi-Perimeter as a doulbe
// Outgoing Information : N/A 
// return Value: Perimeter as a double
//********************************************************************************

double CalcP (double SemiPer){

	double Per = SemiPer * 2;
	return Per;

}




//********************************************************************************
// Name : CalcArea
// Purpose: Takes in length and wdith and calculates
//          area of a rectangle 
// Incoming Information : length and width as doubles
// Outgoing Information : N/A 
// return Value: area as a double
//********************************************************************************

double CalcArea(double SemiPer, double side_1, double side_2, double side_3){
	double area;
	area = sqrt(SemiPer*(SemiPer - side_1)*(SemiPer - side_2)*(SemiPer - side_3));
	return area;
}



