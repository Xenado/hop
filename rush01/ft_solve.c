/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:46:30 by jocaille          #+#    #+#             */
/*   Updated: 2019/09/07 16:56:23 by jocaille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int **grid, int pos, int val)
{
	int		i;
	int		x;
	int		y;

	x = pos / 4 + 1;
	y = pos % 4 + 1;
	i = 0;
	while (++i <= 4)
		if (grid[x][i] == val && i != y)
			return (0);
	return (1);
}

int		ft_check_col(int **grid, int pos, int val)
{
	int		j;
	int		x;
	int		y;

	x = pos / 4 + 1;
	y = pos % 4 + 1;
	j = 0;
	while (++j <= 4)
		if (grid[j][y] == val && j != x)
			return (0);
	return (1);
}

int		ft_check_view_l(int **grid, int pos)
{
	int		x;
	int		y;
	int		i;
	int		lview;
	int		rview;

	x = pos / 4 + 1;
	y = pos % 4 + 1;
	i = 0;
	lview = 1;
	rview = 1;
	if (pos % 4 != 3)
		return (1);
	while (++i < 4)
		if (grid[x][i] < grid[x][i + 1])
			lview++;
		else
			i = 3;
	i++;
	while (--i > 1)
		if (grid[x][i] < grid[x][i - 1])
			rview++;
		else
			i = 2;
	if (grid[x][0] == lview && grid[x][5] == rview)
		return (1);
	return (0);
}

int		ft_solve(int **grid, int pos)
{
	int		k;
	int		x;
	int		y;

	k = 0;
	if (pos == 16)
		return (1);
	x = pos / 4 + 1;
	y = pos % 4 + 1;
	if (grid[x][y] != 0)
		return (ft_solve(grid, pos + 1))
	while (++k <= 4)
	{
		if (ft_check_line(grid, pos, k) && ft_check_col(grid, pos, k))
		{
			grid[x][y] = k;
			if (ft_check_vues(grid, pos) && ft_solve(grid, pos + 1))
				return (1);
		}
	}
	grid[x][y] = 0;
	return (0);
}
