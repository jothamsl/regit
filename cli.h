typedef struct cmd_struct {
  const char *cmd;
  int (*func)(int, char **, int);
  const char *flag;
} cmd_struct;

// Commands
int cmd_version(int argc, char **argv, int prefix);
int cmd_help(int argc, char **argv, int prefix);
int cmd_init(int argc, char **argv, int prefix);
