/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahlao <achahlao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:04:20 by achahlao          #+#    #+#             */
/*   Updated: 2025/05/03 02:52:06 by achahlao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "constructor de Brain  " << std::endl;
    for (size_t i = 0; i < 100; ++i)
        ideas[i] = "idea";
}

Brain::Brain(const Brain& obj)
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << "--------  " << ideas[i] << "----" << obj.ideas[i] << std::endl;
        ideas[i] = obj.ideas[i];
 
    }
    std::cout << " Copy constructor de Brain" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];
    }
    std::cout << "Brain assignment operator "<< std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}
