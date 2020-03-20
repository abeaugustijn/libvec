/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:49:58 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 11:53:42 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <math.h>

/*
**	Calculates the length of a vector.
**
**	@param {t_vec3f} vec
**
**	@return {bool}
*/

double	vec_len(t_vec3f vec)
{
	return (sqrt(pow(vec.x, 2) + 
				pow(vec.y, 2) +
				pow(vec.z, 2)));
}
