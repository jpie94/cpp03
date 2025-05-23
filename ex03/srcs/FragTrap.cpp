/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:09:14 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 12:04:16 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default constructor called !"<< std::endl;
    this->_name = "unkown";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return;
}

FragTrap::FragTrap(std::string const name)
{
    std::cout << "FragTrap Name constructor called: " << name << " appeared !"<< std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return;
}

FragTrap::FragTrap(const FragTrap & srcs)
{
    std::cout << "FragTrap Copy constructor called: a " << srcs._name << " clone appeared !" << std::endl;
    this->_name = srcs._name;
    this->_hitPoints = srcs._hitPoints;
    this->_energyPoints = srcs._energyPoints;
    this->_attackDamage = srcs._attackDamage;
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called : "<< this->_name << " got pwned !" << std::endl;
    return;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
{
    std::cout<<"FragTrap Copy assignment operator called : " << this->_name<< " is morphing into " << rhs._name << " !" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return(*this);    
}

void FragTrap::attack(const std::string & target)
{
    if (!this->_energyPoints)
    {
        std::cout << "FragTrap " << this->_name << " can't attack, it has no energy left !" <<std::endl;
        return ;
    }
    if (!this->_hitPoints)
    {
        std::cout << "FragTrap " << this->_name << " can't attack, it's already dead! " <<std::endl;
        return ;
    } 
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "FragTrap " << this->_name << " energy level decreased to " << --this->_energyPoints << " !" <<std::endl;
    return;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests a positive high-fives !" << std::endl; 
    return; 
}