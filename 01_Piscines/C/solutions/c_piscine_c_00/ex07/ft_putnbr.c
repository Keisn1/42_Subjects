/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 23:05:11 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/24 23:52:20 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a) { write(1, &a, 1); }

void ft_putnbr(int nb) {
  if (nb == -2147483648) {
    ft_putchar('-');
    ft_putchar('2');
    nb = 147483648;
  }
  if (nb < 0) {
    ft_putchar('-');
    nb *= -1;
  }
  if (nb < 10) {
    ft_putchar(nb + 48);
    return;
  } else
    ft_putnbr(nb / 10);
  ft_putnbr(nb % 10);
}
