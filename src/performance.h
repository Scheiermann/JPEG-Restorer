/*
 * performance.h
 *
 *  Created on: 26 Nov 2014
 *      Author: Brandon
 */

#ifndef PERFORMANCE_H_
#define PERFORMANCE_H_

#include "globals.h"
#include "helper.h"
#include "decoding.h"
#include "carver.h"
#include "jpegtools.h"

extern int jpeg_headers;
extern int jpeg_footers;

void analyze_recovered_images(char *);
int compare_two_binay_files(char *, char *);
int create_directory(char *);

#endif /* PERFORMANCE_H_ */
