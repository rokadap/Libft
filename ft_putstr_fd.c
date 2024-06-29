/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokada <rokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:02:00 by rokada            #+#    #+#             */
/*   Updated: 2024/06/23 19:04:44 by rokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	written;

	if (!s)
		return ;
	len = ft_strlen(s);
	written = 0;
	while (written < len)
	{
		if (len - written > INT_MAX)
			write(fd, s + written, INT_MAX);
		else
			write(fd, s + written, len - written);
		written += INT_MAX;
	}
}
