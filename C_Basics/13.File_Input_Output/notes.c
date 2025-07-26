/*
Data Organization:

1. RAM (Random Access Memory): Volatile memory for temporary data storage while a computer is running.

2. ROM (Read-Only Memory): Non-volatile memory used primarily to store firmware.

3. Hard Disk Drives (HDDs): Mechanical, magnetic storage devices for long-term data retention.

4. Solid-State Drives (SSDs): Fast, non-volatile(jo likh diya wo permanent) storage devices that use flash memory.

5. Cache Memory: A small, speedy volatile memory in CPUs or between CPU and RAM to store frequent data.

6. Virtual Memory: Part of a hard drive used as RAM for extending physical memory, albeit slower.

7. Flash Memory: Non-volatile memory used in USB drives and memory cards for portability.

8. Optical Storage: Media like CDs, DVDs, and Blu-ray discs for laser-read data storage.

*/

/*

Data Organization:

1. Simplicity: C library functions provide a simple interface for file operations,
hiding complex OS details.

2. Portability: Programs use the same library calls regardless of the underlying
OS, enhancing code portability.

3. Standardization: The C Standard Library ensures consistent behavior across
different environments.

4. Ease of Use: Developers can perform file operations without knowing OS-
specific system calls.

5. Abstraction: The library acts as an abstraction layer, managing OS interactions
and disk I/O seamlessly.

*/

/*
File  Operations:

1. Creation of a New File: Establishes a new file on disk, typically opened in write or
append mode.

2. Opening an Existing File: Acquires access to an existing file.

3. Reading from a File: Retrieves data from a file, usually into a program's buffer.

4. Writing to a File: Outputs data to a file, storing it on disk from the program's buffer.

5. Moving to a Specific Location in a File (Seeking): Changes the current position of the file
pointer to a specified location for subsequent operations.

6. Closing a File: Releases the file, ensuring all buffers are flushed and resources are freed.
*/

/*
Text Files & Binary Files:

1. Encoding: Text files store data in human-readable format while binary files store data in the same
format as the in-memory representation.

2. Data Interpretation: Text files represent data as characters, whereas binary files represent data as a
sequence of bytes.

3. Portability: Text files are more portable across different platforms. Binary files can be platform-
specific due to different data representations.

4. Efficiency: Binary files are generally more efficient for I/O operations because 
they don't require translation.
*/
