//
// Created by andrea on 20/11/16.
//

#ifndef BROTLI_DUMPER_H
#define BROTLI_DUMPER_H

#include <stdint.h>

typedef struct Dumper_ {
  void *handle;
  void (*dump)(uint32_t position);
} Dumper;

#endif //BROTLI_DUMPER_H
