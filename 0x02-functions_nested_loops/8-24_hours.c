#include "main.h"

/**
 * jack_bauer
 * Description: prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int hours_tens, hours_unit, minutes_tens, minutes_unit;
  
	hours_tens = '0';
	while (hours_tens < '3')
	{
		hours_unit = '0';
		while (hours_unit < '4')
		{
			minutes_tens = '0';
			while (minutes_tens < '6')
			{
				minutes_unit = '0';
				while (minutes_unit <= '9')
				{
					_putchar(hours_tens);
					_putchar(hours_unit);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_unit);
					_putchar('\n');
					minutes_unit++;
       				}
				minutes_unit = '0';
				minutes_tens++;
			}
			minutes_tens = '0';
			hours_unit++;
		}
		hours_unit = '0';
		hours_tens++
	}
}
