#include<stdio.h>
/*
 * Print download speed.
 */
int main(void)
{
	float file_size;
	float download_speed;
	
	printf("Input your download speed in Mb/s.\n");
	scanf("%f", &download_speed);

	printf("Input your download file size in MB.\n");
	scanf("%f", &file_size);

	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", download_speed, file_size, file_size / download_speed * 8);

	return 0;
}
