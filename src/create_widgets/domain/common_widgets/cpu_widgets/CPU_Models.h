#ifndef CPU_MODELS_H
#define CPU_MODELS_H

#define CPU_MODELS QString("\
<cpus>\
  <arch name='x86'>\
    <!-- vendor definitions -->\
    <vendor name='Intel' string='GenuineIntel'/>\
    <vendor name='AMD' string='AuthenticAMD'/>\
\
    <!-- standard features, EDX -->\
    <feature name='fpu'> <!-- CPUID_FP87 -->\
      <cpuid function='0x00000001' edx='0x00000001'/>\
    </feature>\
    <feature name='vme'> <!-- CPUID_VME -->\
      <cpuid function='0x00000001' edx='0x00000002'/>\
    </feature>\
    <feature name='de'> <!-- CPUID_DE -->\
      <cpuid function='0x00000001' edx='0x00000004'/>\
    </feature>\
    <feature name='pse'> <!-- CPUID_PSE -->\
      <cpuid function='0x00000001' edx='0x00000008'/>\
    </feature>\
    <feature name='tsc'> <!-- CPUID_TSC -->\
      <cpuid function='0x00000001' edx='0x00000010'/>\
    </feature>\
    <feature name='msr'> <!-- CPUID_MSR -->\
      <cpuid function='0x00000001' edx='0x00000020'/>\
    </feature>\
    <feature name='pae'> <!-- CPUID_PAE -->\
      <cpuid function='0x00000001' edx='0x00000040'/>\
    </feature>\
    <feature name='mce'> <!-- CPUID_MCE -->\
      <cpuid function='0x00000001' edx='0x00000080'/>\
    </feature>\
    <feature name='cx8'> <!-- CPUID_CX8 -->\
      <cpuid function='0x00000001' edx='0x00000100'/>\
    </feature>\
    <feature name='apic'> <!-- CPUID_APIC -->\
      <cpuid function='0x00000001' edx='0x00000200'/>\
    </feature>\
    <feature name='sep'> <!-- CPUID_SEP -->\
      <cpuid function='0x00000001' edx='0x00000800'/>\
    </feature>\
    <feature name='mtrr'> <!-- CPUID_MTRR -->\
      <cpuid function='0x00000001' edx='0x00001000'/>\
    </feature>\
    <feature name='pge'> <!-- CPUID_PGE -->\
      <cpuid function='0x00000001' edx='0x00002000'/>\
    </feature>\
    <feature name='mca'> <!-- CPUID_MCA -->\
      <cpuid function='0x00000001' edx='0x00004000'/>\
    </feature>\
    <feature name='cmov'> <!-- CPUID_CMOV -->\
      <cpuid function='0x00000001' edx='0x00008000'/>\
    </feature>\
    <feature name='pat'> <!-- CPUID_PAT -->\
      <cpuid function='0x00000001' edx='0x00010000'/>\
    </feature>\
    <feature name='pse36'> <!-- CPUID_PSE36 -->\
      <cpuid function='0x00000001' edx='0x00020000'/>\
    </feature>\
    <feature name='pn'> <!-- CPUID_PN -->\
      <cpuid function='0x00000001' edx='0x00040000'/>\
    </feature>\
    <feature name='clflush'> <!-- CPUID_CLFLUSH -->\
      <cpuid function='0x00000001' edx='0x00080000'/>\
    </feature>\
    <feature name='ds'> <!-- CPUID_DTS -->\
      <cpuid function='0x00000001' edx='0x00200000'/>\
    </feature>\
    <feature name='acpi'> <!-- CPUID_ACPI -->\
      <cpuid function='0x00000001' edx='0x00400000'/>\
    </feature>\
    <feature name='mmx'> <!-- CPUID_MMX -->\
      <cpuid function='0x00000001' edx='0x00800000'/>\
    </feature>\
    <feature name='fxsr'> <!-- CPUID_FXSR -->\
      <cpuid function='0x00000001' edx='0x01000000'/>\
    </feature>\
    <feature name='sse'> <!-- CPUID_SSE -->\
      <cpuid function='0x00000001' edx='0x02000000'/>\
    </feature>\
    <feature name='sse2'> <!-- CPUID_SSE2 -->\
      <cpuid function='0x00000001' edx='0x04000000'/>\
    </feature>\
    <feature name='ss'> <!-- CPUID_SS -->\
      <cpuid function='0x00000001' edx='0x08000000'/>\
    </feature>\
    <feature name='ht'> <!-- CPUID_HT -->\
      <cpuid function='0x00000001' edx='0x10000000'/>\
    </feature>\
    <feature name='tm'> <!-- CPUID_TM -->\
      <cpuid function='0x00000001' edx='0x20000000'/>\
    </feature>\
    <feature name='ia64'> <!-- CPUID_IA64 -->\
      <cpuid function='0x00000001' edx='0x40000000'/>\
    </feature>\
    <feature name='pbe'> <!-- CPUID_PBE -->\
      <cpuid function='0x00000001' edx='0x80000000'/>\
    </feature>\
