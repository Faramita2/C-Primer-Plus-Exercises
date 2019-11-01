#include<stdio.h>
/*
 * Calculate the number of * quarts water molecules.
 */
int main(void)
{
	float water_molecule_per_quart = 950 / 3e-23f;
	int quarts_of_water;
	
	printf("How many quarts the water have: ");
	scanf("%d", &quarts_of_water);
	printf("%d quarts of water has %e water molecules.\n", quarts_of_water, water_molecule_per_quart * quarts_of_water);

	return 0;
}
