/*
 *  macros.h
 *  lavender
 *
 *  Created by Krzysztof Wiśniewski on 10-11-21.
 *  Copyright 2010 Uniwersytet Warszawski. All rights reserved.
 *  Some macros by Piotr Stanczyk (included in Practical Algorithmic)
 */

	//simplifies iteration through the whole container
#define all(c) c.begin(),c.end()
	//FOR - increases x from b to e inclusive 
#define FOR(x, b, e) for(int x=b; x<=(e); ++x) 
	// FORD - decreases x from b to e inclusive 
#define FORD(x, b, e) for(int x=b; x>=(e); ––x) 
	// REP - increases x from 0 to n
#define REP(x, n) for(int x=0; x<(n); ++x)
	//declares v of the same type as n and also assignes the same value
#define VAR(v,n)	typeof(n) v=(n)
	//returns size of x without warnings about unsignness of size()
#define SIZE(x) (int)x.size()
	//universal foreach that always has the right type
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
	//decrementing version
#define FOREACHD(i,c) for(VAR(i,(c).rbegin());i!=(c).rend();++i)
	//shortcuts
#define PB push_back
#define PF push_front

#define print(c) printf("%d", (c))
#define print2(c,d) printf("%d %d", (c), (d))
#define scan(c) scanf("%d", &(c))
#define scan2(c,d) scanf("%d %d", &(c), &(d))
