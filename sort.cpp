/*
 *  sort.cpp
 *  lavender
 *
 *  Created by Krzysztof Wiśniewski on 10-11-25.
 *  Copyright 2010 Uniwersytet Warszawski. All rights reserved.
 *
 */

#include "sort.h"
#include "macros.h"
#include <vector>

template<typename T>
void bucket_sort(vector<T>& A, int range, int array_length)
{
	vector<T> B[range];
	FOREACHD(it, A)
		B.PB(*it)
}
