/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:49 by sasano            #+#    #+#             */
/*   Updated: 2025/06/04 16:40:15 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{   
    return ;
}

Contact::~Contact(void)
{
    return ;
}

Contact::Contact(const std::string first_name, const std::string last_name, const std::string nickname, const std::string phone_number, const std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

int Contact::isnull()
{
    if (first_name.empty())
        return (1);
    return (0);
}

void Contact::display_list() const
{
    if (first_name.size() > 10)
        std::cout << std::string(first_name.begin(), first_name.begin() + 9) << '.';
    else
        std::cout << std::setw(10) << first_name;
    std::cout << "|";
    if (last_name.size() > 10)
        std::cout << std::string(last_name.begin(), last_name.begin() + 9) << '.';
    else
        std::cout << std::setw(10) << last_name;
    std::cout << "|";
    if (nickname.size() > 10)
        std::cout << std::string(nickname.begin(), nickname.begin() + 9) << '.';
    else
        std::cout << std::setw(10) << nickname;
    std::cout << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void Contact::display() const
{
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
