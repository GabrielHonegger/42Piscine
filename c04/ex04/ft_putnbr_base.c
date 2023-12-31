/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-h <glopes-h@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:17:20 by glopes-h          #+#    #+#             */
/*   Updated: 2023/10/02 11:33:56 by glopes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, int base)
{
	int		a;
	int		b;
	int		i;

	i = 0;
	while (i > 0)
	{
		a = nbr / base;
		b = a % base;
		write(1, &b, 1);
		i++;
	}
}
