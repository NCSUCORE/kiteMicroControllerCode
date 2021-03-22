# Copyright 1996-2019 The MathWorks, Inc.
#
# File    : slrt_vc.tmf 
#
#
# Abstract:
#       Makefile for building a Simulink Real-Time application from a Simulink
#       model using generated C code and a supported Microsoft Visual C/C++
#       compiler
#
#       The following defines can be used to modify the behavior of the
#       build:
#
#    OPT_OPTS       - Optimization option. Default is -O2. To enable
#                     debugging specify as OPT_OPTS=-Zd.
#    OPTS           - User specific options.
#    USER_SRCS      - Additional user sources, such as files needed by
#                     S-functions.
#    USER_INCLUDES  - Additional include paths
#                     (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")


#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the code generation build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the code generation build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.
HOST            = PC
BUILD           = yes
MAKECMD         = nmake
SYS_TARGET_FILE = slrt.tlc

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = [\
    "Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)", \
    "Microsoft Visual C++ 2017 v15.0 | nmake (64-bit Windows)", \
    "Microsoft Visual C++ 2015 v14.0 | nmake (64-bit Windows)"]

DEBUG_BUILD     = 0

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "|<" are expanded by the
# build procedure.
#
#  MODEL_NAME      - Name of the Simulink block diagram
#  MODEL_MODULES   - Any additional generated source modules
#  MAKEFILE_NAME   - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT     - Path to were MATLAB is installed.
#  MATLAB_BIN      - Path to MATLAB executable.
#  S_FUNCTIONS_LIB - List of S-functions libraries to link.
#  NUMST           - Number of sample times
#  TID01EQ         - yes (1) or no (0): Are sampling rates of continuous task
#                    (tid=0) and 1st discrete task equal.
#  NCSTATES        - Number of continuous states
#  BUILDARGS       - Options passed in at the command line.
#  MULTITASKING    - yes (1) or no (0): Is solver mode multitasking
#  MEX_OPT_FILE    - Original file name of the mexopt.bat.

MODEL           = integrated_3PropControl_6bitCmd_100HzIMU_25HzP
MODULES         = rt_matrx.c rt_printf.c rt_logging.c integrated_3PropControl_6bitCmd_100HzIMU_25HzP.c integrated_3PropControl_6bitCmd_100HzIMU_25HzP_capi.c integrated_3PropControl_6bitCmd_100HzIMU_25HzP_data.c integrated_3PropControl_6bitCmd_100HzIMU_25HzP_xcp.c integrated_3PropControl_6bitCmd_100HzIMU_25HzP_xcp_TET.c rtGetInf.c rtGetNaN.c rt_nonfinite.c xpc_datatype_ground.c fiforeadwrite.c xpcIO5XXintahooks.c rt_logging_mmi.c rtw_modelmap_utils.c host_timer_x86.c xpc_code_profiling_utility_functions.c asciiencode.c fiforeadbinhdr.c sg_serial_enable_tx_int_s_v3.c sg_serial_int_source_filter_s_v3.c sg_serial_read_hw_fifo_s_v3.c sg_serial_read_int_status_s_v3.c sg_serial_setup_channel_s_v3.c sg_serial_write_hw_fifo_s_v3.c sg_serial_init.c
MAKEFILE        = integrated_3PropControl_6bitCmd_100HzIMU_25HzP.mk
MATLAB_ROOT     = C:\Program Files\MATLAB\R2020a
ALT_MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2020a
MATLAB_BIN      = C:\Program Files\MATLAB\R2020a\bin
ALT_MATLAB_BIN  = C:\PROGRA~1\MATLAB\R2020a\bin
MASTER_ANCHOR_DIR = 
START_DIR       = C:\Users\MAE-VermillionLab\Desktop\git\kiteMicroControllerCode
S_FUNCTIONS_LIB = C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\common\libsg\libsg_MSVC160_vc.lib
NUMST           = 1
TID01EQ         = 0
NCSTATES        = 0
BUILDARGS       =  COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 ISPROTECTINGMODEL=NOTPROTECTING NOT_PEDANTIC=1 OPTS="-DTID01EQ=0"
MULTITASKING    = 0
MEX_OPT_FILE    = -f "C:\Program Files\MATLAB\R2020a\bin\win64\mexopts\msvc2019.xml"

MODELREFS       = 
VISUAL_VER      = 16.0
TGT_FCN_LIB     = XPC_BLAS

OPTIMIZATION_FLAGS   = /DNDEBUG /O2 /Oy-
ADDITIONAL_LDFLAGS   = 
DEFINES_CUSTOM       = 

#--------------------------- Model and reference models -----------------------
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_ref.rsp
COMPILER_COMMAND_FILE     = integrated_3PropControl_6bitCmd_100HzIMU_25HzP_comp.rsp
RELATIVE_PATH_TO_ANCHOR   = ..\..
# ..\..\..\..\..\..\.. or .. or even . if you want it
MODELREF_TARGET_TYPE      = NONE

