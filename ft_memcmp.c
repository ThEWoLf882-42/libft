/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:42:27 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:21 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*as1;
	unsigned char	*as2;

	as1 = (unsigned char *)s1;
	as2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*as1 != *as2)
			return (*as1 - *as2);
		as1++;
		as2++;
		n--;
	}
	return (0);
}
