/*BEGIN_LEGAL 
Copyright 2002-2020 Intel Corporation.

This software and the related documents are Intel copyrighted materials, and your
use of them is governed by the express license under which they were provided to
you ("License"). Unless the License provides otherwise, you may not use, modify,
copy, publish, distribute, disclose or transmit this software or the related
documents without Intel's prior written permission.

This software and the related documents are provided as is, with no express or
implied warranties, other than those that are expressly stated in the License.
END_LEGAL */
/// @file xed-category-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_CATEGORY_ENUM_H)
# define XED_CATEGORY_ENUM_H
#include "xed-common-hdrs.h"
#define XED_CATEGORY_INVALID_DEFINED 1
#define XED_CATEGORY_3DNOW_DEFINED 1
#define XED_CATEGORY_ADOX_ADCX_DEFINED 1
#define XED_CATEGORY_AES_DEFINED 1
#define XED_CATEGORY_AMX_TILE_DEFINED 1
#define XED_CATEGORY_AVX_DEFINED 1
#define XED_CATEGORY_AVX2_DEFINED 1
#define XED_CATEGORY_AVX2GATHER_DEFINED 1
#define XED_CATEGORY_AVX512_DEFINED 1
#define XED_CATEGORY_AVX512_4FMAPS_DEFINED 1
#define XED_CATEGORY_AVX512_4VNNIW_DEFINED 1
#define XED_CATEGORY_AVX512_BITALG_DEFINED 1
#define XED_CATEGORY_AVX512_VBMI_DEFINED 1
#define XED_CATEGORY_AVX512_VP2INTERSECT_DEFINED 1
#define XED_CATEGORY_BINARY_DEFINED 1
#define XED_CATEGORY_BITBYTE_DEFINED 1
#define XED_CATEGORY_BLEND_DEFINED 1
#define XED_CATEGORY_BMI1_DEFINED 1
#define XED_CATEGORY_BMI2_DEFINED 1
#define XED_CATEGORY_BROADCAST_DEFINED 1
#define XED_CATEGORY_CALL_DEFINED 1
#define XED_CATEGORY_CET_DEFINED 1
#define XED_CATEGORY_CLDEMOTE_DEFINED 1
#define XED_CATEGORY_CLFLUSHOPT_DEFINED 1
#define XED_CATEGORY_CLWB_DEFINED 1
#define XED_CATEGORY_CLZERO_DEFINED 1
#define XED_CATEGORY_CMOV_DEFINED 1
#define XED_CATEGORY_COMPRESS_DEFINED 1
#define XED_CATEGORY_COND_BR_DEFINED 1
#define XED_CATEGORY_CONFLICT_DEFINED 1
#define XED_CATEGORY_CONVERT_DEFINED 1
#define XED_CATEGORY_DATAXFER_DEFINED 1
#define XED_CATEGORY_DECIMAL_DEFINED 1
#define XED_CATEGORY_ENQCMD_DEFINED 1
#define XED_CATEGORY_EXPAND_DEFINED 1
#define XED_CATEGORY_FCMOV_DEFINED 1
#define XED_CATEGORY_FLAGOP_DEFINED 1
#define XED_CATEGORY_FMA4_DEFINED 1
#define XED_CATEGORY_GATHER_DEFINED 1
#define XED_CATEGORY_GFNI_DEFINED 1
#define XED_CATEGORY_HRESET_DEFINED 1
#define XED_CATEGORY_IFMA_DEFINED 1
#define XED_CATEGORY_INTERRUPT_DEFINED 1
#define XED_CATEGORY_IO_DEFINED 1
#define XED_CATEGORY_IOSTRINGOP_DEFINED 1
#define XED_CATEGORY_KEYLOCKER_DEFINED 1
#define XED_CATEGORY_KEYLOCKER_WIDE_DEFINED 1
#define XED_CATEGORY_KMASK_DEFINED 1
#define XED_CATEGORY_LEGACY_DEFINED 1
#define XED_CATEGORY_LOGICAL_DEFINED 1
#define XED_CATEGORY_LOGICAL_FP_DEFINED 1
#define XED_CATEGORY_LZCNT_DEFINED 1
#define XED_CATEGORY_MISC_DEFINED 1
#define XED_CATEGORY_MMX_DEFINED 1
#define XED_CATEGORY_MOVDIR_DEFINED 1
#define XED_CATEGORY_MPX_DEFINED 1
#define XED_CATEGORY_NOP_DEFINED 1
#define XED_CATEGORY_PCLMULQDQ_DEFINED 1
#define XED_CATEGORY_PCONFIG_DEFINED 1
#define XED_CATEGORY_PKU_DEFINED 1
#define XED_CATEGORY_POP_DEFINED 1
#define XED_CATEGORY_PREFETCH_DEFINED 1
#define XED_CATEGORY_PREFETCHWT1_DEFINED 1
#define XED_CATEGORY_PTWRITE_DEFINED 1
#define XED_CATEGORY_PUSH_DEFINED 1
#define XED_CATEGORY_RDPID_DEFINED 1
#define XED_CATEGORY_RDPRU_DEFINED 1
#define XED_CATEGORY_RDRAND_DEFINED 1
#define XED_CATEGORY_RDSEED_DEFINED 1
#define XED_CATEGORY_RDWRFSGS_DEFINED 1
#define XED_CATEGORY_RET_DEFINED 1
#define XED_CATEGORY_ROTATE_DEFINED 1
#define XED_CATEGORY_SCATTER_DEFINED 1
#define XED_CATEGORY_SEGOP_DEFINED 1
#define XED_CATEGORY_SEMAPHORE_DEFINED 1
#define XED_CATEGORY_SERIALIZE_DEFINED 1
#define XED_CATEGORY_SETCC_DEFINED 1
#define XED_CATEGORY_SGX_DEFINED 1
#define XED_CATEGORY_SHA_DEFINED 1
#define XED_CATEGORY_SHIFT_DEFINED 1
#define XED_CATEGORY_SMAP_DEFINED 1
#define XED_CATEGORY_SSE_DEFINED 1
#define XED_CATEGORY_STRINGOP_DEFINED 1
#define XED_CATEGORY_STTNI_DEFINED 1
#define XED_CATEGORY_SYSCALL_DEFINED 1
#define XED_CATEGORY_SYSRET_DEFINED 1
#define XED_CATEGORY_SYSTEM_DEFINED 1
#define XED_CATEGORY_TBM_DEFINED 1
#define XED_CATEGORY_TSX_LDTRK_DEFINED 1
#define XED_CATEGORY_UINTR_DEFINED 1
#define XED_CATEGORY_UNCOND_BR_DEFINED 1
#define XED_CATEGORY_VAES_DEFINED 1
#define XED_CATEGORY_VBMI2_DEFINED 1
#define XED_CATEGORY_VEX_DEFINED 1
#define XED_CATEGORY_VFMA_DEFINED 1
#define XED_CATEGORY_VIA_PADLOCK_DEFINED 1
#define XED_CATEGORY_VPCLMULQDQ_DEFINED 1
#define XED_CATEGORY_VTX_DEFINED 1
#define XED_CATEGORY_WAITPKG_DEFINED 1
#define XED_CATEGORY_WIDENOP_DEFINED 1
#define XED_CATEGORY_X87_ALU_DEFINED 1
#define XED_CATEGORY_XOP_DEFINED 1
#define XED_CATEGORY_XSAVE_DEFINED 1
#define XED_CATEGORY_XSAVEOPT_DEFINED 1
#define XED_CATEGORY_LAST_DEFINED 1
typedef enum {
  XED_CATEGORY_INVALID,
  XED_CATEGORY_3DNOW,
  XED_CATEGORY_ADOX_ADCX,
  XED_CATEGORY_AES,
  XED_CATEGORY_AMX_TILE,
  XED_CATEGORY_AVX,
  XED_CATEGORY_AVX2,
  XED_CATEGORY_AVX2GATHER,
  XED_CATEGORY_AVX512,
  XED_CATEGORY_AVX512_4FMAPS,
  XED_CATEGORY_AVX512_4VNNIW,
  XED_CATEGORY_AVX512_BITALG,
  XED_CATEGORY_AVX512_VBMI,
  XED_CATEGORY_AVX512_VP2INTERSECT,
  XED_CATEGORY_BINARY,
  XED_CATEGORY_BITBYTE,
  XED_CATEGORY_BLEND,
  XED_CATEGORY_BMI1,
  XED_CATEGORY_BMI2,
  XED_CATEGORY_BROADCAST,
  XED_CATEGORY_CALL,
  XED_CATEGORY_CET,
  XED_CATEGORY_CLDEMOTE,
  XED_CATEGORY_CLFLUSHOPT,
  XED_CATEGORY_CLWB,
  XED_CATEGORY_CLZERO,
  XED_CATEGORY_CMOV,
  XED_CATEGORY_COMPRESS,
  XED_CATEGORY_COND_BR,
  XED_CATEGORY_CONFLICT,
  XED_CATEGORY_CONVERT,
  XED_CATEGORY_DATAXFER,
  XED_CATEGORY_DECIMAL,
  XED_CATEGORY_ENQCMD,
  XED_CATEGORY_EXPAND,
  XED_CATEGORY_FCMOV,
  XED_CATEGORY_FLAGOP,
  XED_CATEGORY_FMA4,
  XED_CATEGORY_GATHER,
  XED_CATEGORY_GFNI,
  XED_CATEGORY_HRESET,
  XED_CATEGORY_IFMA,
  XED_CATEGORY_INTERRUPT,
  XED_CATEGORY_IO,
  XED_CATEGORY_IOSTRINGOP,
  XED_CATEGORY_KEYLOCKER,
  XED_CATEGORY_KEYLOCKER_WIDE,
  XED_CATEGORY_KMASK,
  XED_CATEGORY_LEGACY,
  XED_CATEGORY_LOGICAL,
  XED_CATEGORY_LOGICAL_FP,
  XED_CATEGORY_LZCNT,
  XED_CATEGORY_MISC,
  XED_CATEGORY_MMX,
  XED_CATEGORY_MOVDIR,
  XED_CATEGORY_MPX,
  XED_CATEGORY_NOP,
  XED_CATEGORY_PCLMULQDQ,
  XED_CATEGORY_PCONFIG,
  XED_CATEGORY_PKU,
  XED_CATEGORY_POP,
  XED_CATEGORY_PREFETCH,
  XED_CATEGORY_PREFETCHWT1,
  XED_CATEGORY_PTWRITE,
  XED_CATEGORY_PUSH,
  XED_CATEGORY_RDPID,
  XED_CATEGORY_RDPRU,
  XED_CATEGORY_RDRAND,
  XED_CATEGORY_RDSEED,
  XED_CATEGORY_RDWRFSGS,
  XED_CATEGORY_RET,
  XED_CATEGORY_ROTATE,
  XED_CATEGORY_SCATTER,
  XED_CATEGORY_SEGOP,
  XED_CATEGORY_SEMAPHORE,
  XED_CATEGORY_SERIALIZE,
  XED_CATEGORY_SETCC,
  XED_CATEGORY_SGX,
  XED_CATEGORY_SHA,
  XED_CATEGORY_SHIFT,
  XED_CATEGORY_SMAP,
  XED_CATEGORY_SSE,
  XED_CATEGORY_STRINGOP,
  XED_CATEGORY_STTNI,
  XED_CATEGORY_SYSCALL,
  XED_CATEGORY_SYSRET,
  XED_CATEGORY_SYSTEM,
  XED_CATEGORY_TBM,
  XED_CATEGORY_TSX_LDTRK,
  XED_CATEGORY_UINTR,
  XED_CATEGORY_UNCOND_BR,
  XED_CATEGORY_VAES,
  XED_CATEGORY_VBMI2,
  XED_CATEGORY_VEX,
  XED_CATEGORY_VFMA,
  XED_CATEGORY_VIA_PADLOCK,
  XED_CATEGORY_VPCLMULQDQ,
  XED_CATEGORY_VTX,
  XED_CATEGORY_WAITPKG,
  XED_CATEGORY_WIDENOP,
  XED_CATEGORY_X87_ALU,
  XED_CATEGORY_XOP,
  XED_CATEGORY_XSAVE,
  XED_CATEGORY_XSAVEOPT,
  XED_CATEGORY_LAST
} xed_category_enum_t;

/// This converts strings to #xed_category_enum_t types.
/// @param s A C-string.
/// @return #xed_category_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_category_enum_t str2xed_category_enum_t(const char* s);
/// This converts strings to #xed_category_enum_t types.
/// @param p An enumeration element of type xed_category_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_category_enum_t2str(const xed_category_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_category_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_category_enum_t xed_category_enum_t_last(void);
#endif
