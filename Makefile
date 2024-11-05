# Makefile in project root
CPPFLAGS = -Wall -g -std=c++11
SRCDIR = CPP
BUILDDIR = build

# List of all source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))

# Create an executable for each source file with a main function
EXECUTABLES = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%, $(SOURCES))

# Target to build all
all: $(EXECUTABLES)

# Link each executable
$(BUILDDIR)/%: $(BUILDDIR)/%.o
	mkdir -p $(BUILDDIR)
	g++ $(CPPFLAGS) -o $@ $<

# Compile source files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(BUILDDIR)
	g++ $(CPPFLAGS) -c $< -o $@

# Clean build directory
clean:
	rm -rf $(BUILDDIR)/*
