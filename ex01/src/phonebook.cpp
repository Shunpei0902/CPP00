/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:40 by sasano            #+#    #+#             */
/*   Updated: 2024/12/28 14:24:43 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
    top = 0;
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
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);

    contacts[top].seContact(first_name, last_name, nickname, phone_number, darkest_secret);
    if (top < 8)
        top++;
    else
        top = 0;
}

void Phonebook::search() const
{
    int i;
    std::string index;

    i = 0;
    while (i < top)
    {
        contacts[i].display();
        i++;
    }
    std::cout << "Enter index: ";
    std::getline(std::cin, index);
    if (index.length() == 1 && isdigit(index[0]) && index[0] - '0' < top)
        contacts[index[0] - '0'].display();
    else
        std::cout << "Invalid index." << std::endl;
}

