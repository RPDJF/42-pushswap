/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rude-jes <rude-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:59:26 by rude-jes          #+#    #+#             */
/*   Updated: 2023/10/20 12:52:06 by rude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		if (!(c >= 'a' && c <= 'z'))
			return (0);
	return (1);
}
