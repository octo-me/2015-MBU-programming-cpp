#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	int guess=0; 
	// declare variable as counter for number of guesses
	int count=0;
	
	for(;;)
	{
		// increment guess counter
		count=count + 1;
		// read input from user
		cin>>guess;
		
		// compare input from user to random number
		
		// print out winner, too high or too low message
		 if (guess==random_number)
		 {
		 	cout<<"you win"<< endl;
		 	break;
		 	
		 }else if (guess<random_number){
			cout <<"too low"<< endl;
		}
		
		else{
			cout << "tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo high" << endl; 
			
		}

	// print message with number of guesses
	cout << "guesses =";
	cout << count << endl;
}
	return 0;
}
