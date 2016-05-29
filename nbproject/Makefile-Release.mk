#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/3e5ea3f2/Linha.o \
	${OBJECTDIR}/_ext/3e5ea3f2/Tubo.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpasta_cimentada.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpasta_cimentada.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpasta_cimentada.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpasta_cimentada.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpasta_cimentada.a

${OBJECTDIR}/_ext/3e5ea3f2/Linha.o: /cygdrive/C/Users/Cliente/OneDrive/Iniciação\ Científica/Netbeans/Pasta_Cimentada/lib/geometria/Linha.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/3e5ea3f2
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -Iinclude -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/3e5ea3f2/Linha.o /cygdrive/C/Users/Cliente/OneDrive/Iniciação\ Científica/Netbeans/Pasta_Cimentada/lib/geometria/Linha.cpp

${OBJECTDIR}/_ext/3e5ea3f2/Tubo.o: /cygdrive/C/Users/Cliente/OneDrive/Iniciação\ Científica/Netbeans/Pasta_Cimentada/lib/geometria/Tubo.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/3e5ea3f2
	${RM} "$@.d"
	$(COMPILE.cc) -O3 -Iinclude -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/3e5ea3f2/Tubo.o /cygdrive/C/Users/Cliente/OneDrive/Iniciação\ Científica/Netbeans/Pasta_Cimentada/lib/geometria/Tubo.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpasta_cimentada.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