\
    <!-- standard features, ECX -->\
    <feature name='pni'> <!-- CPUID_EXT_SSE3 -->\
      <cpuid function='0x00000001' ecx='0x00000001'/>\
    </feature>\
    <feature name='pclmuldq'>\
      <cpuid function='0x00000001' ecx='0x00000002'/>\
    </feature>\
    <feature name='dtes64'>\
      <cpuid function='0x00000001' ecx='0x00000004'/>\
    </feature>\
    <feature name='monitor'> <!-- CPUID_EXT_MONITOR -->\
      <cpuid function='0x00000001' ecx='0x00000008'/>\
    </feature>\
    <feature name='ds_cpl'> <!-- CPUID_EXT_DSCPL -->\
      <cpuid function='0x00000001' ecx='0x00000010'/>\
    </feature>\
    <feature name='vmx'> <!-- CPUID_EXT_VMX -->\
      <cpuid function='0x00000001' ecx='0x00000020'/>\
    </feature>\
     <feature name='smx'>\
      <cpuid function='0x00000001' ecx='0x00000040'/>\
    </feature>\
    <feature name='est'> <!-- CPUID_EXT_EST -->\
      <cpuid function='0x00000001' ecx='0x00000080'/>\
    </feature>\
    <feature name='tm2'> <!-- CPUID_EXT_TM2 -->\
      <cpuid function='0x00000001' ecx='0x00000100'/>\
    </feature>\
    <feature name='ssse3'> <!-- CPUID_EXT_SSSE3 -->\
      <cpuid function='0x00000001' ecx='0x00000200'/>\
    </feature>\
    <feature name='cid'> <!-- CPUID_EXT_CID -->\
      <cpuid function='0x00000001' ecx='0x00000400'/>\
    </feature>\
    <feature name='fma'>\
      <cpuid function='0x00000001' ecx='0x00001000'/>\
    </feature>\
    <feature name='cx16'> <!-- CPUID_EXT_CX16 -->\
      <cpuid function='0x00000001' ecx='0x00002000'/>\
    </feature>\
    <feature name='xtpr'> <!-- CPUID_EXT_XTPR -->\
      <cpuid function='0x00000001' ecx='0x00004000'/>\
    </feature>\
    <feature name='pdcm'>\
      <cpuid function='0x00000001' ecx='0x00008000'/>\
    </feature>\
    <feature name='pcid'>\
      <cpuid function='0x00000001' ecx='0x00020000'/>\
    </feature>\
    <feature name='dca'> <!-- CPUID_EXT_DCA -->\
      <cpuid function='0x00000001' ecx='0x00040000'/>\
    </feature>\
    <feature name='sse4.1'> <!-- CPUID_EXT_SSE41 -->\
      <cpuid function='0x00000001' ecx='0x00080000'/>\
    </feature>\
    <feature name='sse4.2'> <!-- CPUID_EXT_SSE42 -->\
      <cpuid function='0x00000001' ecx='0x00100000'/>\
    </feature>\
    <feature name='x2apic'> <!-- CPUID_EXT_X2APIC -->\
      <cpuid function='0x00000001' ecx='0x00200000'/>\
    </feature>\
    <feature name='movbe'>\
      <cpuid function='0x00000001' ecx='0x00400000'/>\
    </feature>\
    <feature name='popcnt'> <!-- CPUID_EXT_POPCNT -->\
      <cpuid function='0x00000001' ecx='0x00800000'/>\
    </feature>\
    <feature name='tsc-deadline'>\
      <cpuid function='0x00000001' ecx='0x01000000'/>\
    </feature>\
    <feature name='aes'>\
      <cpuid function='0x00000001' ecx='0x02000000'/>\
    </feature>\
    <feature name='xsave'>\
      <cpuid function='0x00000001' ecx='0x04000000'/>\
    </feature>\
    <feature name='osxsave'>\
      <cpuid function='0x00000001' ecx='0x08000000'/>\
    </feature>\
    <feature name='avx'>\
      <cpuid function='0x00000001' ecx='0x10000000'/>\
    </feature>\
    <feature name='f16c'>\
      <cpuid function='0x00000001' ecx='0x20000000'/>\
    </feature>\
    <feature name='rdrand'>\
      <cpuid function='0x00000001' ecx='0x40000000'/>\
    </feature>\
    <feature name='hypervisor'> <!-- CPUID_EXT_HYPERVISOR -->\
      <cpuid function='0x00000001' ecx='0x80000000'/>\
    </feature>\
