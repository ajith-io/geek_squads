<<<<<<< HEAD
PROJ_NAME = PASSWORD
SRC = src/mypassword.cpp\
src/remind.cpp
BUILD_DIR = build
INC_H = inc
#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = outmake run
   endif
endif

all:$(BUILD_DIR)
	g++ main.cpp -I $(INC_H) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm
#g++ $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lgtest -lgtest_main -lpthread

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
#./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean: 
	$(RM) $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
#$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
=======
PROJ_NAME = PASSWORD
SRC = src/mypassword.cpp\
src/remind.cpp
BUILD_DIR = build
INC_H = inc
#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = outmake run
   endif
endif

all:$(BUILD_DIR)
	g++ main.cpp -I $(INC_H) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm
#g++ $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lgtest -lgtest_main -lpthread

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
#./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean: 
	$(RM) $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
#$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
>>>>>>> 663f3d939c7c2fa8fd816dc48ae25afc22311d43
