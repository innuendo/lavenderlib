/*
 *  orderstats.h
 *  lavender
 *
 *  Created by Krzysztof Wiśniewski on 10-11-21.
 *  Copyright 2010 Uniwersytet Warszawski. All rights reserved.
 *
 */

#ifndef ORDERSTATS_H
#define ORDERSTATS_H

#include "typedefs.h"
#include "macros.h"

	/* efficient way to get a pair containing maximal and minimal value 
	   in specified range. A comparator which sets strict weak order 
	/* can be optionally specified*/
template<class T>
PII min_max(T::iterator from, T::const_iterator to, struct cmp = greater<T>());

#endif