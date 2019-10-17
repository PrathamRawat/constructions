#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

struct meme example(struct meme yeet) {
	printf("Name:\t%s\tReview:\t%d", yeet.name, yeet.review); 
	return yeet;
}

int main() {
	srand(time(0));
	struct meme foo;
	foo.review = rand() % 10;
	char memes[10][100] = {
	"dat boi",
	"mike wazowski",
	"bruh moment",
	"c",
	"dab",
	"burger king foot lettuce",
	"sub2pewdiepie",
	"okay this is epic",
	"salt bae",
	"loss"
	};
	foo.name = memes[rand() % 10];
	example(foo);
	return 0;	
}

main();
