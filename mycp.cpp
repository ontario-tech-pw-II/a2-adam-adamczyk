#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	
	// check if there are enough arguments
	if(argc != 3){
		cout << "Incorrect amount of arguments." << endl;
		cout << "You provided: " << argc << endl;
		cout << "Intended amount: 3" << endl;
	}
	
	// open the first file
	fin.open(argv[1]);
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	
	fout.open(argv[2]);
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 