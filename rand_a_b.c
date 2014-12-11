/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 11:27:31 by kescalie          #+#    #+#             */
/*   Updated: 2014/12/11 11:27:32 by kescalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h> 

int rand_a_b(int a, int b)
{
	srand(time(NULL));
	if (a > b)
		return 0;
	return rand()%(b-a) +a;
}