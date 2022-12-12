#include <stdio.h>
#include <time.h>

/* 
	This is code to solve a puzzle. 
	This is the puzzle:

		       35
	_  _  _  _  _ |33
	_  _  _  _  _ |42
	_  _  _  _  _ |28
	_  _  _  _  _ |34
	_  _  5  _  5 |18
	______________29
	29 21 34 32 39 


	Fill in the missing numbers.
	The numbers are integers between 0 and 10 (I interpreted this as 1-9 inclusive)
	The numbers in each row add up to the totals on the right 
	The numbers in each column add up to the totals along the bottom
	The diagnol lines also add up to the totals on the right 


	This code finds 53,826 correct matrices 
	This code takes 11 seconds to run. 

*/

int main()
{
	time_t start, end;
	time(&start);
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25;
	
	// x3, x13, x18 can't be less than 2 because x3+x8+x13+x18+5 = 34 which can't be true if any of them are less than 2
	// x17 can't be less than 2 because x21+x17+x13+x9+x5 = 35 and x21 is never greater than 6, so none of the other 4 can be less than 2 
	// x5, x10, x15, x20 can't be less than 7 because x5+x10+x15+x20+5 = 39 which can't be true if any of them are less than 7
	// x6-x10 can't be less than 6 because x6+x7+x8+x9+x10 = 42 which can't be true if any of them are less than 6 

	x23 = 5;
	x25 = 5;

	int y1, y2, y3, y4, y5, y6, y7, y8, y9, y10 ;
	int dh, dl;

	y1 = 33;
	y2 = 42;
	y3 = 28;
	y4 = 34;
	y5 = 18;
	y6 = 29;
	y7 = 21;
	y8 = 34;
	y9 = 32;
	y10 = 39;

	dh = 35;
	dl = 29;

	int total = 0;


	for (x1 = 1; x1<10; x1++)
	{
		for(x2 = 1; x2<10; x2++)
		{
			for (x3 = 2; x3<10; x3++)
			{
				for (x4 = 1; x4<10; x4++)
				{
					if((x1+x2+x3+x4) >= y1)
					{
						break;
					}
					for (x5 = 7; x5<10; x5++)
					{
						if((x1+x2+x3+x4+x5) == y1)
						{
							for (x6 = 6; x6<10; x6++)
							{
								for (x7 = 6; x7<10; x7++)
								{
									for (x8 = 6; x8<10; x8++)
									{
										for (x9 = 6; x9<10; x9++)
										{
											for (x10 = 7; x10<10; x10++)
											{
												if((x6+x7+x8+x9+x10) == y2)
												{
													for (x11 = 1; x11<10; x11++)
													{
														for (x12 = 1; x12<10; x12++)
														{
															if((x2+x7+x12) >= y7)
															{
																break;
															}
															for (x13 = 2; x13<10; x13++)
															{
																if((x1+x7+x13+x25)>= dl)
																{
																	break;
																}
																for (x14 = 1; x14<10; x14++)
																{
																	if((x11+x12+x13+x14) >= y3)
																	{
																		break;
																	}
																	for (x15 = 7; x15<10; x15++)
																	{
																		if((x11+x12+x13+x14+x15) == y3)
																		{
																			for (x16 = 1; x16<10; x16++)
																			{
																				if((x1+x6+x11+x16) >= y6)
																				{
																					break;
																				}
																				for (x17 = 2; x17<10; x17++)
																				{
																					if((x2+x7+x12+x17) >= y7)
																					{
																						break;
																					}
																					for (x18 = 2; x18<10; x18++)
																					{
																						if((x3+x8+x13+x18+x23) == y8)
																						{
																							for (x19 = 1; x19<10; x19++)
																							{
																								if((x1+x7+x13+x19+x25) == dl)
																								{
																									for (x20 = 7; x20<10; x20++)
																									{
																										if((x5+x10+x15+x20+x25) == y10)
																										{
																											if((x16+x17+x18+x19+x20) == y4)
																											{
																												for (x21 = 1; x21<7; x21++)
																												{
																													if((x1+x6+x11+x16+x21) == y6)
																													{
																														if((x21+x17+x13+x9+x5) == dh)
																														{
																															for (x22 = 1; x22<7; x22++)
																															{
																																if((x21+x22+x23+x25) >= y5)
																																{
																																	break;
																																}
																																if((x2+x7+x12+x17+x22) == y7)
																																{
																																	for (x24 = 1; x24<7; x24++)
																																	{																																																																			
																																		if(((x4+x9+x14+x19+x24) == y9))
																																		{																																																																																																							
																																			total += 1;
																																			//printf("total correct matrices: %d\n", total);
																																			printf("%d %d %d %d %d \n %d %d %d %d %d \n %d %d %d %d %d \n %d %d %d %d %d \n %d %d %d %d %d \n", x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24, x25);
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

printf("total correct matrices: %d\n", total);
time(&end);
int time_taken = (end - start);
printf("The time taken by this program is: %d seconds", time_taken);
}
