/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:34:40 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/22 14:34:58 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap og("TheRealScavTrap");
    ScavTrap clone(og);

    og.attack("clone");
    clone.takeDamage(20);
    clone.beRepaired(1);
    og = clone;
    og.beRepaired(1);
    clone.guardGate();
    og.attack("clone");
    clone.takeDamage(20);
    og.attack("clone");
    clone.takeDamage(20);
    og.attack("clone");
    clone.takeDamage(20);
    og.attack("clone");
    clone.takeDamage(20);
    og.attack("clone");
    clone.takeDamage(20);
    og.attack("clone");
    clone.takeDamage(20);
    return(0);
}