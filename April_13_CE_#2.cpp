//********************************************************************************
//
//  CS 155: Computer Science I
//  Spring Semester, 2017
//
//  Assignment #8 
//
//  Programmed by: Houston Brown
//
//  Date: 4/13/2017
//
//********************************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

const int ROW = 2;
const int COL = 3;

void PrintArray(int table[ROW][COL]);

int main(){									//10 20 30
											//40 50 60
    int t [ROW][COL];

	int num = 10;
	int iter = 1;
	
    for(int r = 0; r < 2; r++){
        for(int c = 0; c < 3; c++)
           t[r][c] = num * iter++;

	}
	
	PrintArray(t);
        
    
    return 0;
}


//********************************************************************************
// Name : PrintArray
// Purpose: Takes in the array displays it to the screen
// Incoming Information : The Array table
// Outgoing Information : N/A 
// Return Value: N/A
//********************************************************************************
void PrintArray(int table[ROW][COL]){

	for(int r = 0; r < ROW; r++){
		for(int c = 0; c < COL; c++){
			cout << table[r][c] << " ";
		}
		cout << endl;
		
	}
}


