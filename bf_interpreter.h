/* simple brainfuck interpreter written by Quinn Dibble */

/* error codes:
 *
 */
#define DEFAULT_ARRAY_SIZE 16


int increment_data_pointer(char * ptr);
int decrement_data_pointer(char * ptr);
int increment_data_value(char * ptr);
int decrement_data_value(char * ptr);
int output_data_value(char * ptr);
int input_data_value(char * ptr);
int open_bracket(char * ptr);
int close_bracket(char * ptr);

