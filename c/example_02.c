/** Read documents in a variety of ways.
 */

#include "file_operate.h"
#include "g_time.h"

#include <stdio.h>
#include <string.h>

const char *w_file = "./w_file";
const char *r_file = "./r_file";


void run(){
    int ret = -1;
    //if((ret = read_by_text_line(r_file))){
    if((ret = read_by_text_block(r_file))){
        printf("Read file err.\n");
    }
    
}

int main(int argc, char *argv[])
{
    run();

    return 0;
}
