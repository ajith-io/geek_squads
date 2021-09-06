PROJ_NAME = REMIND_ME
TEST_PROJ_NAME = Test_$(PROJ_NAME)
SRC = src/mypassword.cpp\
src/remind.cpp

COV_SRC = test.cpp
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
test:
	g++ -I $(INC_H) $(SRC) $(COV_SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC)) -lgtest -lgtest_main -lpthread
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0  $(SRC) -I $(INC_H) main.cpp -o $(PROJ_NAME).$(EXEC)
	./$(PROJ_NAME).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC) main.cpp
	
valgrind :
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).out)
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