\
    <!-- extended features, EDX -->\
    <feature name='syscall'> <!-- CPUID_EXT2_SYSCALL -->\
      <cpuid function='0x80000001' edx='0x00000800'/>\
    </feature>\
    <feature name='nx'> <!-- CPUID_EXT2_NX -->\
      <cpuid function='0x80000001' edx='0x00100000'/>\
    </feature>\
    <feature name='mmxext'> <!-- CPUID_EXT2_MMXEXT -->\
      <cpuid function='0x80000001' edx='0x00400000'/>\
    </feature>\
    <feature name='fxsr_opt'> <!-- CPUID_EXT2_FFXSR -->\
      <cpuid function='0x80000001' edx='0x02000000'/>\
    </feature>\
    <feature name='pdpe1gb'> <!-- CPUID_EXT2_PDPE1GB -->\
      <cpuid function='0x80000001' edx='0x04000000'/>\
    </feature>\
    <feature name='rdtscp'> <!-- CPUID_EXT2_RDTSCP -->\
      <cpuid function='0x80000001' edx='0x08000000'/>\
    </feature>\
    <feature name='lm'> <!-- CPUID_EXT2_LM -->\
      <cpuid function='0x80000001' edx='0x20000000'/>\
    </feature>\
    <feature name='3dnowext'> <!-- CPUID_EXT2_3DNOWEXT -->\
      <cpuid function='0x80000001' edx='0x40000000'/>\
    </feature>\
    <feature name='3dnow'> <!-- CPUID_EXT2_3DNOW -->\
      <cpuid function='0x80000001' edx='0x80000000'/>\
    </feature>\
\
    <!-- extended features, ECX -->\
    <feature name='lahf_lm'> <!-- CPUID_EXT3_LAHF_LM -->\
      <cpuid function='0x80000001' ecx='0x00000001'/>\
    </feature>\
    <feature name='cmp_legacy'> <!-- CPUID_EXT3_CMP_LEG -->\
      <cpuid function='0x80000001' ecx='0x00000002'/>\
    </feature>\
    <feature name='svm'> <!-- CPUID_EXT3_SVM -->\
      <cpuid function='0x80000001' ecx='0x00000004'/>\
    </feature>\
    <feature name='extapic'> <!-- CPUID_EXT3_EXTAPIC -->\
      <cpuid function='0x80000001' ecx='0x00000008'/>\
    </feature>\
    <feature name='cr8legacy'> <!-- CPUID_EXT3_CR8LEG -->\
      <cpuid function='0x80000001' ecx='0x00000010'/>\
    </feature>\
    <feature name='abm'> <!-- CPUID_EXT3_ABM -->\
      <cpuid function='0x80000001' ecx='0x00000020'/>\
    </feature>\
    <feature name='sse4a'> <!-- CPUID_EXT3_SSE4A -->\
      <cpuid function='0x80000001' ecx='0x00000040'/>\
    </feature>\
    <feature name='misalignsse'> <!-- CPUID_EXT3_MISALIGNSSE -->\
      <cpuid function='0x80000001' ecx='0x00000080'/>\
    </feature>\
    <feature name='3dnowprefetch'> <!-- CPUID_EXT3_3DNOWPREFETCH -->\
      <cpuid function='0x80000001' ecx='0x00000100'/>\
    </feature>\
    <feature name='osvw'> <!-- CPUID_EXT3_OSVW -->\
      <cpuid function='0x80000001' ecx='0x00000200'/>\
    </feature>\
    <feature name='ibs'>\
      <cpuid function='0x80000001' ecx='0x00000400'/>\
    </feature>\
    <feature name='xop'>\
      <cpuid function='0x80000001' ecx='0x00000800'/>\
    </feature>\
    <feature name='skinit'> <!-- CPUID_EXT3_SKINIT -->\
      <cpuid function='0x80000001' ecx='0x00001000'/>\
    </feature>\
    <feature name='wdt'>\
      <cpuid function='0x80000001' ecx='0x00002000'/>\
    </feature>\
    <feature name='lwp'>\
      <cpuid function='0x80000001' ecx='0x00008000'/>\
    </feature>\
    <feature name='fma4'>\
      <cpuid function='0x80000001' ecx='0x00010000'/>\
    </feature>\
    <feature name='tce'>\
      <cpuid function='0x80000001' ecx='0x00020000'/>\
    </feature>\
    <feature name='cvt16'>\
      <cpuid function='0x80000001' ecx='0x00040000'/>\
    </feature>\
    <feature name='nodeid_msr'>\
      <cpuid function='0x80000001' ecx='0x00080000'/>\
    </feature>\
    <feature name='tbm'>\
      <cpuid function='0x80000001' ecx='0x00200000'/>\
    </feature>\
    <feature name='topoext'>\
      <cpuid function='0x80000001' ecx='0x00400000'/>\
    </feature>\
    <feature name='perfctr_core'>\
      <cpuid function='0x80000001' ecx='0x00800000'/>\
    </feature>\
    <feature name='perfctr_nb'>\
      <cpuid function='0x80000001' ecx='0x01000000'/>\
    </feature>\
