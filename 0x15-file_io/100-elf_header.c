#include "main.h"

void check_if_elf(unsigned char *e_ptr);
void print_elf_magic(unsigned char *e_ptr);
void print_elf_class(unsigned char *e_ptr);
void print_elf_data(unsigned char *e_ptr);
void print_elf_version(unsigned char *e_ptr);
void print_elf_osabi(unsigned char *e_ptr);
void print_elf_abi(unsigned char *e_ptr);
void print_elf_type(unsigned int e_typ, unsigned char *e_ptr);
void print_elf_address(unsigned long int e_addr, unsigned char *e_ptr);
void close_elf(int fd);
int main(int __attribute__((__unused__)) argc, char *argv[]);

/**
 * check_if_elf - Checking if it is an ELF file
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void check_if_elf(unsigned char *e_ptr)
{
	int k;

	for (k = 0 ; k < 4; k++)
	{
		if (e_ptr[k] != 127 &&
		    e_ptr[k] != 'E' &&
		    e_ptr[k] != 'L' &&
		    e_ptr[k] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: It is not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_elf_magic - Printing magic bytes of the ELF header
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_magic(unsigned char *e_ptr)
{
	int k;

	printf("  Magic:   ");
	for (k = 0 ; k < EI_NIDENT ; k++)
	{
		printf("%02x", e_ptr[k]);
		if (k == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - Printing the class of the ELF header
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_class(unsigned char *e_ptr)
{
	printf("  Class:                             ");

	switch (e_ptr[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ptr[EI_CLASS]);
	}
}

/**
 * print_elf_data - Printing the data encoding info the an ELF header
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_data(unsigned char *e_ptr)
{
	printf("  Data:                              ");

	switch (e_ptr[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ptr[EI_CLASS]);
	}
}

/**
 * print_elf_version - Printing the version info of the ELF header
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_version(unsigned char *e_ptr)
{
	printf("  Version:                           %d",
	       e_ptr[EI_VERSION]);

	switch (e_ptr[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_elf_osabi - Printing the operating system/ABI info of the ELF header
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_osabi(unsigned char *e_ptr)
{
	printf("  OS/ABI:                            ");

	switch (e_ptr[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ptr[EI_OSABI]);
	}
}

/**
 * print_elf_abi - Printing the ABI info of the ELF header
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_abi(unsigned char *e_ptr)
{
	printf("  ABI Version:                       %d\n",
	       e_ptr[EI_ABIVERSION]);
}

/**
 * print_elf_type - Printing the type of the ELF header.
 * @e_typ: the ELF type to be printed
 * @e_ptr: pointer to the ELF header
 * Return: it is void
 */

void print_elf_type(unsigned int e_typ, unsigned char *e_ptr)
{
	if (e_ptr[EI_DATA] == ELFDATA2MSB)
		e_typ >>= 8;
	printf("  Type:                              ");

	switch (e_typ)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_typ);
	}
}

/**
 * print_elf_address - Printing the entry point address of the ELF header
 * @e_addr: the address of the ELF entry point
 * @e_ptr: pointer to the ELF header
 * Return: void
 */

void print_elf_address(unsigned long int e_addr, unsigned char *e_ptr)
{
	printf("  Entry point address:               ");

	if (e_ptr[EI_DATA] == ELFDATA2MSB)
	{
		e_addr = ((e_addr << 8) & 0xFF00FF00) |
			  ((e_addr >> 8) & 0xFF00FF);
		e_addr = (e_addr << 16) | (e_addr >> 16);
	}
	if (e_ptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_addr);
	else
		printf("%#lx\n", e_addr);
}

/**
 * close_elf - Closing an ELF file
 * @fd: the file descriptor of the ELF file
 * Return: it is void
 */

void close_elf(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close file descriptor %d\n", fd);
		exit(98);
	}
}

/**
 * main - Displaying the information contained in the program
 * @argc: arguments count
 * @argv: pointer to the arguments
 * Return: it is 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elfh;
	int o;
	int r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	elfh = malloc(sizeof(Elf64_Ehdr));
	if (!elfh)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, elfh, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(elfh);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_if_elf(elfh->e_ident);
	printf("ELF Header:\n");
	print_elf_magic(elfh->e_ident);
	print_elf_class(elfh->e_ident);
	print_elf_data(elfh->e_ident);
	print_elf_version(elfh->e_ident);
	print_elf_osabi(elfh->e_ident);
	print_elf_abi(elfh->e_ident);
	print_elf_type(elfh->e_type, elfh->e_ident);
	print_elf_address(elfh->e_entry, elfh->e_ident);

	free(elfh);
	close_elf(o);
	return (0);
}
