/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:53:08 by abe               #+#    #+#             */
/*   Updated: 2020/03/20 11:56:03 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <math.h>

/*
**	Normalize a vector.
**
**	@param {t_vec3f} vec
**
**	@return {t_vec3f}
*/

t_vec3f	vec_normalize(t_vec3f vec)
{
	return (vec_multiply(vec, pow(vec_len(vec), -1)));
}
