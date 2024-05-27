#include "cli.h"
#include <stdio.h>
#include <string.h>

const char regit_string_usage[] =
    "regit [-v| --version] [-h | --help] [-C <path>] <command> [<args>]\n";

const char regit_string_cmd_not_found[] =
    "\nregit: '%s' is not a regit command. see 'regit --help'.\n\n";

// Command list
const cmd_struct cmd_list[] = {
    {"version", &cmd_version, "-v"},
    {"help", &cmd_help, "-h"},
};

int main(int argc, char **argv) {
  // 1. Read user command & check if command is valid
  // 2. If command is valid, look up command name and call command function

  const int cmd_list_size = sizeof(cmd_list) / sizeof(cmd_struct);

  if (argc == 1) {
    printf(regit_string_usage);
    return 0;
  }

  // If user passes command, look up command in command list
  for (int i = 0; i < cmd_list_size; i++) {
    if (!strcmp(argv[1], cmd_list[i].cmd) ||
        !strcmp(argv[1], cmd_list[i].flag)) {
      // execute command with passed in args
      cmd_list[i].func(argc, argv, 0);
      return 0;
    }
  }

  printf(regit_string_cmd_not_found, argv[1]);
}
