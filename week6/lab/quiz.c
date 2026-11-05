/*
a) Read execution-time measurements from the keyboard until the user
enters -1.
b) Find the longest consecutive sequence in which each measurement is smaller
than the previous measurement.
c) Calculate the number of measurements in this sequence.
d) Determine the starting and ending positions of this sequence.
e) If multiple sequences have the same maximum length, report the first one
encountered
*/

#include <stdio.h>

int main(void)
{
	int num, last = 0;
	int count = 0;            /* toplam ölçüm sayısı (pozisyon) */
	int curStart = 0, curLen = 0;
	int bestStart = 0, bestLen = 0;

	printf("Enter execution-time measurements (-1 to quit): ");
	scanf("%d", &num);

	while (num != -1)
	{
		count++;

		if (count == 1)
		{
			/* ilk ölçüm: yeni dizi başlar */
			curStart = 1;
			curLen = 1;
		}
		else if (num < last)
		{
			/* bir öncekinden küçük: dizi devam ediyor */
			curLen++;
		}
		else
		{
			/* azalma bozuldu: yeni dizi bu ölçümden başlar */
			curStart = count;
			curLen = 1;
		}

		/* kesin büyükse güncelle, eşitse ilk bulunan kalır */
		if (curLen > bestLen)
		{
			bestLen = curLen;
			bestStart = curStart;
		}

		last = num;

		printf("Enter execution-time measurements (-1 to quit): ");
		scanf("%d", &num);
	}

	if (count == 0)
	{
		printf("You did not enter any number\n");
	}
	else
	{
		printf("Longest decreasing sequence length: %d\n", bestLen);
		printf("Starting position is %d, ending position is %d\n",
		       bestStart, bestStart + bestLen - 1);
	}

	return 0;
}