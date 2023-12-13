#include "MyAwesomePhoneBook.hpp"

void PhoneBook::addContact()
{
		if (nbr == 8)
		{
			nbr = 0;
		}
		if (nbr < 8)
		{
			Contact newContact;

			while (newContact.firstName.empty())
			{
				std::cout << "Please enter the firstname: ";
				std::cin >> newContact.firstName;
			}

			while (newContact.lastName.empty())
			{
				std::cout << "Please enter the lastname: ";
				std::cin >> newContact.lastName;
			}

			while (newContact.nickName.empty())
			{
				std::cout << "Please enter the nickname: ";
				std::cin >> newContact.nickName;
			}

			while (newContact.phoneNumber.empty())
			{
				std::cout << "Please enter the phone number: ";
				std::cin >> newContact.phoneNumber;
			}

			std::cin.ignore();

			while (newContact.darkestSecret.empty())
			{
				std::cout << "Please enter the darkest secret: ";
				std::getline(std::cin, newContact.darkestSecret);
			}
			contacts[nbr] = newContact;
			nbr++;
		}
}

void PhoneBook::searchContact()
{
		int		i;
	
		std::cout << std::setw(10) << "index" << "|";
		std::cout << std::setw(10) << "firstname" << "|";
		std::cout << std::setw(10) << "lastname" << "|";
		std::cout << std::setw(10) << "nickname" << std::endl;

		i = 0;
		while (i < 8)
		{
			if (!contacts[i].firstName.empty())
			{
				std::cout << std::setw(10) << i << "|";
				std::cout << std::setw(10) << (contacts[i].firstName.length() > 10 ? contacts[i].firstName.substr(0, 9) + "." : contacts[i].firstName) << "|";
				std::cout << std::setw(10) << (contacts[i].lastName.length() > 10 ? contacts[i].lastName.substr(0, 9) + "." : contacts[i].lastName) << "|";
				std::cout << std::setw(10) << (contacts[i].nickName.length() > 10 ? contacts[i].nickName.substr(0, 9) + "." : contacts[i].nickName) << std::endl;
			}
			i++;
		}

		std::cout << "Please enter the index of the contact to display it :";
		std::cin >> i;
		std::cout << contacts[i].firstName << std::endl;
		std::cout << contacts[i].lastName << std::endl;
		std::cout << contacts[i].nickName << std::endl;
		std::cout << contacts[i].phoneNumber << std::endl;
		std::cout << contacts[i].darkestSecret << std::endl;
}

int	main()
{
	PhoneBook directory;
	std::string input;
	directory.nbr = 0;

	while (1)
	{
		std::cout << "Please, write the option you want (ADD, SEARCH or EXIT):";
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "Exiting the program\n";
			break;
		}
		else if (input == "ADD")
		{
			directory.addContact();
		}
		else if (input == "SEARCH")
		{
			directory.searchContact();
		}
		else
		{
			std::cout << "Option not found: try with ADD, SEARCH or EXIT\n";
		}
	}
	return (0);
}
