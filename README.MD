# Wi-Fi Profile Password Viewer

This C program allows users to view the password of a specified Wi-Fi network profile on a Windows system. It utilizes the `netsh` command-line utility to retrieve and display the password.

## Instructions

1. Ensure you have a C compiler installed on your system, such as GCC.
2. Clone or download this repository.
3. Compile the program using the command: `gcc wifi_profile_viewer.c -o wifi_profile_viewer`.
4. Run the compiled executable: `./wifi_profile_viewer`.
5. Follow the on-screen instructions to input the Wi-Fi profile name.
6. The program will display the password for the specified Wi-Fi profile.

## Usage

The program first lists all available Wi-Fi profiles using the `netsh wlan show profiles` command. Then, it prompts the user to enter the name of the Wi-Fi profile for which they want to view the password.

If the entered Wi-Fi profile name is valid, the program retrieves and displays the password using the `netsh wlan show profiles name="<profile_name>" key=clear` command.

If any error occurs during input or execution, appropriate error messages will be displayed.

## Dependencies

- Standard C Library
  - `<stdio.h>`: For input/output operations.
  - `<stdlib.h>`: For system calls and memory management.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

