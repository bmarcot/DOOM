#
# $Id:$
#
# $Log:$
#

EXE=	doom
CC=  	gcc
#CC= 	arm-none-uclinux-uclibceabi-gcc

CFLAGS=	-W -Wall -Wextra -std=gnu99 -I$(INCDIR) -DNORMALUNIX -DLINUX -Imisc/X11 -g
#CFLAGS=-g -Wall -DNORMALUNIX -DLINUX # -DUSEASM

# FIXME-BM: replace X11 with an (H)AL
#           pipe all Xxxx functions to an abstraction layer
LDFLAGS=-L/usr/X11R6/lib
#LIBS=	-lXext -lX11 -lnsl -lm
LIBS=	-lm

OBJDIR=	obj
SRCDIR=	src
INCDIR=	include
SRC=	$(wildcard $(SRCDIR)/*.c)
OBJ=	$(subst $(SRCDIR),$(OBJDIR),$(SRC:.c=.o))

TEST_OBJDIR=$(shell test -d $(OBJDIR) || mkdir $(OBJDIR))

all: $(OBJDIR) $(EXE)

$(EXE): $(OBJ)
	$(CC) -o $@ $^ $(LIBS)

$(OBJDIR):
	$(shell test -d $(OBJDIR) || mkdir $(OBJDIR))

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJDIR)
	@find . -name "*~" -type f | xargs rm -f

distclean: clean
	@rm -f $(EXE)

#############################################################
#
#############################################################
