/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:17:45 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/01 20:30:25 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : Type("") 
{
    std::cout << "constructor Animal is called " << std::endl;
}

Animal::Animal(const Animal& obj) : Type(obj.getType()) 
{
    std::cout << "constructor copy Animal is called " << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->Type = obj.getType();
    return (*this);
 }

 Animal::~Animal() {}


 // make Sound()

 void Animal::makeSound()
 {
    std::cout << "les chats n’aboient pas" << std::endl;
 }
 
 std::string Animal::getType() const
 {
    return (Type);
 }