TUNE=base
EXT=sniper-x86_64-gcc43
NUMBER=458
NAME=sjeng
SOURCES= attacks.c book.c crazy.c draw.c ecache.c epd.c eval.c leval.c \
	 moves.c neval.c partner.c proof.c rcfile.c search.c see.c seval.c \
	 sjeng.c ttable.c utils.c
EXEBASE=sjeng
NEED_MATH=
BENCHLANG=C
ONESTEP=
CONESTEP=

CC               = /usr/bin/gcc
COPTIMIZE        = -O3 -fno-strict-aliasing
CXX              = /usr/bin/g++
CXXOPTIMIZE      = -O3 -fno-strict-aliasing
FC               = /usr/bin/gfortran
FOPTIMIZE        = -O3 -fno-strict-aliasing
FPBASE           = yes
OS               = unix
PORTABILITY      = -DSPEC_CPU_LP64
absolutely_no_locking = 0
abstol           = 
action           = build
allow_extension_override = 0
backup_config    = 1
baseexe          = sjeng
basepeak         = 0
benchdir         = benchspec
benchmark        = 458.sjeng
binary           = 
bindir           = exe
build_in_build_dir = 1
builddir         = build
bundleaction     = 
bundlename       = 
calctol          = 0
changedmd5       = 0
check_integrity  = 0
check_md5        = 1
check_version    = 1
command_add_redirect = 0
commanderrfile   = speccmds.err
commandexe       = sjeng_base.sniper-x86_64-gcc43
commandfile      = speccmds.cmd
commandoutfile   = speccmds.out
commandstdoutfile = speccmds.stdout
compareerrfile   = compare.err
comparefile      = compare.cmd
compareoutfile   = compare.out
comparestdoutfile = compare.stdout
compile_error    = 0
compwhite        = 
configdir        = config
configpath       = /scratch/tcarlson/cpu2006/config/linux64-sniper-x86_64-gcc43.cfg
copies           = 1
datadir          = data
delay            = 0
deletebinaries   = 0
deletework       = 0
difflines        = 10
dirprot          = 511
endian           = 12345678
env_vars         = 0
exitvals         = spec_exit
expand_notes     = 0
expid            = 
ext              = sniper-x86_64-gcc43
fake             = 1
feedback         = 1
flag_url_base    = http://www.spec.org/auto/cpu2006/flags/
floatcompare     = 
help             = 0
http_proxy       = 
http_timeout     = 30
hw_avail         = Dec-9999
hw_cpu_char      = 
hw_cpu_mhz       = 3000
hw_cpu_name      = AMD Opteron 256
hw_disk          = SATA
hw_fpu           = Integrated
hw_memory        = 2 GB (2 x 1GB DDR333 CL2.5)
hw_model         = Tyan Thunder KKQS Pro (S4882)
hw_nchips        = 1
hw_ncores        = 1
hw_ncoresperchip = 1
hw_ncpuorder     = 1 chip
hw_nthreadspercore = 1
hw_ocache        = None
hw_other         = None
hw_pcache        = 64 KB I + 64 KB D on chip per chip
hw_scache        = 1 MB I+D on chip per chip
hw_tcache        = None
hw_vendor        = Tyan
ignore_errors    = yes
ignore_sigint    = 0
ignorecase       = 
info_wrap_columns = 50
inputdir         = input
iteration        = -1
iterations       = 1
keeptmp          = 0
license_num      = 0
line_width       = 0
locking          = 1
log              = CPU2006
log_line_width   = 0
log_timestamp    = 0
logname          = /scratch/tcarlson/cpu2006/result/CPU2006.009.log
lognum           = 009
mach             = default
mail_reports     = all
mailcompress     = 0
mailmethod       = smtp
mailport         = 25
mailserver       = 127.0.0.1
mailto           = 
make             = specmake
make_no_clobber  = 0
makeflags        = 
max_active_compares = 0
mean_anyway      = 0
min_report_runs  = 3
minimize_builddirs = 0
minimize_rundirs = 0
name             = sjeng
need_math        = 
no_input_handler = close
no_monitor       = 
note_preenv      = 0
notes_wrap_columns = 0
notes_wrap_indent =   
num              = 458
obiwan           = 
os_exe_ext       = 
output           = asc
output_format    = asc
output_root      = 
outputdir        = output
parallel_setup   = 1
parallel_setup_prefork = 
parallel_setup_type = fork
parallel_test    = 0
parallel_test_submit = 0
path             = /scratch/tcarlson/cpu2006/benchspec/CPU2006/458.sjeng
plain_train      = 1
preenv           = 1
prefix           = 
prepared_by      = 
ranks            = 1
rate             = 0
realuser         = your name here
rebuild          = 1
reftime          = reftime
reltol           = 
reportable       = 1
resultdir        = result
review           = 0
run              = all
rundir           = run
runspec          = /scratch/tcarlson/cpu2006/bin/runspec -a build --fake all -c linux64-sniper-x86_64-gcc43.cfg
safe_eval        = 1
section_specifier_fatal = 1
sendmail         = /usr/sbin/sendmail
setpgrp_enabled  = 1
setprocgroup     = 1
shrate           = 0
sigint           = 2
size             = ref
size_class       = ref
skipabstol       = 
skipobiwan       = 
skipreltol       = 
skiptol          = 
smarttune        = base
specdiff         = specdiff
specmake         = Makefile.YYYtArGeTYYYspec
specrun          = specinvoke
speed            = 0
srcalt           = 
srcdir           = src
stagger          = 10
strict_rundir_verify = 1
sw_avail         = Mar-2008
sw_base_ptrsize  = 64-bit
sw_compiler      = gcc, g++ & gfortran 4.3.0 (for AMD64)
sw_file          = ext3
sw_os            = SUSE Linux Enterprise Server 10 (x86_64) SP1, Kernel 2.6.16.46-0.12-smp
sw_other         = None
sw_peak_ptrsize  = Not Applicable
sw_state         = Runlevel 3 (Full multiuser with network)
sysinfo_program  = 
table            = 1
teeout           = yes
teerunout        = yes
test_date        = Sep-2011
test_sponsor     = Turbo Computers
tester           = 
top              = /scratch/tcarlson/cpu2006
train_with       = train
tune             = base
uid              = 10170
unbuffer         = 1
update-flags     = 0
use_submit_for_speed = 0
username         = tcarlson
vendor           = anon
vendor_makefiles = 0
verbose          = 5
version          = 0
version_url      = http://www.spec.org/auto/cpu2006/current_version
worklist         = list
OUTPUT_RMFILES   = train.out
