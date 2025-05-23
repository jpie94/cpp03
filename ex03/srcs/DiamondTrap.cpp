/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:09:14 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 15:22:05 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap Default constructor called !"<< std::endl;
    this->_name = "unknown";
    ClapTrap::_name = "unknown_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string const name)
{
    std::cout << "DiamondTrap Name constructor called: " << name << " appeared !"<< std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::temp;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap & srcs)
{
    std::cout << "DiamondTrap Copy constructor called: a " << srcs._name << " clone appeared !" << std::endl;
    this->_name = srcs._name;
    ClapTrap::_name = srcs._name + "_clap_name";
    this->_hitPoints = srcs._hitPoints;
    this->_energyPoints = srcs._energyPoints;
    this->_attackDamage = srcs._attackDamage;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called : "<< this->_name << " got pwned !" << std::endl;
    return;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & rhs)
{
    std::cout<<"DiamondTrap Copy assignment operator called : " << this->_name<< " is morphing into " << rhs._name << " !" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->ClapTrap::_name = rhs._name + "_clap_name";
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return(*this);    
}
void DiamondTrap::attack(std::string const & target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Name = " << this->_name << std::endl;
    std::cout << "ClapTrap name = " << this->ClapTrap::_name << std::endl;
    return; 
}