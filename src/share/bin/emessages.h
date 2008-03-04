/*
 * Copyright 2005-2006 Sun Microsystems, Inc.  All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Sun designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Sun in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 */

/*
 * This file primarily consists of all the error and warning messages, that
 * are used in ReportErrorMessage. All message must be defined here, in order
 * to help in I18N/L10N the messages.
 */

#ifndef _EMESSAGES_H
#define _EMESSAGES_H

#define GEN_ERROR       "Error: A fatal exception has occurred. Program will exit."
#define JNI_ERROR       "Error: A JNI error has occurred, please check your installation and try again"
#define JNI_ERROR1      "Error: can't find JNI interfaces in: %s"

#define ARG_WARN        "Warning: %s option is no longer supported."

#define ARG_ERROR1      "Error: %s requires class path specification"
#define ARG_ERROR2      "Error: %s requires jar file specification"
#define ARG_ERROR3      "Error: The -J option should not be followed by a space."

#define JVM_ERROR1      "Error: Could not create the Java Virtual Machine.\n" GEN_ERROR
#define JVM_ERROR2      "Error: Could not detach main thread.\n" JNI_ERROR
#define JVM_ERROR3      "Error: SPARC V8 processor detected; Server compiler requires V9 or better.\nUse Client compiler on V8 processors.\nCould not create the Java virtual machine."

#define JAR_ERROR1      "Error: Failed to load Main-Class manifest attribute from\n%s\n%s"
#define JAR_ERROR2      "Error: Unable to access jarfile %s"
#define JAR_ERROR3      "Error: Invalid or corrupt jarfile %s"

#define CLS_ERROR1      "Error: Could not find the main class.\n" JNI_ERROR
#define CLS_ERROR2      "Error: Failed to load Main Class: %s\n%s"
#define CLS_ERROR3      "Error: No main method found in specified class.\n" GEN_ERROR
#define CLS_ERROR4      "Error: Main method not public\n" GEN_ERROR

#define CFG_WARN1       "Warning: %s VM not supported; %s VM will be used"
#define CFG_WARN2       "Warning: No leading - on line %d of `%s'"
#define CFG_WARN3       "Warning: Missing VM type on line %d of `%s'"
#define CFG_WARN4       "Warning: Missing server class VM on line %d of `%s'"
#define CFG_WARN5       "Warning: Unknown VM type on line %d of `%s'"

#define CFG_ERROR1      "Error: Corrupt jvm.cfg file; cycle in alias list."
#define CFG_ERROR2      "Error: Unable to resolve VM alias %s"
#define CFG_ERROR3      "Error: %s VM not supported"
#define CFG_ERROR4      "Error: Unable to locate JRE meeting specification \"%s\""
#define CFG_ERROR5      "Error: Could not determine application home."
#define CFG_ERROR6      "Error: could not open `%s'"
#define CFG_ERROR7      "Error: no known VMs. (check for corrupt jvm.cfg file)"
#define CFG_ERROR8      "Error: no `%s' JVM at `%s'."


#define SPC_ERROR1      "Error: Syntax error in version specification \"%s\""

#define JRE_ERROR1      "Error: Could not find Java SE Runtime Environment."
#define JRE_ERROR2      "Error: This Java instance does not support a %d-bit JVM.\nPlease install the desired version."
#define JRE_ERROR3      "Error: Improper value at line %d."
#define JRE_ERROR4      "Error: trying to exec %s.\nCheck if file exists and permissions are set correctly."
#define JRE_ERROR5      "Error: Failed to start a %d-bit JVM process from a %d-bit JVM."
#define JRE_ERROR6      "Error: Verify all necessary Java SE components have been installed.\n(Solaris SPARC 64-bit components must be installed after 32-bit components.)"
#define JRE_ERROR7      "Error: Either 64-bit processes are not supported by this platform\nor the 64-bit components have not been installed."
#define JRE_ERROR8      "Error: could not find "
#define JRE_ERROR9      "Error: Unable to resolve %s"
#define JRE_ERROR10     "Error: Unable to resolve current executable"
#define JRE_ERROR11     "Error: Path length exceeds maximum length (PATH_MAX)"
#define JRE_ERROR12     "Error: Exec of %s failed"

#define DLL_ERROR1      "Error: dl failure on line %d"
#define DLL_ERROR2      "Error: failed %s, because %s"
#define DLL_ERROR3      "Error: could not find executable %s"
#define DLL_ERROR4      "Error: loading: %s"

#define REG_ERROR1      "Error: opening registry key '%s'"
#define REG_ERROR2      "Error: Failed reading value of registry key:\n\t%s\\CurrentVersion"
#define REG_ERROR3      "Error: Registry key '%s'\\CurrentVersion'\nhas value '%s', but '%s' is required."
#define REG_ERROR4      "Failed reading value of registry key:\n\t%s\\%s\\JavaHome"

#define SYS_ERROR1      "Error: CreateProcess(%s, ...) failed:"
#define SYS_ERROR2      "Error: WaitForSingleObject() failed."



#endif /* _EMESSAGES_H */