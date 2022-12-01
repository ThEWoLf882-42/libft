/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:58:35 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:38 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			tol;
	char		*al;
	char		*as;

	if (!haystack && !len)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	al = (char *)haystack;
	as = (char *)needle;
	i = 0;
	tol = ft_strlen(as);
	while (al[i] != '\0' && (i + tol) <= len)
	{
		if (ft_strncmp((al + i), as, tol) == 0)
		{
			return (al + i);
		}
		i++;
	}
	return (NULL);
}
