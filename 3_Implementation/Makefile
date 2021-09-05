PROJ_NAME = REMIND_ME
SRC = src/mypassword.cpp\
src/remind.cpp
BUILD_DIR = build
INC_H = inc
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif



all:$(BUILD_DIR)
	g++ main.cpp -I $(INC_H) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm
# to run the project
run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
# to make the build documentation
doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)
valgrind :
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).out)
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
