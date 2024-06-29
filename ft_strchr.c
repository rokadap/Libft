/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokada <rokada@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:40:55 by rokada            #+#    #+#             */
/*   Updated: 2024/06/25 18:23:41 by rokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (1)
	{
		if (*s == ch)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}
/*
int main()
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result = ft_strchr(str, ch);

	if (result)
	{
		printf("Character '%c' found at position: %ld\n", ch, result - str);
	}
	else
	{
		printf("Character '%c' not found\n", ch);
	}
	return (0);
}
 */