/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:02:29 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/22 16:27:46 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
    ScavTrap(void);
    ScavTrap(std::string const name);
    ScavTrap(const ScavTrap & srcs);
    ~ScavTrap(void);
    ScavTrap & operator=(const ScavTrap & rhs);
    void attack(std::string const & target);
    void guardGate(void);
};

#endif
