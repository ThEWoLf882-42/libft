/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:20:37 by agimi             #+#    #+#             */
/*   Updated: 2022/10/18 20:04:23 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*at;

	if (!s || !f)
		return (NULL);
	at = malloc(ft_strlen(s) + 1);
	if (!at)
		return (NULL);
	i = 0;
	while (s[i])
	{
		at[i] = (*f)(i, s[i]);
		i++;
	}
	at[i] = '\0';
	return (at);
}
