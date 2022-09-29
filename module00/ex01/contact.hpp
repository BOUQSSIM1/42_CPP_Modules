/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:19:10 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/09/29 20:59:49 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#define _string std::string
#include <iostream>
#include <iomanip>

class Contact{
    private:
        _string first_name;
        _string last_name;
        _string nickname;
        _string phone_number;
        _string darkest_secret;

    public:
    //getters:
    _string getFirstName();
    _string getLastName();
    _string getNickname();
    _string getPhoneNumber();
    _string getDarkestSecret();

    //setters:
    void setFirstName(_string fn);
    void setLastName(_string ln);
    void setNickName(_string nn);
    void setPhoneNumber(_string ph);
    void setDarkestSecret(_string ds);
};


#endif
