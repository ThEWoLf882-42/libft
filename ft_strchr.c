/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:44:37 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:29 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ac;
	char	*as;
	int		i;

	i = 0;
	as = (char *)s;
	ac = c;
	while (as[i] != ac)
	{
		if (as[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)as + i);
}
