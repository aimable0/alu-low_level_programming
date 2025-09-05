#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main() {
const char *msg = "This is an error message\n";
write(2, msg, strlen(msg)); // 2 = stderr
return (1);
}