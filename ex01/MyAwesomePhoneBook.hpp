#ifndef MY_AWESOMEPHONEBOOK_HPP
# define MY_AWESOMEPHONEBOOK_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class Contact
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	friend class PhoneBook;
};

class PhoneBook
{
	public:
	Contact contacts[8];
	int		nbr;

	void addContact();
    void searchContact();
};

#endif