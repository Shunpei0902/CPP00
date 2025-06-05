/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:40 by sasano            #+#    #+#             */
/*   Updated: 2025/06/05 18:08:13 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
    top = 0;
    return ;
}

Phonebook::~Phonebook()
{
    return ;
}

void Phonebook::add()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return ;
    }
    if (first_name.empty() || first_name.find_first_of(" \t\r\v\f") != std::string::npos)
    {
        std::cout << "First name cannot be empty or contain whitespace characters." << std::endl;
        return ;
    }
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return ;
    }
    if (last_name.empty() || last_name.find_first_of(" \t\r\v\f") != std::string::npos)
    {
        std::cout << "Last name cannot be empty or contain whitespace characters." << std::endl;
        return ;
    }
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return ;
    }
    if (nickname.empty() || nickname.find_first_of(" \t\r\v\f") != std::string::npos)
    {
        std::cout << "Nickname cannot be empty or contain whitespace characters." << std::endl;
        return ;
    }
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return ;
    }
    if (phone_number.empty() || phone_number.find_first_of(" \t\r\v\f") != std::string::npos)
    {
        std::cout << "Phone number cannot be empty or contain whitespace characters." << std::endl;
        return ;
    }
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return ;
    }
    if (darkest_secret.empty() || darkest_secret.find_first_of(" \t\r\v\f") != std::string::npos)
    {
        std::cout << "Darkest secret cannot be empty or contain whitespace characters." << std::endl;
        return ;
    }

    contacts[top] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
    if (top < 7)
        top++;
    else
        top = 0;
}

void Phonebook::search()
{
    int i;
    std::string index;

    i = 0;
    if (top == 0 && contacts[0].isnull())
    {
        std::cout << "Your Phonebook is empty!!\n";
        return ;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    while (i < 8)
    {
        if (contacts[i].isnull())
            break;
        std::cout << "|" << std::setw(10) << i << "|";
        contacts[i].display_list();
        i++;
    }
    std::cout << "Enter index: ";
    std::getline(std::cin, index);
    if (index.length() == 1 && isdigit(index[0]) && index[0] - '0' < i && contacts[index[0] - '0'].isnull() == 0)
        contacts[index[0] - '0'].display();
    else
        std::cout << "Invalid index." << std::endl;
}

