#include <iostream> 
using namespace std; 

int main(int argc, char **argv) 
{ 
	int num = stoi(argv[1]); // typecast the string to an int
  cout << num * 3;         // print the int multiiplied by 3

	return 0; 
} 
