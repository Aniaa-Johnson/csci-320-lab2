// TODO: add the appropriate header files here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>

/**************************************************************
 *  ipc_create - creates a shared memory object called lab2 and
 *               returns a char pointer to the memory shared
 *               memory object.
 * 
 *  size - is the size of the memory object to create.
 *   
 ***************************************************************/

int main() {
    // TODO: create the shared memory object called lab2
    const char *shm_name = "/lab2"; 
    int shm_fd = shm_open(shm_name, O_CREAT | O_RDWR, 0666);
    if (shm_fd == -1) {
        perror("shm_open");
        exit(1);
    }
    // TODO: configure the size of the shared memory object 
     if (ftruncate(shm_fd, size) == -1) {
        perror("ftruncate");
        exit(1);
    }
    // TODO: memory map the shared memory object */
     shared_memory_ptr = (char*)mmap(0, size, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (shared_memory_ptr == MAP_FAILED) {
        perror("mmap");
        exit(1);
    }


/**************************************************************
 * ipc_close - closes the ipc communication channel that was
 *             created with ipc_create.
 * 
 **************************************************************/
void ipc_close(){
    shm_unlink("lab2");
}