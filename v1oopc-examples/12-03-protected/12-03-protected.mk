##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=12-03-protected
ConfigurationName      :=Debug
WorkspacePath          :=C:/ti-software/v1oopc-examples
ProjectPath            :=C:/ti-software/v1oopc-examples/12-03-protected
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
ObjectsFileList        :="12-03-protected.txt"
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/circle.cpp$(ObjectSuffix) $(IntermediateDirectory)/line.cpp$(ObjectSuffix) $(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) $(IntermediateDirectory)/vector.cpp$(ObjectSuffix) $(IntermediateDirectory)/window.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/12-03-protected/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix)main.cpp

$(IntermediateDirectory)/circle.cpp$(ObjectSuffix): circle.cpp $(IntermediateDirectory)/circle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/12-03-protected/circle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/circle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/circle.cpp$(DependSuffix): circle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/circle.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/circle.cpp$(DependSuffix) -MM circle.cpp

$(IntermediateDirectory)/circle.cpp$(PreprocessSuffix): circle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/circle.cpp$(PreprocessSuffix)circle.cpp

$(IntermediateDirectory)/line.cpp$(ObjectSuffix): line.cpp $(IntermediateDirectory)/line.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/12-03-protected/line.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/line.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/line.cpp$(DependSuffix): line.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/line.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/line.cpp$(DependSuffix) -MM line.cpp

$(IntermediateDirectory)/line.cpp$(PreprocessSuffix): line.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/line.cpp$(PreprocessSuffix)line.cpp

$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix): rectangle.cpp $(IntermediateDirectory)/rectangle.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/12-03-protected/rectangle.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/rectangle.cpp$(DependSuffix): rectangle.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/rectangle.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/rectangle.cpp$(DependSuffix) -MM rectangle.cpp

$(IntermediateDirectory)/rectangle.cpp$(PreprocessSuffix): rectangle.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/rectangle.cpp$(PreprocessSuffix)rectangle.cpp

$(IntermediateDirectory)/vector.cpp$(ObjectSuffix): vector.cpp $(IntermediateDirectory)/vector.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/12-03-protected/vector.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/vector.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/vector.cpp$(DependSuffix): vector.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/vector.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/vector.cpp$(DependSuffix) -MM vector.cpp

$(IntermediateDirectory)/vector.cpp$(PreprocessSuffix): vector.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/vector.cpp$(PreprocessSuffix)vector.cpp

$(IntermediateDirectory)/window.cpp$(ObjectSuffix): window.cpp $(IntermediateDirectory)/window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/ti-software/v1oopc-examples/12-03-protected/window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/window.cpp$(DependSuffix): window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/window.cpp$(DependSuffix) -MM window.cpp

$(IntermediateDirectory)/window.cpp$(PreprocessSuffix): window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/window.cpp$(PreprocessSuffix)window.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


