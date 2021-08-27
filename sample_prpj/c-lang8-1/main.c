#include <stdio.h>
#include <stdlib.h>
#include <time.h>    //timeŠÖ”‚ğg‚¤‚½‚ß‚ÉB

void main() {
	int a, b;
	// —”‚Ì‰Šú‰»
	srand((unsigned)time(NULL));
	//srand(0);
	//    ‚P‚©‚ç‚P‚O‚Ü‚Å‚Ì—”‚ğ”­¶‚³‚¹‚é
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	//    ŒvZŒ‹‰Ê‚ğo—Í
	printf("%d + %d = %d\n", a, b, a + b);
}