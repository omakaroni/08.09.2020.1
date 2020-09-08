#include <iostream>

int main() {
	char option;
	while (true) {
		std::cout << "\tA. Save the game" << std::endl;
		std::cout << "\tB. Restart the game" << std::endl;
		std::cout << "\tC. Select difficulity" << std::endl;
		std::cout << "\tF. Exit" << std::endl;
		std::cout << "Select  An Option" << std::endl;
		std::cout << std::endl;

		std::cin >> option;

		if (option == 65 || option == 97) {
			std::cout << "saving..." << std::endl;
			std::cout << std::endl;
		}
		else if (option == 66 || option == 98) {
			std::cout << "restarting the game" << std::endl;
			std::cout << std::endl;
		}
		else if (option == 67 || option == 99) {
			std::cout << "Please select difficulity (easy/hard)" << std::endl;
			std::cout << std::endl;
		}
		else if (option == 70 || option == 102) {
			exit(0);
		}
		else {
			std::cout << "\tInvalid input" << std::endl;
			std::cout << std::endl;
		}
	}
}




