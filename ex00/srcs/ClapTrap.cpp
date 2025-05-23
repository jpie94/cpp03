/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:47:32 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 15:06:50 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called !"<< std::endl;
    this->_name = "unknown";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;
}

ClapTrap::ClapTrap(std::string const name)
{
    std::cout << "ClapTrap Named constructor called: " << name << " appeared !"<< std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & srcs)
{
    std::cout << "ClapTrap Copy constructor called: a " << srcs._name << " clone appeared !" << std::endl;
    this->_name = srcs._name;
    this->_hitPoints = srcs._hitPoints;
    this->_energyPoints = srcs._energyPoints;
    this->_attackDamage = srcs._attackDamage;
    std::cout << "Hit points is : " << this->_hitPoints <<std::endl;
    std::cout << "Energy points is : " << this->_energyPoints <<std::endl;
    std::cout << "Attack damage is : " << this->_attackDamage <<std::endl;
    return;  
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called : "<< this->_name << " got pwned !" << std::endl;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout<<"ClapTrap Copy assignment operator called : " << this->_name<< " is morphing into " << rhs._name << " !" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return(*this);
}

void ClapTrap::attack(const std::string & target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, it has no energy left !" <<std::endl;
        return ;
    }
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack, it's already dead! " <<std::endl;
        return ;
    } 
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " energy level decreased to " << --this->_energyPoints << " !" <<std::endl;
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " can't take anymore damage! Stop! It's already dead !" <<std::endl;
        return ;
    } 
    if (amount <= 0)
    {
       std::cout << this->_name << " is hit for " << amount << " points of damage... It's not very effective.. Hit points remained unchanged!" << std::endl;
       return ;
    }
    std::cout << this->_name << " is hit for " << amount << " points of damage, decreasing its hit points level to " << (this->_hitPoints -= amount) << " !"<< std::endl;
    if (this->_hitPoints <= 0)
        std::cout << this->_name << " has no hit points left ! " << this->_name << " is K.O !" <<std::endl;
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if (this->_energyPoints <= 0)
    {
        std::cout << this->_name << " can't repair, it has no energy left !" <<std::endl;
        return ;
    }
    if (this->_hitPoints <= 0)
    {
        std::cout << this->_name << " can't repair, it's already dead !" <<std::endl;
        return ;
    } 
    std::cout << this->_name << " repairs, recovering " << amount << " hit points, increasing its hit points level to " << ++this->_hitPoints << std::endl;
    std::cout << this->_name << " energy level decreased to " << --this->_energyPoints << " !" << std::endl;   
    return;
}