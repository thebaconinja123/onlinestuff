#include<stdio.h>
#include<string.h>

struct point {
	int x;
	int y;
};

char graph(int x, int y) {
	char domain[x], range[y];	

	memset(domain, ' ', sizeof(domain)*sizeof(char));
	memset(range, '\n', ( 10 - sizeof(range))*sizeof(char));
	strcat(range, domain);
	strcat(range, "+");
	for (int i; i < y; i++) {
		strcat(range, "\n");
	}
	printf("%s", range);
}

int main (int argc, char* argv[]) {
	struct point a;
	a.x = atoi(argv[1]);
	a.y = atoi(argv[2]);
	graph(a.x, a.y);
}
