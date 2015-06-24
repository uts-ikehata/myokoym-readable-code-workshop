#include <stdio.h>

#define LINE_BUFFER_SIZE 1024

int
main(int argc, char *argv[]) {
  FILE *file;
  char line[LINE_BUFFER_SIZE];
  char *file_name = argv[1];
  int    id;
  int		output_id = 0;

  file = fopen(file_name, "r");
  if (file == NULL) {
    fprintf(stderr, "ファイルをオープンできません: <%s>\n", file_name);
    return 1;
  }
  
  if (argc == 3) {
    output_id = atoi(argv[2]);
  }

  for (id = 1; fgets(line, LINE_BUFFER_SIZE, file); id++) {
    if (output_id == 0) {
      printf("%d:%s", id, line);
    } else {
      if (id == output_id) {
        printf("%d:%s", id, line);
      }
    }
  }

  return 0;
}
