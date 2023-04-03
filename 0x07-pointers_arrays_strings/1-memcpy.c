/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: number of bytes to copy
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, const char *src, size_t n)
{
        for (size_t i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return dest;
}
