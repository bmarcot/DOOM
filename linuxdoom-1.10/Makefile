################################################################
#
# $Id:$
#
# $Log:$
#

EXE=	doom
CC=  	gcc

CFLAGS=-W -Wall -I$(INCDIR) -DNORMALUNIX -DLINUX
#CFLAGS=-g -Wall -DNORMALUNIX -DLINUX # -DUSEASM

# FIXME-BM: replace X11 with an (H)AL
LDFLAGS=-L/usr/X11R6/lib
LIBS=	-lXext -lX11 -lnsl -lm

OBJDIR=	obj
SRCDIR=	src
INCDIR=	include
SRC=	$(wildcard $(SRCDIR)/*.c)
OBJ=	$(subst $(SRCDIR),$(OBJDIR),$(SRC:.c=.o))

TEST_OBJDIR=$(shell test -d $(OBJDIR) || mkdir $(OBJDIR))

all: $(EXE)

$(EXE): $(TEST_OBJDIR) $(OBJ)
	$(CC) -o $@ $^

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
