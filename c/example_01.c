/** get file length(bytes).
 */

#include "file_operate.h"

#include <stdio.h>

void run(){
    const char *filename = "/etc/profile";
    printf("file length: %ld\n", length(filename));

}

int main(int argc, char *argv[])
{
    run();

    return 0;
}
