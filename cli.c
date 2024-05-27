#include "regit.h"
#include "cli.h"
#include <stdio.h>

int cmd_version(int argc, char **argv, int prefix) {
  // const char version_cmd_string = ""
	
  printf("Regit version %s\n", VERSION);
  return 0;
}

int cmd_help(int argc, char **argv, int prefix) {
  // const char version_cmd_string = ""
  return 0;
}

int cmd_init(int argc, char **argv, int prefix) { return 0; }
