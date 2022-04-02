/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartel <jemartel@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:13:50 by jemartel          #+#    #+#             */
/*   Updated: 2022/04/02 18:36:26 by jemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Accont.hpp"
#include "iostream"


Account::Account( int initial_deposit )
{
	this->makeDeposit(initial_deposit);



}

Account::~Account( void )
{




}
	void	Account::makeDeposit( int deposit )
{
	this->_amount+=deposit;
	this->_nbDeposits++;
	return;
}
	bool	Account::makeWithdrawal( int withdrawal )
{
	if(this->_amount > withdrawal)
	{
		this->_amount-= withdrawal;
		this->_nbWithdrawals++;
	}
			return(false);

	return(0);

}
	int		Account::checkAmount( void ) const
{
	return(0);

}
void	Account::displayStatus( void )const
{


}


 int	Account::getNbAccounts( void )
{
		return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return( _totalAmount);

}
int	Account::getNbDeposits( void )
{

return(0);
}
	 int	Account::getNbWithdrawals( void )
{
			
return(_totalNbWithdrawals);
}
 void	Account::displayAccountsInfos( void )
{
	std::cout << getNbAccounts() << std::endl
	<<			getNbWithdrawals() << std::endl
	<<			getTotalAmount() << std::endl;
}
