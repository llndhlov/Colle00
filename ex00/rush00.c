/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:37:45 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/15 17:38:14 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

                      
void ft_putchar(char    c);
void rush00(int     x, int      y)
{
                int 	counter;
                int 	num_columns1;
				int		num_columns2;
                
                counter = 0;
                num_columns1 = x;
				num_columns2 = x;
                if(y > 0 && x > 0)
                {
                    ft_putchar('o');
                    
                    if(x > 1)
                    {
                    while(x > 1)
                    {
                                    ft_putchar('-');
                                    x--;
                    }
                    ft_putchar('o');
                    }
                    while(y > 1)
                    {           ft_putchar('\n');
                                ft_putchar('|');
                                while(num_columns1 > 1)
                                {
                                                ft_putchar(' ');
												num_columns1--;
                                }
                                ft_putchar('|');
                                y--;
								num_columns1 = num_columns2;
                    }
                    ft_putchar('\n');
                    ft_putchar('o');
                    while(num_columns2 > 1)
                    {
                                    ft_putchar('-');
                                    num_columns2--;
                    }
                    ft_putchar('o');
                }
                ft_putchar('\n');
}
