#ifndef HWFEATURES_COMMON_H
#define HWFEATURES_COMMON_H

#include <stdbool.h>
#include <sysFeatures.h>

int likwid_sysft_register_features(_SysFeatureList *features, const _SysFeatureList* in);
int likwid_sysft_init_generic(const _HWArchFeatures* infeatures, _SysFeatureList *list);

int likwid_sysft_uint64_to_string(uint64_t value, char** str);
int likwid_sysft_string_to_uint64(const char* str, uint64_t* value);
int likwid_sysft_double_to_string(double value, char **str);
int likwid_sysft_string_to_double(const char* str, double *value);
int likwid_sysft_copystr(const char *str, char **value);

typedef int (*likwid_sysft_msr_test_func)(uint64_t msrData, void *cbData);

int likwid_sysft_foreach_hwt_testmsr(uint64_t reg);
int likwid_sysft_foreach_hwt_testmsr_cb(uint64_t reg, likwid_sysft_msr_test_func testFunc, void *cbData);
int likwid_sysft_foreach_core_testmsr(uint64_t reg);
int likwid_sysft_foreach_core_testmsr_cb(uint64_t reg, likwid_sysft_msr_test_func testFunc, void *cbData);
int likwid_sysft_foreach_socket_testmsr(uint64_t reg);
int likwid_sysft_foreach_socket_testmsr_cb(uint64_t reg, likwid_sysft_msr_test_func testFunc, void *cbData);
int likwid_sysft_readmsr(const LikwidDevice_t device, uint64_t reg, uint64_t *msrData);
int likwid_sysft_readmsr_field(const LikwidDevice_t device, uint64_t reg, int bitoffset, int width, uint64_t *value);
int likwid_sysft_readmsr_bit_to_string(const LikwidDevice_t device, uint64_t reg, int bitoffset, bool invert, char **value);
int likwid_sysft_writemsr_field(const LikwidDevice_t device, uint64_t reg, int bitoffset, int width, uint64_t value);
int likwid_sysft_writemsr_bit_from_string(const LikwidDevice_t device, uint64_t reg, int bitoffset, bool invert, const char *value);

#endif
