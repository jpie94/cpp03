/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:39:33 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 12:56:53 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected :

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        
    public :
        ClapTrap(void);
        ClapTrap(std::string const name);
        ClapTrap(ClapTrap const & srcs);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const & rhs);
        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif