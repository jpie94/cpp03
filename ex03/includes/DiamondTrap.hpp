/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:02:29 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 12:54:10 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        
        std::string _name;
        
    public :
        DiamondTrap(void);
        DiamondTrap(std::string const name);
        DiamondTrap(const DiamondTrap & srcs);
        ~DiamondTrap(void);
        DiamondTrap & operator=(const DiamondTrap & rhs);
        void attack(std::string const & target);
        void whoAmI(void);
};

#endif
