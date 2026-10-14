/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adogru <adogru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:16:03 by adogru            #+#    #+#             */
/*   Updated: 2026/10/14 18:55:00 by adogru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main()
// {
// 	char *file;
// 	file = "test_output_file";
// 	int filedescriptor;

// 	filedescriptor = open(file, 2);
// 	ft_putchar_fd('c', filedescriptor);
// }

//filedescriptor yazilacak olan dosya adi 
// c yazilacak olan karakter 
// 2 std

// O_RDONLY 0 read only 
// O_RDWR   2 read and write 