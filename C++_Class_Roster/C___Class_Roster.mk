##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=C___Class_Roster
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/Users/sophiedang/Desktop/SoftwareProjects/C++_Class_Roster
ProjectPath            :=/Users/sophiedang/Desktop/SoftwareProjects/C++_Class_Roster
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Sophie Dang
Date                   :=25/10/2022
CodeLitePath           :="/Users/sophiedang/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -dynamiclib -fPIC
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
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="C___Class_Roster.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/private/var/folders/l3/fxm0zm692db82m6ypbkn1gm00000gn/T/AppTranslocation/CE68173B-8AA6-4536-B218-8691250AA55B/d/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(ObjectSuffix) $(IntermediateDirectory)/Class_Roster_Program_student.cpp$(ObjectSuffix) $(IntermediateDirectory)/Class_Roster_Program_main.cpp$(ObjectSuffix) 



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
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(ObjectSuffix): Class_Roster_Program/roster.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(DependSuffix) -MM Class_Roster_Program/roster.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/sophiedang/Desktop/SoftwareProjects/C++_Class_Roster/Class_Roster_Program/roster.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(PreprocessSuffix): Class_Roster_Program/roster.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Class_Roster_Program_roster.cpp$(PreprocessSuffix) Class_Roster_Program/roster.cpp

$(IntermediateDirectory)/Class_Roster_Program_student.cpp$(ObjectSuffix): Class_Roster_Program/student.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Class_Roster_Program_student.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Class_Roster_Program_student.cpp$(DependSuffix) -MM Class_Roster_Program/student.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/sophiedang/Desktop/SoftwareProjects/C++_Class_Roster/Class_Roster_Program/student.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Class_Roster_Program_student.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Class_Roster_Program_student.cpp$(PreprocessSuffix): Class_Roster_Program/student.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Class_Roster_Program_student.cpp$(PreprocessSuffix) Class_Roster_Program/student.cpp

$(IntermediateDirectory)/Class_Roster_Program_main.cpp$(ObjectSuffix): Class_Roster_Program/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Class_Roster_Program_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Class_Roster_Program_main.cpp$(DependSuffix) -MM Class_Roster_Program/main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/sophiedang/Desktop/SoftwareProjects/C++_Class_Roster/Class_Roster_Program/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Class_Roster_Program_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Class_Roster_Program_main.cpp$(PreprocessSuffix): Class_Roster_Program/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Class_Roster_Program_main.cpp$(PreprocessSuffix) Class_Roster_Program/main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


