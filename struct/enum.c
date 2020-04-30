#include <stdio.h>
#include <string.h>

struct datos{
	char constelacion[60];
        char nombre[20];
}caballero[13];    

enum Zodiaco
{
	Aries,
	Tauro,
	Geminis,
	Cancer,
	Leo,
	Virgo,
	Libra,
	Escorpio,
	Ofiuco,
	Sagitario,
	Capricornio,
	Acuario,
	Piscis
}casa;

int main()
{
	strcpy(caballero[Aries].constelacion, "Aries");
	strcpy(caballero[Aries].nombre, "Shion");
	strcpy(caballero[Tauro].constelacion, "Tauro");
	strcpy(caballero[Tauro].nombre, "Ox");
	strcpy(caballero[Geminis].constelacion, "Geminis");
	strcpy(caballero[Geminis].nombre, "Cain/Abel");
	strcpy(caballero[Cancer].constelacion, "Cancer");
	strcpy(caballero[Cancer].nombre, "Deathtoll");
	strcpy(caballero[Leo].constelacion, "Leo");
	strcpy(caballero[Leo].nombre, "Kaiser");
	strcpy(caballero[Virgo].constelacion, "Virgo");
	strcpy(caballero[Virgo].nombre, "Shijima");
	strcpy(caballero[Libra].constelacion, "Libra");
	strcpy(caballero[Libra].nombre, "Dohko");
	strcpy(caballero[Escorpio].nombre, "Escorpio");
	strcpy(caballero[Escorpio].constelacion, "Ecarlate");
	strcpy(caballero[Ofiuco].constelacion, "Ofiuco");
	strcpy(caballero[Ofiuco].nombre, "Odysseus");
	strcpy(caballero[Sagitario].constelacion, "Sagitario");
	strcpy(caballero[Sagitario].nombre, "Gestalt");
	strcpy(caballero[Capricornio].constelacion, "Capricornio");
	strcpy(caballero[Capricornio].nombre, "Izo");
	strcpy(caballero[Acuario].constelacion, "Acuario");
	strcpy(caballero[Acuario].nombre, "Mistria");
	strcpy(caballero[Piscis].constelacion, "Piscis");
	strcpy(caballero[Piscis].nombre, "Cardinale");

	for (casa = Aries; casa <= Piscis; casa++)
	{
		printf("\nEl caballero %s de %s resguarda la casa %d del santuario", caballero[casa].nombre, caballero[casa].constelacion, casa+1);
	}
	puts("\n");

	return 0;
}
