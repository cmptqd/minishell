/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdesbos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 17:00:25 by bdesbos           #+#    #+#             */
/*   Updated: 2016/05/16 21:32:09 by bdesbos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisalnum(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		if (!ft_isalnum(s[i]))
			return (0);
	return (1);
}