\
    <!-- cpuid function 0x7 ecx 0x0 features -->\
    <!-- We support only ecx 0x0 now as it's done by a workaround -->\
    <feature name='fsgsbase'>\
      <cpuid function='0x00000007' ebx='0x00000001'/>\
    </feature>\
    <feature name='bmi1'>\
      <cpuid function='0x00000007' ebx='0x00000008'/>\
    </feature>\
    <feature name='hle'>\
      <cpuid function='0x00000007' ebx='0x00000010'/>\
    </feature>\
    <feature name='avx2'>\
      <cpuid function='0x00000007' ebx='0x00000020'/>\
    </feature>\
    <feature name='smep'>\
      <cpuid function='0x00000007' ebx='0x00000080'/>\
    </feature>\
    <feature name='bmi2'>\
      <cpuid function='0x00000007' ebx='0x00000100'/>\
    </feature>\
    <feature name='erms'>\
      <cpuid function='0x00000007' ebx='0x00000200'/>\
    </feature>\
    <feature name='invpcid'>\
      <cpuid function='0x00000007' ebx='0x00000400'/>\
    </feature>\
    <feature name='rtm'>\
      <cpuid function='0x00000007' ebx='0x00000800'/>\
    </feature>\
    <feature name='rdseed'>\
      <cpuid function='0x00000007' ebx='0x00040000'/>\
    </feature>\
    <feature name='adx'>\
      <cpuid function='0x00000007' ebx='0x00080000'/>\
    </feature>\
    <feature name='smap'>\
      <cpuid function='0x00000007' ebx='0x00100000'/>\
    </feature>\
\
    <!-- Advanced Power Management edx features -->\
    <feature name='invtsc' migratable='no'>\
      <cpuid function='0x80000007' edx='0x00000100'/>\
    </feature>\
\
    <!-- models -->\
    <model name='486'>\
      <feature name='fpu'/>\
      <feature name='vme'/>\
      <feature name='pse'/>\
    </model>\
\
    <!-- Intel-based QEMU generic CPU models -->\
    <model name='pentium'>\
      <model name='486'/>\
      <feature name='de'/>\
      <feature name='tsc'/>\
      <feature name='msr'/>\
      <feature name='mce'/>\
      <feature name='cx8'/>\
      <feature name='mmx'/>\
    </model>\
\
    <model name='pentium2'>\
      <model name='pentium'/>\
      <feature name='pae'/>\
      <feature name='sep'/>\
      <feature name='mtrr'/>\
      <feature name='pge'/>\
      <feature name='mca'/>\
      <feature name='cmov'/>\
      <feature name='pat'/>\
      <feature name='pse36'/>\
      <feature name='fxsr'/>\
    </model>\
\
    <model name='pentium3'>\
      <model name='pentium2'/>\
      <feature name='sse'/>\
    </model>\
\
    <model name='pentiumpro'>\
      <feature name='fpu'/>\
      <feature name='de'/>\
      <feature name='pse'/>\
      <feature name='tsc'/>\
      <feature name='msr'/>\
      <feature name='pae'/>\
      <feature name='mce'/>\
      <feature name='cx8'/>\
      <feature name='apic'/>\
      <feature name='sep'/>\
      <feature name='pge'/>\
      <feature name='cmov'/>\
      <feature name='pat'/>\
      <feature name='mmx'/>\
      <feature name='fxsr'/>\
      <feature name='sse'/>\
      <feature name='sse2'/>\
    </model>\
\
    <model name='coreduo'>\
      <model name='pentiumpro'/>\
      <vendor name='Intel'/>\
      <feature name='vme'/>\
      <feature name='mtrr'/>\
      <feature name='mca'/>\
      <feature name='clflush'/>\
      <feature name='pni'/>\
      <feature name='monitor'/>\
      <feature name='nx'/>\
    </model>\
\
    <model name='n270'>\
      <model name='coreduo'/>\
      <feature name='ssse3'/>\
    </model>\
\
    <model name='core2duo'>\
      <model name='n270'/>\
      <feature name='pse36'/>\
      <feature name='syscall'/>\
      <feature name='lm'/>\
    </model>\
\
    <!-- Generic QEMU CPU models -->\
    <model name='qemu32'>\
      <model name='pentiumpro'/>\
      <feature name='pni'/>\
    </model>\
\
    <model name='kvm32'>\
      <model name='qemu32'/>\
      <feature name='mtrr'/>\
      <feature name='mca'/>\
      <feature name='pse36'/>\
      <feature name='clflush'/>\
    </model>\
\
    <model name='cpu64-rhel5'>\
      <model name='kvm32'/>\
      <feature name='syscall'/>\
      <feature name='nx'/>\
      <feature name='lm'/>\
    </model>\
\
    <model name='cpu64-rhel6'>\
      <model name='cpu64-rhel5'/>\
      <feature name='cx16'/>\
      <feature name='lahf_lm'/>\
    </model>\
\
    <model name='kvm64'>\
      <model name='cpu64-rhel5'/>\
      <feature name='cx16'/>\
    </model>\
\
    <model name='qemu64'>\
      <model name='kvm64'/>\
      <!-- These are supported only by TCG.  KVM supports them only if the\
           host does.  So we leave them out:\
\
           <feature name='popcnt'/>\
           <feature name='lahf_lm'/>\
           <feature name='sse4a'/>\
           <feature name='abm'/>\
      -->\
      <feature name='svm'/>\
    </model>\
\
    <!-- Intel CPU models -->\
    <model name='Conroe'>\
      <model name='pentiumpro'/>\
      <vendor name='Intel'/>\
      <feature name='mtrr'/>\
      <feature name='mca'/>\
      <feature name='pse36'/>\
      <feature name='clflush'/>\
      <feature name='pni'/>\
      <feature name='ssse3'/>\
      <feature name='syscall'/>\
      <feature name='nx'/>\
      <feature name='lm'/>\
      <feature name='lahf_lm'/>\
    </model>\
\
    <model name='Penryn'>\
      <model name='Conroe'/>\
      <feature name='cx16'/>\
      <feature name='sse4.1'/>\
    </model>\
\
    <model name='Nehalem'>\
      <model name='Penryn'/>\
      <feature name='sse4.2'/>\
      <feature name='popcnt'/>\
    </model>\
\
    <model name='Westmere'>\
      <model name='Nehalem'/>\
      <feature name='aes'/>\
    </model>\
\
    <model name='SandyBridge'>\
      <model name='Westmere'/>\
      <feature name='pclmuldq'/>\
      <feature name='x2apic'/>\
      <feature name='tsc-deadline'/>\
      <feature name='xsave'/>\
      <feature name='avx'/>\
      <feature name='rdtscp'/>\
    </model>\
\
    <model name='Haswell'>\
      <model name='SandyBridge'/>\
      <feature name='fma'/>\
      <feature name='pcid'/>\
      <feature name='movbe'/>\
      <feature name='fsgsbase'/>\
      <feature name='bmi1'/>\
      <feature name='hle'/>\
      <feature name='avx2'/>\
      <feature name='smep'/>\
      <feature name='bmi2'/>\
      <feature name='erms'/>\
      <feature name='invpcid'/>\
      <feature name='rtm'/>\
    </model>\
\
    <model name='Broadwell'>\
      <model name='Haswell'/>\
      <feature name='3dnowprefetch'/>\
      <feature name='rdseed'/>\
      <feature name='adx'/>\
      <feature name='smap'/>\
    </model>\
\
    <!-- AMD CPUs -->\
    <model name='athlon'>\
      <model name='pentiumpro'/>\
      <vendor name='AMD'/>\
      <feature name='vme'/>\
      <feature name='mtrr'/>\
      <feature name='pse36'/>\
      <feature name='mmxext'/>\
      <feature name='3dnowext'/>\
      <feature name='3dnow'/>\
    </model>\
\
    <model name='phenom'>\
      <model name='cpu64-rhel5'/>\
      <vendor name='AMD'/>\
      <feature name='monitor'/>\
      <feature name='mmxext'/>\
      <feature name='fxsr_opt'/>\
      <feature name='3dnowext'/>\
      <feature name='3dnow'/>\
      <feature name='svm'/>\
    </model>\
\
    <model name='Opteron_G1'>\
      <model name='cpu64-rhel5'/>\
      <vendor name='AMD'/>\
    </model>\
\
    <model name='Opteron_G2'>\
      <model name='Opteron_G1'/>\
      <feature name='cx16'/>\
      <feature name='rdtscp'/>\
      <feature name='lahf_lm'/>\
      <feature name='svm'/>\
    </model>\
\
    <model name='Opteron_G3'>\
      <model name='Opteron_G2'/>\
      <feature name='monitor'/>\
      <feature name='popcnt'/>\
      <feature name='abm'/>\
      <feature name='sse4a'/>\
      <feature name='misalignsse'/>\
    </model>\
\
    <model name='Opteron_G4'>\
      <model name='Opteron_G2'/>\
      <!-- Can't inherit from G3 because of missing \"monitor\"\
           feature -->\
      <feature name='pclmuldq'/>\
      <feature name='ssse3'/>\
      <feature name='sse4.1'/>\
      <feature name='sse4.2'/>\
      <feature name='popcnt'/>\
      <feature name='aes'/>\
      <feature name='xsave'/>\
      <feature name='avx'/>\
      <feature name='pdpe1gb'/>\
      <feature name='abm'/>\
      <feature name='sse4a'/>\
      <feature name='misalignsse'/>\
      <feature name='3dnowprefetch'/>\
      <feature name='xop'/>\
      <feature name='fma4'/>\
    </model>\
\
    <model name='Opteron_G5'>\
      <model name='Opteron_G4'/>\
      <feature name='f16c'/>\
      <feature name='fma'/>\
      <feature name='tbm'/>\
    </model>\
  </arch>\
  <arch name='ppc64'>\
    <!-- vendor definitions -->\
    <vendor name='IBM'/>\
\
    <!-- IBM-based CPU models -->\
    <model name='POWER7'>\
      <vendor name='IBM'/>\
      <pvr value='0x003f0200'/>\
    </model>\
\
    <model name='POWER7_v2.1'>\
      <vendor name='IBM'/>\
      <pvr value='0x003f0201'/>\
    </model>\
\
    <model name='POWER7_v2.3'>\
      <vendor name='IBM'/>\
      <pvr value='0x003f0203'/>\
    </model>\
\
    <model name='POWER7+_v2.1'>\
      <vendor name='IBM'/>\
      <pvr value='0x004a0201'/>\
    </model>\
\
    <model name='POWER8_v1.0'>\
      <vendor name='IBM'/>\
      <pvr value='0x004b0100'/>\
    </model>\
\
    <model name='power6'>\
      <vendor name='IBM'/>\
      <compat isa='2.05'/>\
      <pvr value='0x003e0000'/>\
    </model>\
\
    <model name='power7'>\
      <vendor name='IBM'/>\
      <compat isa='2.06'/>\
      <pvr value='0x003f0000'/>\
    </model>\
\
    <model name='power7+'>\
      <vendor name='IBM'/>\
      <compat isa='2.06B'/>\
      <pvr value='0x004a0000'/>\
    </model>\
\
    <model name='power8e'>\
      <vendor name='IBM'/>\
      <compat isa='2.07'/>\
      <pvr value='0x004b0000'/>\
    </model>\
\
    <model name='power8'>\
      <vendor name='IBM'/>\
      <compat isa='2.07'/>\
      <pvr value='0x004d0000'/>\
    </model>\
\
  </arch>\
</cpus>\
")

#endif // CPU_MODELS_H
