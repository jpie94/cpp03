/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiech <jpiech@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:02:29 by jpiech            #+#    #+#             */
/*   Updated: 2025/05/23 13:04:56 by jpiech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(const FragTrap & srcs);
    ~FragTrap(void);
    FragTrap & operator=(const FragTrap & rhs);
    void attack(std::string const & target);
    void highFivesGuys(void);

};

#endif
