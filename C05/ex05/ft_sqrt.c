/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:17:22 by jocaille          #+#    #+#             */
/*   Updated: 2019/09/07 11:59:09 by jocaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		n;

	n = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (n * n < nb)
			n++;
		if (nb % n == 0)
			return (n);
	}
	return (0);
}