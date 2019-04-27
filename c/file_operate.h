/**
 *
 *
 */ 

#ifndef FILE_OPERATE_H
#define FILE_OPERATE_H

#include <stddef.h>  // Use for size_t 

/* get bytes of the file.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
long length(const char *filename);

/* Read file: Text and Line mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int read_by_text_line(const char *filename);

/* Read file: Text and Block mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int read_by_text_block(const char *filename);

/* Read file: Binary and Line mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int read_by_binary_line(const char *filename);

/* Read file: Binary and Block mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int read_by_binary_block(const char *filename);

/* Write file: Text and Line mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int write_by_text_line(const char *filename);

/* Write file: Text and Block mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int write_by_text_block(const char *filename);

/* Write file: Binary and Line mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int write_by_binary_line(const char *filename);

/* Write file: Binary and Block mode.
 *
 * @param filename Name of the file.
 * @return bytes of filename.
 */
int write_by_binary_block(const char *filename);

/* Parameter input by stdin(string):
 *
 * @param param[] Save parameters, coming-and-out.
 * @param len Total length of parameters.
 * @return bytes of filename.
 */
int parameter_input(char *param[], size_t len);
#endif
