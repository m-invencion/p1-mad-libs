#include <iostream>
#include <string>

int main() {
	// Welcome message
	std::cout << "Let's play Mad Libs!\n\n\n";
	
	// Declaring string variables and assigning them the user's input
	std::cout << "Give me a noun: ";
	std::string noun1;
	std::cin >> noun1;

	std::cout << "Give me an adjective: ";
	std::string adj1;
	std::cin >> adj1;

	std::cout << "Give me another adjective: ";
	std::string adj2;
	std::cin >> adj2;

	std::cout << "Give me a noun: ";
	std::string noun2;
	std::cin >> noun2;

	std::cout << "Give me a verb ending in \"ing\": ";
	std::string verb1;
	std::cin >> verb1;

	std::cout << "Give me a plural noun: ";
	std::string pluralNoun1;
	std::cin >> pluralNoun1;

	std::cout << "Give me an adjective: ";
	std::string adj3;
	std::cin >> adj3;

	std::cout << "Give me a plural noun: ";
	std::string pluralNoun2;
	std::cin >> pluralNoun2;

	std::cout << "Give me another plural noun: ";
	std::string pluralNoun3;
	std::cin >> pluralNoun3;

	std::cout << "Give me an adjective: ";
	std::string adj4;
	std::cin >> adj4;

	std::cout << "Give me a noun: ";
	std::string noun3;
	std::cin >> noun3;

	// Printing the story
	std::cout << "\n\nThis weekend my " << noun1 << " is taking me camping.\n"
		"We go every year to the same spot as it's very " << adj1 << ", and \n"
		"the views are " << adj2 << " from the top of the " << noun2 << ".\n\n";

	std::cout << "We build a fire which is where all of the " << verb1 << " of \n"
		"our food is done. I love toasting " << pluralNoun1 << " over the fire. \n"
		"They taste very " << adj3 << "!\n\n";

	std::cout << "When you're camping you have to watch out for " << pluralNoun2 << " \n" <<
		"and " << pluralNoun3 << ". It is very " << adj4 << " in the tent at night \n"
		"so it is best to remember to bring a " << noun3 << ".\n\n\n";
	
	// End message
	std::cout << "Thanks for playing!\n(Mad Libs story template from Hess Un-Academy.)\n";
}
