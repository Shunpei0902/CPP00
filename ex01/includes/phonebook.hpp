/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 14:06:32 by sasano            #+#    #+#             */
/*   Updated: 2024/12/28 14:06:34 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
class Phonebook {
    private:
        int top;
        Contact contacts[8];

    public:
        Phonebook();
        ~Phonebook();
        void add();
        void search() const;
}
#endif