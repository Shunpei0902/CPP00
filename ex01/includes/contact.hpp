/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:17 by sasano            #+#    #+#             */
/*   Updated: 2024/12/28 14:06:22 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
// # include <string>
// #include <iomanip>
# include <cctype>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
        Contact();
        ~Contact();
        void Contact(const std::string first_name, const std::string last_name, const std::string nickname, const std::string phone_number, const std::string darkest_secret);
        void display() const;
};

#endif