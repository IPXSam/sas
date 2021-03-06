/*
 *  opt.h
 *  Copyright (C) 2015 Samuel Dominguez Lorenzo
 */
#ifndef OPT_H
#define OPT_H

struct opt_t {
	char **asm_fname; /* name of the assembly files */
	char *obj_fname; /* name of the object file */
	int obj_name_spec; /* did the user specify an object name? */
	int asm_fcount; /* how many asm files? */
	int sof_lib_mode; /* generate lib file for SOF object file format? */
	int org;	/* where the program expects to be loaded */
};

#endif /* OPT_H */
