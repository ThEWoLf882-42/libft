/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:21:01 by agimi             #+#    #+#             */
/*   Updated: 2022/10/05 17:00:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*f_begin(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		in_set;

	in_set = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i++;
	}
	return ((char *) s1 + i);
}

static char	*f_end(char const *s1, char const *set, char const *begin)
{
	size_t	i;
	size_t	j;
	int		in_set;

	in_set = 0;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1 + i >= begin)
	{
		in_set = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				in_set = 1;
			j++;
		}
		if (!in_set)
			break ;
		i--;
	}
	if (s1 + i < begin)
		return ((char *) begin);
	return ((char *) s1 + i);
}

static char	*fill(char const *begin, char const *end)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * (end - begin + 2));
	if (!new)
		return (NULL);
	i = 0;
	while (begin + i <= end)
	{
		new[i] = begin[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ab;
	char	*ae;
	char	*an;

	if (!s1)
		return ((char *)s1);
	ab = f_begin(s1, set);
	ae = f_end(s1, set, ab);
	if (ae < ab)
	{
		an = malloc(sizeof(char) * 1);
		if (!an)
			return (NULL);
		an[0] = '\0';
	}
	else
		an = fill(ab, ae);
	if (!an)
		return (NULL);
	return (an);
}
