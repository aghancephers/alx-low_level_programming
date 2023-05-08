#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void check_elf(unsigned char *e_ident);
void print_field(const char* field_name, const char* format, ...);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident) {
    for (int i = 0; i < 4; i++) {
        if (e_ident[i] != 0x7F && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F') {
            fprintf(stderr, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * print_field - Prints the field with the specified format.
 * @field_name: The name of the field to print.
 * @format: The format string for the field.
 */
void print_field(const char* field_name, const char* format, ...) {
    va_list args;

    printf(" %s: ", field_name);

    va_start(args, format);
    vprintf(format, args);
    va_end(args);

    printf("\n");
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident) {
    const char* class_name;
    switch (e_ident[EI_CLASS]) {
        case ELFCLASSNONE: class_name = "none"; break;
        case ELFCLASS32: class_name = "ELF32"; break;
        case ELFCLASS64: class_name = "ELF64"; break;
        default: class_name = "<unknown>"; break;
    }

    print_field("Class", "%s", class_name);
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ident) {
    const char* data_name;
    switch (e_ident[EI_DATA]) {
        case ELFDATANONE: data_name = "none"; break;
        case ELFDATA2LSB: data_name = "2's complement, little endian"; break;
        case ELFDATA2MSB: data_name = "2's complement, big endian"; break;
        default: data_name = "<unknown>"; break;
    }

    print_field("Data", "%s", data_name);
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident) {
    print_field("Version", "%d", e_ident[EI_VERSION]);
    switch (e_ident[EI_VERSION]) {
        case EV_CURRENT: printf(" (current)\n"); break;
        default: printf("\n"); break;
    }
}

/**
 * print_abi - Prints the ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI.
 */
void print_abi(unsigned char *e_ident) {
  char* abi_name;

  switch (e_ident[EI_OSABI]) {
    case ELFOSABI_SYSV:
      abi_name = "UNIX System V ABI";
      break;
    case ELFOSABI_HPUX:
      abi_name = "HP-UX ABI";
      break;
    case ELFOSABI_NETBSD:
      abi_name = "NetBSD ABI";
      break;
    case ELFOSABI_LINUX:
      abi_name = "Linux ABI";
      break;
    case ELFOSABI_SOLARIS:
      abi_name = "Solaris ABI";
      break;
    case ELFOSABI_IRIX:
      abi_name = "IRIX ABI";
      break;
    case ELFOSABI_FREEBSD:
      abi_name = "FreeBSD ABI";
      break;
    case ELFOSABI_TRU64:
      abi_name = "TRU64 UNIX ABI";
      break;
    case ELFOSABI_ARM:
      abi_name = "ARM architecture ABI";
      break;
    case ELFOSABI_STANDALONE:
      abi_name = "Standalone (embedded) application";
      break;
    default:
      abi_name = "<unknown>";
  }

  print_field("ABI", "%s", abi_name);
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF OS/ABI.
 */
void print_osabi(unsigned char *e_ident) {
  printf("  OS/ABI: ");

  switch (e_ident[EI_OSABI]) {
    case ELFOSABI_SYSV:
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
      printf("Standalone (embedded) application\n");
      break;
    default:
      printf("<unknown: %x>\n", e_ident[EI_OSABI]);
  }
}

/**
 * print_type - Prints the type of an ELF file.
 * @e_type: The type of the ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void print_type(unsigned int e_type, unsigned char *e_ident) {
  const char* type_name;

  switch (e_type) {
    case ET_NONE:
      type_name = "NONE (None)";
      break;
    case ET_REL:
      type_name = "REL (Relocatable file)";
      break;
    case ET_EXEC:
      type_name = "EXEC (Executable file)";
      break;
    case ET_DYN:
      type_name = "DYN (Shared object file)";
      break;
    case ET_CORE:
      type_name = "CORE (Core file)";
      break;
    default:
      type_name = "<unknown>";
  }

  print_field("Type", "%s", type_name);

  if (e_ident[EI_DATA] == ELFDATA2MSB && e_type == ET_REL) {
    printf("Error: Invalid data encoding for relocatable file\n");
    exit(98);
  }
}

/**
 * print_entry - Prints the entry point of an ELF file.
 * @e_entry: The entry point of the ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident) {
  print_field("Entry point address", "%#lx", e_entry);

  if (e_ident[EI_CLASS] == ELFCLASS32 && e_entry > UINT32_MAX) {
    printf("Error: Invalid entry point for 32-bit ELF file\n");
    exit(98);
  }
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor for the ELF file.
 */
void close_elf(int elf) {
  if (close(elf) < 0) {
    perror("Error: Cannot close file descriptor");
    exit(98);
  }
}

/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv) {
  int elf, n_read;
  Elf64_Ehdr header;
  unsigned char e_ident[EI_NIDENT];

  if (argc != 2) {
    printf("Usage: %s elf_filename\n", argv[0]);
    exit(98);
  }

  elf = open(argv[1], O_RDONLY);
  if (elf < 0) {
    perror("Error: Cannot open file");
    exit(98);
  }

  n_read = read(elf, &e_ident, EI_NIDENT);
  if (n_read != EI_NIDENT) {
    printf("Error: Cannot read ELF header\n");
    exit(98);
  }

  check_elf(e_ident);

  n_read = read(elf, &header, sizeof(header));
  if (n_read != sizeof(header)) {
    printf("Error: Cannot read ELF header\n");
    exit(98);
  }

  print_class(e_ident);
  print_data(e_ident);
  print_version(e_ident);
  print_abi(header.e_ident);
  print_osabi(header.e_ident);
  print_type(header.e_type, e_ident);
  print_entry(header.e_entry, e_ident);

  close_elf(elf);
  return (0);
}

