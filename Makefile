PROGRAM_NAME = cpphog
CC = gcc 
CXX = g++ 
RM = rm

CXXFLAGS = --std=c++20 -g -O0
CPPFLAGS = -I/usr/local/include/ -Isrc/
LDFLAGS = -L/usr/local/lib -L/usr/local/lib/boost
LDLIBS = `pkg-config --cflags --libs protobuf`

INSTALL_DIR = /usr/local/bin

SRCS = $(wildcard src/*.cpp) $(wildcard src/hedgehog/protocol/proto/*.pb.cc)
OBJS = $(subst src/,bin/,$(subst .pb.cc,.pb.o,$(subst .cpp,.o,$(SRCS))))
# DEPS = $(subst .pb.cc,.pb.d,$(subst .cpp,.d,$(SRCS)))



cmake:
	cmake -B build
	cmake --build build
	build/main

.PHONY: proto

proto:
	$(MAKE) -C proto all

all: $(PROGRAM_NAME)
	./$(PROGRAM_NAME)

all2:
	@echo $(SRCS)
	@echo \n\n\n\n
	@echo $(OBJS)


$(PROGRAM_NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

bin/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@
bin/%.o: src/%.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

# -include $(DEPS)

clean:
	$(RM) $(OBJS) $(PROGRAM_NAME)


# dist-clean: clean
# 	$(RM) *~  $(DEPS)

run: all
