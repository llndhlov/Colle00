/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:33:23 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/15 17:34:41 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putchar(char	c)
{
				write(1, &c, 1);
}