!if "$(MATLAB_ROOT)" != "$(ALT_MATLAB_ROOT)"
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
!endif
!if "$(MATLAB_BIN)" != "$(ALT_MATLAB_BIN)"
MATLAB_BIN = $(ALT_MATLAB_BIN)
!endif
MATLAB_ARCH_BIN = $(MATLAB_BIN)\win64

#--------------------------- Tool Specifications ------------------------------
!include $(MATLAB_ROOT)\rtw\c\tools\vctools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include/Lib Path ------------------------------

XPC_BASE = $(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build

XPC_INCLUDES = $(XPC_BASE)\include;$(XPC_BASE)\xpcblocks\include
XPC_INCLUDES = $(XPC_INCLUDES);$(XPC_BASE)\xpcblocks\thirdpartydrivers
XPC_INCLUDES = $(XPC_INCLUDES);$(MATLAB_ROOT)\toolbox\slrt\target\kernel\include
INCLUDE      = .;..;$(XPC_INCLUDES);$(INCLUDE)

#----------------- Compiler and Linker Options --------------------------------
# Optimization Options
DEFAULT_OPT_OPTS = /W3 /Z7
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS =
#/GD

CC_OPTS = $(OPTS) $(OPT_OPTS) /c /nologo $(OPTIMIZATION_FLAGS) 

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DRT -DNUMST=$(NUMST) -D_CRT_SECURE_NO_WARNINGS \
                  -DTID01EQ=$(TID01EQ) -DNCSTATES=$(NCSTATES) \
                  -DMT=$(MULTITASKING) -DHAVESTDIO -DXPCMSVISUALC \
                  -DXPCCALLCONV=__cdecl  -DUSE_RTMODEL -DERT_CORE \
                  $(DEFINES_CUSTOM)

# Uncomment this line to move warning level to W4
# cflags = $(cflags:W3=W4)
CFLAGS = $(cvarsmt) /wd4996 /fp:fast /arch:SSE2 $(CC_OPTS) $(CPP_REQ_DEFINES) @$(COMPILER_COMMAND_FILE) $(USER_INCLUDES)
CPPFLAGS = $(cflags) $(cvarsmt) /wd4996 /fp:fast /arch:SSE2 /EHsc \
           $(CPP_OPTS) $(CC_OPTS) $(CPP_REQ_DEFINES) @$(COMPILER_COMMAND_FILE) $(USER_INCLUDES)
!if "$(SLRTFTZOFF)" != ""
CFLAGS = $(cvarsmt) $(CFLAGS_VERSPECIFIC) $(CC_OPTS) $(CPP_REQ_DEFINES) @$(COMPILER_COMMAND_FILE) $(USER_INCLUDES)
CPPFLAGS = $(cflags) $(cvarsmt) $(CPPFLAGS_VERSPECIFIC) /EHsc \
           $(CPP_OPTS) $(CC_OPTS) $(CPP_REQ_DEFINES) @$(COMPILER_COMMAND_FILE) $(USER_INCLUDES)
!endif


LDFLAGS = /NOLOGO /DLL /SUBSYSTEM:CONSOLE /DEF:xpcvcdll.def  /Include:_malloc /MAP /DEBUG /IGNORE:4099 $(ADDITIONAL_LDFLAGS)

#----------------------------- Source Files -----------------------------------
#Standalone executable
!if "$(MODELREF_TARGET_TYPE)" == "NONE"
PRODUCT   = $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL).dlm
SLRT_SRCS = xpctarget.c appmappingData.c legacy_stdio.c
REQ_SRCS  = $(MODULES) $(SLRT_SRCS)

#Model Reference Target
!else
PRODUCT   = $(MODELLIB)
REQ_SRCS  = $(MODULES)
!endif


USER_SRCS =

SRCS = $(REQ_SRCS) $(USER_SRCS)
OBJS_CPP_UPPER = $(SRCS:.CPP=.obj)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.obj)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.obj)
OBJS = $(OBJS_C_UPPER:.c=.obj)

# Special handling for object files that are not in the pre-generated linker
# response file
SLRT_OBJS = $(SLRT_SRCS:.c=.obj)

# ------------------------- Libraries ------------------------------
LIBS =



!if "$(MODELREF_TARGET_TYPE)" == "NONE"
LIBS = $(LIBS) xpcruntime.lib
!endif

