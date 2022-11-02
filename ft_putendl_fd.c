/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-c <rgomes-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:17:34 by rgomes-c          #+#    #+#             */
/*   Updated: 2022/10/19 15:16:49 by rgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;

	if (s != 0)
	{
		i = 0;
		while (s[i])
		{
			write(fd, &s[i], sizeof(s[i]));
			i++;
		}
		write(fd, &"\n", 1);
	}
}