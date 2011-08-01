/* proto.h - The prototypes for the dbm routines. */

/* This file is part of GDBM, the GNU data base manager.
   Copyright (C) 1990, 1991, 1993, 2007  Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */


/* From bucket.c */
void _gdbm_new_bucket	(GDBM_FILE, hash_bucket *, int);
void _gdbm_get_bucket	(GDBM_FILE, int);
void _gdbm_split_bucket (GDBM_FILE, int);
void _gdbm_write_bucket (GDBM_FILE, cache_elem *);

/* From falloc.c */
off_t _gdbm_alloc       (GDBM_FILE, int);
void _gdbm_free         (GDBM_FILE, off_t, int);
int  _gdbm_put_av_elem  (avail_elem, avail_elem [], int *, int);

/* From findkey.c */
char *_gdbm_read_entry  (GDBM_FILE, int);
int _gdbm_findkey       (GDBM_FILE, datum, char **, int *);

/* From hash.c */
int _gdbm_hash (datum);

/* From update.c */
void _gdbm_end_update   (GDBM_FILE);
void _gdbm_fatal	(GDBM_FILE, const char *);

/* From gdbmopen.c */
int _gdbm_init_cache	(GDBM_FILE, int);

/* From mmap.c */
int _gdbm_mapped_init	(GDBM_FILE);
void _gdbm_mapped_unmap	(GDBM_FILE);
ssize_t _gdbm_mapped_read	(GDBM_FILE, void *, size_t);
ssize_t _gdbm_mapped_write	(GDBM_FILE, void *, size_t);
off_t _gdbm_mapped_lseek	(GDBM_FILE, off_t, int);
int _gdbm_mapped_sync	(GDBM_FILE);

/* From lock.c */
void _gdbm_unlock_file	(GDBM_FILE);
int _gdbm_lock_file	(GDBM_FILE);


