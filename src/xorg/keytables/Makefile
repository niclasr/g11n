#
# CDDL HEADER START
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License (the "License").
# You may not use this file except in compliance with the License.
#
# You can obtain a copy of the license at src/OPENSOLARIS.LICENSE
# or http://www.opensolaris.org/os/licensing.
# See the License for the specific language governing permissions
# and limitations under the License.
#
# When distributing Covered Code, include this CDDL HEADER in each
# file and include the License file at usr/src/OPENSOLARIS.LICENSE.
# If applicable, add the following below this CDDL HEADER, with the
# fields enclosed by brackets "[]" replaced with your own identifying
# information: Portions Copyright [yyyy] [name of copyright owner]
#
# CDDL HEADER END
#
# Copyright (c) 2010, Oracle and/or its affiliates. All rights reserved.
#

include $(SRC)/Makefile.master

PROJECT		= xkeyboard-config
VER		= $(PROJECT)-1.9
TARBALL		= $(VER).tar.gz
# SOURCE_URL	= http://xlibs.freedesktop.org/xkbdesc/$(TARBALL)
# Source URL has been temporarily moved
SOURCE_URL	= http://people.freedesktop.org/~svu/$(TARBALL)

SOURCE_PATCH	= sun-additions.patch

TARGETDIR	= $(FILEROOT)/usr/share/X11/xkb

XKB_DIRFILES	= compat.dir \
		  geometry.dir \
		  keycodes.dir \
		  keymap.dir \
		  semantics.dir \
		  symbols.dir \
		  types.dir

DIRFILES	= $(XKB_DIRFILES:%=$(VER)/%)

SUBDIRS		= compat \
		  compiled \
		  geometry \
		  keycodes \
		  keymap \
		  rules \
		  semantics \
		  symbols \
		  types


$(VER)/.built:		$(VER)/config.status
			( cd $(VER); \
			  PATH=/usr/gnu/bin:/usr/X11/bin:$$PATH && export PATH; \
			  make; \
			  make all )
			touch $@

$(VER)/.patched:        $(VER)/.unpacked
			( cd $(VER); \
			gpatch -p0 < ../$(SOURCE_PATCH) )
			touch $@

$(VER)/config.status:	$(VER)/.patched
			( cd $(VER); \
			  PATH=/usr/gnu/bin:/usr/X11/bin:$$PATH && export PATH; \
			  ./configure )

$(VER)/.copied:		$(VER)/.built
			for i in `cd sun-src ; find . -type f -print` ; \
			do \
			mkdir -p $(VER)/`dirname $$i` ; \
			cp -p sun-src/$$i $(VER)/$$i ; \
			done
			touch $@

$(VER)/%.dir:		$(VER)/.copied
			(cd $(@:%.dir=%); $(XKBCOMP) -lfhlpR -o ../../$@ '*')

all:			$(VER)/.built $(DIRFILES)


$(TARGETDIR):
			$(INSDIR) "$@"

$(VER)/.install_list:	$(VER)/.copied
			(cd $(VER); find $(SUBDIRS) -type f ! -name 'Makefile*') > $@
			echo ./README >> $@
			echo ./xkbtable.map >> $@

install:		all $(TARGETDIR) $(VER)/.install_list
			(cd $(VER); $(TAR) cf - -I .install_list $(XKB_DIRFILES)) | (cd $(TARGETDIR); $(TAR) xf -)

clean:
			rm -Rf .install.list $(VER) $(TARBALL)

FRC:

include $(SRC)/Makefile.targ

