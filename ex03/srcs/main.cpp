/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:34:40 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 15:26:04 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int main(void)
{
    DiamondTrap og("TheRealClapTrap");
    DiamondTrap clone(og);

    og.attack("clone");
    clone.takeDamage(30);
    clone.beRepaired(1);
    og = clone;
    og.beRepaired(1);
    clone.whoAmI();
    og.whoAmI();
    og.attack("clone");
    clone.takeDamage(30);
    og.attack("clone");
    clone.takeDamage(30);
    og.attack("clone");
    clone.takeDamage(30);
    og.attack("clone");
    clone.takeDamage(30);
    og.attack("clone");
    clone.takeDamage(30);
    og.attack("clone");
    clone.takeDamage(30);
    og.whoAmI();
    og.FragTrap::highFivesGuys();
    og.ScavTrap::guardGate();
    return(0);
}