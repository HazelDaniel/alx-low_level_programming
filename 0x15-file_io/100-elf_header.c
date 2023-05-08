#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *elf_ids);
void print_magic(unsigned char *elf_ids);
void print_class(unsigned char *elf_ids);
void print_data(unsigned char *elf_ids);
void print_abi(unsigned char *elf_ids);
void print_version(unsigned char *elf_ids);
void print_type(unsigned int elf_type, unsigned char *elf_ids);
void print_os_or_abi(unsigned char *elf_ids);
void print_entry(unsigned long int e_entry, unsigned char *elf_ids);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @elf_ids: A char * containing the ELF magic numbers.
 * Return: void
 */
void check_elf(unsigned char *elf_ids)
{
	int ind;

	for (ind = 0; ind <= 3; ind++)
	{
		if (!(elf_ids[ind] == 127
			|| elf_ids[ind] == 'E'
			|| elf_ids[ind] == 'L'
			|| elf_ids[ind] == 'F'))
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);
		}
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @elf_ids: A char* containing the ELF class.
 * Return: void
 */
void print_class(unsigned char *elf_ids)
{
	printf("  Class:                             ");

	switch (elf_ids[EI_CLASS])
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
		printf("<unknown: %x>\n", elf_ids[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @elf_ids: A char * containing the ELF class.
 * Return: void
 */
void print_data(unsigned char *elf_ids)
{
	printf("  Data:                              ");

	switch (elf_ids[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ids[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @elf_ids: A char * containing the ELF version.
 * Return: void
 */
void print_version(unsigned char *elf_ids)
{
	printf("  Version:                           %d",
	 elf_ids[EI_VERSION]);
	switch (elf_ids[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		return;
	default:
		printf("\n");
		return;
	}
}

/**
 * print_os_or_abi - Prints the OS/ABI of an ELF header.
 * @elf_ids: A char * containing the ELF version.
 * Return: void
 */
void print_os_or_abi(unsigned char *elf_ids)
{
	printf("  OS/ABI:                            ");

	switch (elf_ids[EI_OSABI])
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
		printf("<unknown: %x>\n", elf_ids[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @elf_ids: A char * containing the ELF ABI version.
 * Return: void
 */
void print_abi(unsigned char *elf_ids)
{
	printf("  ABI Version:                       %d\n",
	 elf_ids[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @elf_type: The ELF type.
 * @elf_ids: A char * containing the ELF class.
 * Return: void
 */
void print_type(unsigned int elf_type, unsigned char *elf_ids)
{
	if (elf_ids[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
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
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @elf_ids: A char * containing the ELF class.
 * Return: void
 */
void print_entry(unsigned long int e_entry, unsigned char *elf_ids)
{
	printf("  Entry point address:               ");

	if (elf_ids[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (elf_ids[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - A function that closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - A function that displays ELF header information
 * at the beginning of an ELF file.
 * @argc: parameter of type int
 * @argv: parameter of type (char *)[]
 * Return: int .
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int elf_file, r;

	(void)argc;
	elf_file = open(argv[1], O_RDONLY);
	if (elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(elf_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(elf_file, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header), close_elf(elf_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n"), print_magic(header->e_ident);
	print_class(header->e_ident), print_data(header->e_ident);
	print_version(header->e_ident);
	print_os_or_abi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header), close_elf(elf_file);

	return (0);
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @elf_ids: A char * containing the ELF magic numbers.
 * Return: void
 */
void print_magic(unsigned char *elf_ids)
{
	int ind;

	printf("  Magic:   ");
	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", elf_ids[ind]);

		if (ind != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}
