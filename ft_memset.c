/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:25:08 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int ay, size_t tol)
{
	unsigned char		*blasa;

	blasa = (unsigned char *)a;
	while (tol > 0)
	{
		*blasa = (unsigned char)ay;
		blasa++;
		tol--;
	}
	return (a);
}
