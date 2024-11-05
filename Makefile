# Compiler flags
CPPFLAGS = -Wall -g -std=c++11

# Directories
SRCDIR = CPP
BUILDDIR = build

# List of all source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
# Object files generated from source files
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))
# Executables generated from source files (only if they have a main function)
EXECUTABLES = $(patsubst $(SRCDIR)/%.cpp, $(BUILDDIR)/%, $(filter %main.cpp,$(SOURCES)))

# Target to build all executables
all: $(EXECUTABLES)

# Rule to link each executable
$(BUILDDIR)/%: $(BUILDDIR)/%.o
	@mkdir -p $(BUILDDIR)  # Ensure the build directory exists
	g++ $(CPPFLAGS) -o $@ $<

# Rule to compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)  # Ensure the build directory exists
	g++ $(CPPFLAGS) -c $< -o $@

# Clean target to remove all generated files
clean:
	rm -rf $(BUILDDIR)/*

# Phony targets
.PHONY: all clean
