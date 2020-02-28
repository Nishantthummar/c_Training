#
# This file was generated from Makefile.in on Wed Jan  8 12:38:24 IST 2020
#

RM        = rm -f
VERSION   = 1.5.4
INSTALL   = /usr/local
INSTTOOL  = /usr/bin/install
DOXYDOCS  = ..

export TMAKEPATH
install: 
	$(INSTTOOL) -d $(INSTALL)/bin
	$(INSTTOOL) -d $(INSTALL)/doc/doxygen
	$(INSTTOOL) -m 755 bin/doxygen    $(INSTALL)/bin
	$(INSTTOOL) -m 755 bin/doxytag    $(INSTALL)/bin
	#$(INSTTOOL) -m 755 bin/doxywizard $(INSTALL)/bin
	cp -r html $(INSTALL)/doc/doxygen
	cp -r examples $(INSTALL)/doc/doxygen
