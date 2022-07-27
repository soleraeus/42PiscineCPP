/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdetune <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:21:43 by bdetune           #+#    #+#             */
/*   Updated: 2022/07/27 16:12:39 by bdetune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class	RobotomyRequestForm: public Form
{
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm(void);

		virtual RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

	protected :
		virtual void	act(void) const;
	
	private :
		std::string		_target;

};

# endif
