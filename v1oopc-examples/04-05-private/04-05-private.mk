##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=04-05-private
ConfigurationName      :=Debug
WorkspacePath          :=C:/ti-software/v1oopc-examples
ProjectPath            :=C:/ti-software/v1oopc-examples/04-05-private
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
ObjectsFileList        :="04-05-private.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/line_print.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/04-05-private/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix)main.cpp

$(IntermediateDirectory)/line_print.cpp$(ObjectSuffix): line_print.cpp $(IntermediateDirectory)/line_print.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/04-05-private/line_print.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/line_print.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/line_print.cpp$(DependSuffix): line_print.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/line_print.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/line_print.cpp$(DependSuffix) -MM line_print.cpp

$(IntermediateDirectory)/line_print.cpp$(PreprocessSuffix): line_print.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/line_print.cpp$(PreprocessSuffix)line_print.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


