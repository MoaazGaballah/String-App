/*
 ============================================================================
 Name        : FSMVU.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[] = { "Fatih Sultan Mehmet Vakýf Üniversitesi " };
	// for loops
	int i = 0, sayac = 0;
	// this is for word's number (5)
	for (i = 0; i < 5; ++i) {
		// this is the array that we will print in the new words
		char yeni_dizi[10];
		// this is the array' s word counter
		int yeni_dizi_sayaci = 0 ;
		printf("%d . inci kelimeniz : ", i + 1);
		// this loop for the word it self
		while (*(str + sayac) != ' ') {
			*(yeni_dizi+yeni_dizi_sayaci++)=*(str + sayac++);
		}
		// this is for avoiding the rest of last words
		*(yeni_dizi+yeni_dizi_sayaci++)='\0';
		// this is for counting spaces
		sayac++;
		// this is counter for array' s word
		int sayac2 = 0;
		// this is loop to print the word it self
 		while (*(yeni_dizi + sayac2) != '\0') {
			printf("%c", *(yeni_dizi + sayac2++));
		}
 		// this is to start from the beging agian to be ready for the new word
		sayac2 = 0;
		puts("");
	}
	return 0;
}
