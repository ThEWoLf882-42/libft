/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:49:20 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:39 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ac;
	char	*as;
	int		i;

	i = ft_strlen(s);
	as = (char *)s;
	ac = c;
	while (as[i] != ac)
	{
		if (i == 0)
		{
			return (NULL);
		}
		i--;
	}
	return ((char *)as + i);
}
