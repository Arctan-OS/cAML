#ifndef GEN_H
#define GEN_H

#include <stdint.h>

uint8_t *generate_dsdt();
uint8_t *generate_fadt();
uint8_t *generate_madt();
uint8_t *generate_rsdt();
uint8_t *generate_xsdt();
uint8_t *generate_rsdp();

#endif
