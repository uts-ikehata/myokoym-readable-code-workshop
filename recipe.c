#include <stdio.h>

#define LINE_BUFFER_SIZE 1024

int
main(int argc, char *argv[]) {
  FILE *file;
  char line[LINE_BUFFER_SIZE];
  char *file_name = argv[1];
  int    id;

  file = fopen(file_name, "r");
  if (file == NULL) {
    fprintf(stderr, "ファイルをオープンできません: <%s>\n", file_name);
    return 1;
  }

  for (id = 1; fgets(line, LINE_BUFFER_SIZE, file) != NULL; id++ ) {
    printf("%d:%s", id, line);
  }

  return 0;
}