# include the BLAS libs unconditionally
BLASLIBS = $(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\lib\libatlas.a $(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\lib\libcblas.a

#--------------------------------- Rules --------------------------------------
!if "$(MODELREF_TARGET_TYPE)" == "NONE"
#--- Stand-alone model ---
$(RELATIVE_PATH_TO_ANCHOR)\$(MODEL).dlm : $(MODEL)_slrt.dll
	$(MATLAB_ROOT)\toolbox\slrt\target\thirdparty\OnTime\bin\mkusrdlm -c+ -q+ $(MODEL)_slrt.dll $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL)
	@cmd /C "echo ### Created DLM $@"
	@del $(MODEL)_slrt.lib

$(MODEL)_slrt.dll : set_environment_variables $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Linking ..."
	$(LD) $(LDFLAGS) $(BLASLIBS) $(LIBS) $(S_FUNCTIONS_LIB) $(CANLIB) $(SLRT_OBJS) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) -out:$@
	@cmd /C "echo ### Created DLL $@"

!else
#--- Model reference Target ---
$(PRODUCT) : set_environment_variables $(OBJS) $(LIBS)
	@cmd /C "echo ### Linking ..."
	$(LD) -lib /OUT:$(MODELLIB) @$(CMD_FILE)
	@cmd /C "echo ### Created static library $(MODELLIB)"
!endif

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

xpcruntime.lib: xpcimports.obj xpcPCFunctions.obj
	$(LIBCMD) /nologo /out:$@ $**

# Additional sources

{C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{$(START_DIR)\integrated_3PropControl_6bitCmd_100HzIMU_25HzP_slrt_rtw}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\simulink\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{..}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
{$(MATLAB_ROOT)\toolbox\coder\profile\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<
rt_matrx.obj : $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_matrx.c
rt_printf.obj : $(MATLAB_ROOT)\rtw\c\src\rt_printf.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\rt_printf.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_printf.c
rt_logging.obj : $(MATLAB_ROOT)\rtw\c\src\rt_logging.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\rt_logging.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rt_logging.c
asciiencode.obj : "C:\Program Files\MATLAB\R2020a\toolbox\rtw\targets\xpc\target\build\xpcblocks\asciiencode.c"
	@cmd /C "echo ### Compiling "C:\Program Files\MATLAB\R2020a\toolbox\rtw\targets\xpc\target\build\xpcblocks\asciiencode.c"
	$(CC) $(CFLAGS) "C:\Program Files\MATLAB\R2020a\toolbox\rtw\targets\xpc\target\build\xpcblocks\asciiencode.c"
fiforeadbinhdr.obj : "C:\Program Files\MATLAB\R2020a\toolbox\rtw\targets\xpc\target\build\xpcblocks\fiforeadbinhdr.c"
	@cmd /C "echo ### Compiling "C:\Program Files\MATLAB\R2020a\toolbox\rtw\targets\xpc\target\build\xpcblocks\fiforeadbinhdr.c"
	$(CC) $(CFLAGS) "C:\Program Files\MATLAB\R2020a\toolbox\rtw\targets\xpc\target\build\xpcblocks\fiforeadbinhdr.c"
sg_serial_enable_tx_int_s_v3.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_enable_tx_int_s_v3.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_enable_tx_int_s_v3.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_enable_tx_int_s_v3.c
sg_serial_int_source_filter_s_v3.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_int_source_filter_s_v3.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_int_source_filter_s_v3.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_int_source_filter_s_v3.c
sg_serial_read_hw_fifo_s_v3.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_read_hw_fifo_s_v3.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_read_hw_fifo_s_v3.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_read_hw_fifo_s_v3.c
sg_serial_read_int_status_s_v3.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_read_int_status_s_v3.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_read_int_status_s_v3.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_read_int_status_s_v3.c
sg_serial_setup_channel_s_v3.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_setup_channel_s_v3.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_setup_channel_s_v3.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_setup_channel_s_v3.c
sg_serial_write_hw_fifo_s_v3.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_write_hw_fifo_s_v3.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_write_hw_fifo_s_v3.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\sg_serial_write_hw_fifo_s_v3.c
sg_serial_init.obj : C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\src\sg_serial_init.c
	@cmd /C "echo ### Compiling C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\src\sg_serial_init.c
	$(CC) $(CFLAGS) C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\src\sg_serial_init.c


{C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{C:\ProgramData\Speedgoat\speedgoatlib\R2020a\9.1.2\sg_blocks\serial}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(START_DIR)\integrated_3PropControl_6bitCmd_100HzIMU_25HzP_slrt_rtw}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{..}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\profile\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<



# Look in simulink/src helper files

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

# Libraries:





# Put this rule last, otherwise nmake will check toolboxes first

{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks\include}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

xpctarget.obj : $(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\src\xpctarget.c xpcoptions.h
	@cmd /C "echo ### Compiling xpctarget.c"
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\src\xpctarget.c

{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\rtw\targets\xpc\target\build\xpcblocks\thirdpartydrivers}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{..}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

set_environment_variables:
	@set INCLUDE=$(INCLUDE)
	@set LIB=$(LIB)

#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

xpcPCFunctions.obj xpcimports.obj: $(MAKEFILE) rtw_proj.tmw
