##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=11-02-c-sorted
ConfigurationName      :=Debug
WorkspacePath          :=C:/ti-software/v1oopc-examples
ProjectPath            :=C:/ti-software/v1oopc-examples/11-02-c-sorted
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=wvanooijen
Date                   :=10/03/2017
CodeLitePath           :="C:/Program Files (x86)/CodeLite"
LinkerName             :="C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="11-02-c-sorted.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/windres.exe"
LinkOptions            :=  -lgdi32 -static-libgcc -static-libstdc++ 
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)../Catch/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/ar.exe" rcu
CXX      := "C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/g++.exe"
CC       := "C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -std=c++11 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files (x86)/mingw-w64/i686-6.2.0-posix-dwarf-rt_v5-rev1/mingw32/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/ti-software/v1oopc-examples/11-02-c-sorted/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix)main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


