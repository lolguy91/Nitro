#ifndef NIGHTERM_H_
#define NIGHTERM_H_

struct Terminal {
  int rows;
  int cols;
  char* textBuffer;
};

struct Terminal* init_nighterm(int rows, int cols);

#endif // NIGHTERM_H_
