#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int min, hour;

	hour = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}
		hour++;
	}
}

