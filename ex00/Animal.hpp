/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:45:37 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/01 10:46:18 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    private:
        std::string Type;
    public:
        Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        ~Animal();
        
        void makeSound() ;
        std::string getType() const ;
};

#endif
