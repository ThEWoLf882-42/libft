/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:59:48 by agimi             #+#    #+#             */
/*   Updated: 2022/10/17 17:54:13 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*an;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	an = malloc(sizeof(char) * (len + 1));
	if (!an)
		return (NULL);
	i = 0;
	while (start + i < ft_strlen(s) && i < len)
	{
		an[i] = s[start + i];
		i++;
	}
	an[i] = '\0';
	return (an);
}
