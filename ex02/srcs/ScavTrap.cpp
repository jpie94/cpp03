/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:09:14 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 15:08:06 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor called !"<< std::endl;
    this->_name = "unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

ScavTrap::ScavTrap(std::string const name)
{
    std::cout << "ScavTrap Name constructor called: " << name << " appeared !"<< std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap & srcs)
{
    std::cout << "ScavTrap Copy constructor called: a " << srcs._name << " clone appeared !" << std::endl;
    this->_name = srcs._name;
    this->_hitPoints = srcs._hitPoints;
    this->_energyPoints = srcs._energyPoints;
    this->_attackDamage = srcs._attackDamage;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called : "<< this->_name << " got pwned !" << std::endl;
    return;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
    std::cout<<"ScavTrap Copy assignment operator called : " << this->_name<< " is morphing into " << rhs._name << " !" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return(*this);    
}

void ScavTrap::attack(const std::string & target)
{
    if (!this->_energyPoints)
    {
        std::cout << "ScavTrap " << this->_name << " can't attack, it has no energy left !" <<std::endl;
        return ;
    }
    if (!this->_hitPoints)
    {
        std::cout << "ScavTrap " << this->_name << " can't attack, it's already dead! " <<std::endl;
        return ;
    } 
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "ScavTrap " << this->_name << " energy level decreased to " << --this->_energyPoints << " !" <<std::endl;
    return;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode !" << std::endl; 
    return; 
}