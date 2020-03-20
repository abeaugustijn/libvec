/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_float_compare.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 11:51:38 by aaugusti          #+#    #+#             */
/*   Updated: 2020/03/20 12:00:19 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"
#include <math.h>
#include <stdbool.h>

bool	vec_float_compare(double a, double b)
{
	return (fabs(a - b) < EPSILON);
}
