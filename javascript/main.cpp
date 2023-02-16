// Don't ask why cpp in web site
#include <iostream>
#include <string>

int main() {
	std::string websiteName;
	std::cout << "Please enter the name of your website: ";
	std::cin >> websiteName;

	std::cout << std::endl << "Creating website code for " << websiteName << std::endl;

	std::cout << "<html>" << std::endl;
	std::cout << "<head>" << std::endl;
	std::cout << "<title>" << websiteName << "</title>" << std::endl;
	std::cout << "</head>" << std::endl;
	std::cout << "<body>" << std::endl;
	std::cout << "<h1>Welcome to " << websiteName << "!</h1>" << std::endl;
	std::cout << "</body>" << std::endl;
	std::cout << "</html>" << std::endl;

return 0;
}
