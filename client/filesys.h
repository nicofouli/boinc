// The contents of this file are subject to the Mozilla Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/ 
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License. 
// 
// The Original Code is the Berkeley Open Infrastructure for Network Computing. 
// 
// The Initial Developer of the Original Code is the SETI@home project.
// Portions created by the SETI@home project are Copyright (C) 2002
// University of California at Berkeley. All Rights Reserved. 
// 
// Contributor(s):
//
#ifdef HAVE_DIRENT_H
#include <dirent.h>
#endif

extern DIR *dir_open(char*);
extern int dir_scan(char*,DIR*);
extern void dir_close(DIR*);
extern int file_delete(char*);
extern int file_size(char*, int&);
extern int boinc_link( char *existing, char *new_link );
extern int clean_out_dir(char*);
extern double dir_size(char* dirpath);
