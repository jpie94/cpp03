/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:34:40 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/22 15:07:30 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main(void)
{
    FragTrap og("TheRealFragTrap");
    FragTrap clone(og);

    og.attack("clone");
    clone.takeDamage(30);
    clone.beRepaired(1);
    og = clone;
    og.beRepaired(1);
    clone.highFivesGuys();
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
    return(0);
}