#include <stdio.h>
#include <pcre.h>
#include <getopt.h>


int main(int argc, char *argv[])
{
  if( argc != 2 ) {
    fprintf(stderr, "Usage: %s pattern-specification\n", argv[0]);
    return argc != 1;
  }

  char *pattern = argv[1];

  return 0;
}
