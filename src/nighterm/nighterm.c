#include "nighterm.h"

// TODO: Move memset into its own stdlib
void* memset(void *ptr, int value, size_t num) {
    unsigned char *p = ptr;
    while (num--) {
        *p++ = (unsigned char)value;
    }
    return ptr;
}

struct Terminal* init_nighterm(int rows, int cols) {
    size_t buffer_size = (size_t)rows * cols;
    struct Terminal* term = (struct Terminal*)malloc(sizeof(struct Terminal) + buffer_size);
    if (term != NULL) {
        term->rows = rows;
        term->cols = cols;
        memset(term->textBuffer, ' ', buffer_size);
    }
    return term;
}

void clear_text_buffer(struct Terminal *term) {
    size_t buffer_size = (size_t)term->rows * term->cols;
    memset(term->textBuffer, ' ', buffer_size);
}
