/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:34:40 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/22 11:42:11 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap og("TheRealClapTrap");
    ClapTrap clone(og);

    og.attack("clone");
    clone.takeDamage(0);
    clone.beRepaired(1);
    og = clone;
    og.beRepaired(1);
    return(0);
}