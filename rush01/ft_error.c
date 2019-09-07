/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:26:36 by jvanneau          #+#    #+#             */
/*   Updated: 2019/09/07 16:25:53 by jvanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bible.h"

int	ft_strlen(char *size)
{
	int count;

	count = 0;
	while (size[count] != '\0')
	{
		if (count > 31)
		{
			ft_putstr("ko\n");
			return(0);
		}
		count++;
	}
	return (0);

}
int		main()
{
	char a[50] = "1 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	ft_strlen(a);
}
