#include <iostream>

// This function is the entry point of the program. It prints a message, asks the user for a word, reads it, and prints it back.
int main (void)														// Main function, program starts here
{
	char buffer[512];												// Create a character array to store user input
	
	std::cout <<"Hello world !" << std::endl;						// Print "Hello world !" and go to a new line
	
	std::cout << "Input a word please : ";							// Ask the user to type a word
	std::cin >> buffer;												// Read a word from the user and store it in buffer
	std::cout << "Inputed word [ " << buffer << " ]" << std::endl;	// Print the word the user typed
	
	return (0);														// End the program and return 0 (success)
}

// tuto src : https://elearning.intra.42.fr/notions/piscine-c-d00-c-basics/subnotions/piscine-c-d00-c-basics-stdio-streams/videos/stdio-streams-d0e4e4ad-8385-454a-85e8-74b5d8cb3ca1