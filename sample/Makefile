
# EDIT
# put the include paths used by the implementation file
# so that the unit test code compiles
IMPL_INC=
IMPL_LIB= libsample2.a
FRAMEWORK_INC_PATH=.
SELF_INC=-I ../include

EXTRA_OBJS=
EXTRA_LDFLAGS= -lpthread


GCC=gcc
AR=ar

#### DO NOT EDIT BELOW THIS #######

ifeq "x$(IMPL_INC)" "x"
ifneq "x$(IMPL_INC_PATH)" "x"
	IMPL_INC= -I $(IMPL_INC_PATH)
else
	IMPL_INC=
endif
endif

ifneq "x$(FRAMEWORK_INC_PATH)" "x"
	FRAMEWORK_INC= -I $(FRAMEWORK_INC_PATH)
else
	FRAMEWORK_INC=
endif

FRAMEWORK_LIB= libcheck.a

INCLUDES= -I . $(FRAMEWORK_INC) $(IMPL_INC) $(SELF_INC)
STATICLIBS= $(FRAMEWORK_LIB) $(IMPL_LIB)
LDFLAGS= $(STATICLIBS) $(EXTRA_LDFLAGS)
CFLAGS=

DEBUG_CFLAGS = -g -DUSE_HEAP_STATS
PROFILE_CFLAGS = -pg
RELEASE_CFLAGS = -O2

ifeq "$(VERSION)" "PROFILE"
CFLAGS = $(PROFILE_CFLAGS)
else
ifeq "$(VERSION)" "DEBUG"
CFLAGS = $(DEBUG_CFLAGS)
else
ifeq "$(VERSION)" "RELEASE"
CFLAGS = $(RELEASE_CFLAGS)
endif
endif
endif

SRC= test_sample2.c
OBJS=$(SRC:%.c=%.o)

usage:
	@echo "Do make all/sample2"
	@echo "You can also specify a version by doing"
	@echo "    make VERSION=PROFILE (or DEBUG or RELEASE)"

all: $(OBJS) 
	$(GCC) -c $(INCLUDES) $(CFLAGS) -DALL main.c -o main.o
	$(GCC) $(CFLAGS) $(EXTRA_OBJS) $(OBJS) main.o $(LDFLAGS) -o test_all

.c.o:
	$(GCC) -c $(INCLUDES) $(CFLAGS) $< -o $@

sample2: test_sample2.o 
	$(GCC) -c $(INCLUDES) $(CFLAGS) -Dsample2 main.c -o main.o
	$(GCC) $(CFLAGS) $(EXTRA_OBJS) test_sample2.o main.o $(LDFLAGS) -o test_sample2

clean:
	rm -f *.o
